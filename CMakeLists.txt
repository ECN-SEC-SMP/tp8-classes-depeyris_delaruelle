cmake_minimum_required(VERSION 3.10)

# Définir le nom du projet
project(Animals)

# Ajouter les drapeaux de compilation
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra")

# Ajouter les fichiers source à la variable SOURCES
set(SOURCES main.cpp animal.cpp lion.cpp pierre.cpp loup.cpp ours.cpp attaque.cpp)

# Ajouter l'exécutable
add_executable(${PROJECT_NAME} ${SOURCES})

# Inclure les répertoires d'en-tête
include_directories(${PROJECT_SOURCE_DIR})

# Compiler toutes les bibliothèques
add_library(lion lion.cpp)
add_library(animal animal.cpp)
add_library(pierre pierre.cpp)
add_library(loup loup.cpp)
add_library(ours ours.cpp)
add_library(attaque attaque.cpp)

# Lier toutes les bibliothèques à l'exécutable
target_link_libraries(${PROJECT_NAME} animal attaque loup lion pierre ours)

# Activer le débogage
set(CMAKE_BUILD_TYPE Debug)