FROM ubuntu:latest

RUN apt-get update && apt-get install -y build-essential cmake git libpq-dev pkg-config

WORKDIR /app

COPY . .

WORKDIR /app/Money

COPY ./Money .

WORKDIR /app

RUN rm -f CMakeCache.txt

RUN cmake . && make

CMD ["./money"]
