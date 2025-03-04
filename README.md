запуск через cmake 

mkdir build    если не создан
cd build
cmake ..
make
./money

запуск просто компилятором 

g++ main.cpp -o main
./main

запуск через докер контейнер

docker build -t money .
docker run -it money


заход в контейнерную фаловую систему

docker run -it money /bin/bash

выход
exit