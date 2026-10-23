cmake_minimum_required(VERSION 3.28)
project(SENG211_Library)

set(CMAKE_CXX_STANDARD 17)

# Ana main dosyası
add_executable(SENG211_Library main.cpp)

# Exercises klasörünün içindeki tüm .cpp dosyalarını otomatik bulur ve ayrı ayrı derler
file(GLOB EXERCISE_FILES Exercises/*.cpp)
foreach(exercise_file ${EXERCISE_FILES})
    get_filename_component(target_name ${exercise_file} NAME_WE)
    add_executable(${target_name} ${exercise_file})
endforeach()