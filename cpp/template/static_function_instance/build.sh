#!/bin/bash

g++ -c libsa.cpp -std=c++11 
g++ -c libsb1.cpp -std=c++11
g++ -c libsb2.cpp -std=c++11
ar -r libsa.a libsa.o
ar -r libsb.a libsb1.o libsb2.o

g++ libda.cpp -shared -fPIC -o libda.so -std=c++11
g++ libdb1.cpp libdb2.cpp -shared -fPIC -o libdb.so -std=c++11

g++ -L. main.cpp cpp_a.cpp cpp_b.cpp libsa.a libsb.a -L. -lda -ldb -std=c++11 
