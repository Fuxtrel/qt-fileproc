cmake_minimum_required(VERSION 3.17)
project(qt-fileproc)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_PREFIX_PATH "/home/alex/Qt/5.15.0/gcc_64")
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


set(QT_VERSION 5)
set(REQUIRED_LIBS Core Gui Widgets)
set(REQUIRED_LIBS_QUALIFIED Qt5::Core Qt5::Gui Qt5::Widgets)

set (Boost_USE_STATIC_LIBS ON)
set (OpenSSL_USE_STATIC_LIBS ON)
set (ZLIB_USE_STATIC_LIBS ON)
set(Qt5_USE_STATIC_LIBS ON)

find_package (Boost REQUIRED COMPONENTS system iostreams filesystem )
find_package(OpenSSL REQUIRED)
find_package(ZLIB REQUIRED)

include_directories (${Boost_INCLUDE_DIRS})
include_directories (${OpenSSL_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} main.cpp mainwindow.cpp mainwindow.h mainwindow.ui file_proc.h file_proc.cpp)

if (NOT CMAKE_PREFIX_PATH)
    message(WARNING "CMAKE_PREFIX_PATH is not defined, you may need to set it "
            "(-DCMAKE_PREFIX_PATH=\"path/to/Qt/lib/cmake\" or -DCMAKE_PREFIX_PATH=/usr/include/{host}/qt{version}/ on Ubuntu)")
endif ()

find_package(Qt${QT_VERSION} COMPONENTS ${REQUIRED_LIBS} REQUIRED)
target_link_libraries(${PROJECT_NAME} ${REQUIRED_LIBS_QUALIFIED})


link_directories(${PROJECT_NAME} ${Boost_LIBRARY_DIRS})
target_link_libraries (${PROJECT_NAME} ${Boost_LIBRARIES})

target_link_libraries(${PROJECT_NAME} ZLIB::ZLIB)

link_directories(${PROJECT_NAME} ${OpenSSL_LIBRARY_DIRS})
target_link_libraries (${PROJECT_NAME} OpenSSL::SSL)