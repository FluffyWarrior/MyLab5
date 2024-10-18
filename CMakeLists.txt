cmake_minimum_required(VERSION 3.10) 
project(LaboratoryFive)
   
include_directories(inc)

# Укажите файлы для компиляции
add_executable(LaboratoryFive
  src/Main.cpp 
  #src/AllIncludes.cpp
  src/ComplexNumbers.cpp
  src/ComplexNumbersIO.cpp
  #src/ComplexOperations.cpp
  inc/AllIncludes.h
  inc/ComplexNumbers.h
  inc/ComplexNumbersIO.h
  inc/ComplexOperations.h
)