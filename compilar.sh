#!/bin/bash
# source ./compilar.sh
cd acessorios-cpp/
cd ataque/
g++ -c *.cpp
cd ../defesa/
g++ -c *.cpp
cd ../../personagens-cpp/
g++ -c *.cpp
cd ../core-simulador-cpp/
g++ -c *.cpp 
cd ..
g++ principal/main.cpp acessorios-cpp/*/*.o personagens-cpp/*.o core-simulador-cpp/*.o -o simulador.out