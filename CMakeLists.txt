cmake_minimum_required(VERSION 3.12)
project(hw_32)

set(CMAKE_CXX_STANDARD 20)
# Установка пути к заголовочным файлам и библиотекам gTest и gMock
set(GTEST_ROOT /usr/local)
set(GMOCK_ROOT /usr/local)
set(MYSQL_ROOT /usr/local/mysql)
# Найдите библиотеки MySQL
#find_package(mysqlclient REQUIRED)

# Настройка путей к заголовочным файлам
include_directories(
    ${PROJECT_SOURCE_DIR}
    ${MYSQL_ROOT}/include
    ${GTEST_ROOT}/include
    ${GMOCK_ROOT}/include
)

# Настройка путей к библиотекам
link_directories(
    ${MYSQL_ROOT}/lib
    ${GTEST_ROOT}/lib
    ${GMOCK_ROOT}/lib
)


# Создание исполняемого файла
add_executable(hw_32
    ClassThatuseDB.cpp
    ClassThatUseDB.h
    DBConnection.cpp
    DBConnection.h
    IDBConnection.h
    Test.h
    main.cpp
)

# Линковка библиотек
target_link_libraries(hw_32
    mysqlclient
    gmock
    gtest
)