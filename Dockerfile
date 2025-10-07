# Stage 1: Build the application on Debian Bullseye (via gcc:10)
FROM gcc:10 AS builder

# Install build dependencies
RUN apt-get update && apt-get install -y cmake make libgtest-dev

# Set the working directory
WORKDIR /app

# Copy the source code to the container
COPY . .

# Create a build directory
RUN mkdir build
WORKDIR /app/build

# Build the project using CMake
RUN cmake ..
RUN make

# Stage 2: Create the final image using the same Debian version (Bullseye)
FROM debian:bullseye-slim

# Set the working directory
WORKDIR /app

# Copy the built executable from the builder stage
COPY --from=builder /app/build/calculator .

# Set the command to run when the container starts
CMD ["/bin/bash"]