cmake_minimum_required(VERSION 3.24)

project(QtExampleProject)

# путь к Qt
set(Qt6_DIR "C:/Qt/6.6.1/mingw_64/lib/cmake/Qt6")

# Найти пакет Qt6
find_package(Qt6 COMPONENTS Widgets REQUIRED)

# Включить автоматическую обработку moc, rcc и uic
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# каталоги для поиска заголовочных файлов
include_directories(${CMAKE_SOURCE_DIR}/include)

#  исполняемые файлы
add_executable(${PROJECT_NAME}
    src/main.cpp
    )

# Связать с библиотеками Qt
target_link_libraries(${PROJECT_NAME} Qt6::Widgets)
