# stage 1
FROM gcc:10 AS builder

RUN apt-get update && apt-get install -y cmake make libgtest-dev

WORKDIR /app

COPY . .

RUN mkdir build
WORKDIR /app/build

RUN cmake ..
RUN make

# stage 2
FROM debian:bullseye-slim

WORKDIR /app

COPY --from=builder /app/build/calculator .

CMD ["/bin/bash"]