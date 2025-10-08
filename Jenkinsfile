pipeline {
    agent any // Run this pipeline on any available Jenkins agent

    environment {
        // Define variables used throughout the pipeline
        DOCKER_IMAGE_NAME = "surya162/scientific-calculator-image"
        DOCKER_IMAGE_TAG  = "v${env.BUILD_NUMBER}" // Tag the image with the build number for versioning
    }

    stages {
        // Stage 1: Build the C++ application and run tests
        stage('Build & Test') {
            steps {
                echo 'Building and Testing...'
                // Use the official gcc image to build the project. This matches your Dockerfile's build stage.
                // We run 'make' to compile both the main app and the tests, then run 'runTests'.
                sh 'docker run --rm -v "$(pwd)":/app -w /app gcc:10 /bin/bash -c "apt-get update && apt-get install -y cmake make libgtest-dev && mkdir -p build && cd build && cmake .. && make && ./runTests"'
            }
        }

        // Stage 2: Build the final Docker image for the application
        stage('Build Docker Image') {
            steps {
                echo "Building Docker image: ${DOCKER_IMAGE_NAME}:${DOCKER_IMAGE_TAG}"
                sh "docker build -t ${DOCKER_IMAGE_NAME}:${DOCKER_IMAGE_TAG} ."
            }
        }

        // Stage 3: Push the new image to Docker Hub
        stage('Push to Docker Hub') {
            steps {
                echo "Pushing Docker image to Docker Hub..."
                // Use the credentials you stored in Jenkins (ID: 'dockerhub-credentials')
                withCredentials([usernamePassword(credentialsId: 'dockerhub-credentials', passwordVariable: 'DOCKERHUB_PASSWORD', usernameVariable: 'DOCKERHUB_USERNAME')]) {
                    sh "docker login -u '${DOCKERHUB_USERNAME}' -p '${DOCKERHUB_PASSWORD}'"
                    sh "docker push ${DOCKER_IMAGE_NAME}:${DOCKER_IMAGE_TAG}"
                }
            }
        }

        // Stage 4: Deploy the application using Ansible
        stage('Deploy with Ansible') {
            steps {
                echo 'Deploying the application using Ansible...'
                // Run the Ansible playbook, passing the new image tag as variable
                sh "ansible-playbook -i inventory.ini deploy.yaml --extra-vars 'docker_image_tag=${DOCKER_IMAGE_TAG}'"
            }
        }
    }

    post {
        // This block runs after all stages are completed
        always {
            echo 'Pipeline finished. Cleaning up...'
            // Clean up old Docker images to save space
            sh "docker logout"
        }
    }
}