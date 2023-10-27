cmake_minimum_required(VERSION 3.12)
project(hw_32)

set(CMAKE_CXX_STANDARD 20)

# Установка пути к gTest и gMock для MacOS
if(APPLE)
message("Running on macOS")
set(GTEST_ROOT /usr/local)
set(GMOCK_ROOT /usr/local)
set(MYSQL_ROOT /usr/local/mysql)
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

# Установка пути к gTest и gMock ubuntu
elseif(UNIX)
message("Running on Ubuntu")
set(GTEST_ROOT /usr)
set(GMOCK_ROOT /usr)
set(MYSQL_ROOT /usr)
# Настройка путей к заголовочным файлам
include_directories(
    ${PROJECT_SOURCE_DIR}
    ${MYSQL_ROOT}/include/mysql
    ${GTEST_ROOT}/include
    ${GMOCK_ROOT}/include
)
# Настройка путей к библиотекам
link_directories(
    ${MYSQL_ROOT}/lib/x86_64-linux-gnu
    ${GTEST_ROOT}/lib
    ${GMOCK_ROOT}/lib
)
endif()

# Создание исполняемого файла
add_executable(hw_32
    ClassThatUseDB.cpp
    ClassThatUseDB.h
    DBConnection.cpp
    DBConnection.h
    IDBConnection.h
    Test.h
    main.cpp
)

# Линковка библиотек
if (APPLE)
target_link_libraries(hw_32
    mysqlclient
    gmock
    gtest
)
elseif(UNIX)
target_link_libraries(hw_32
    mysqlclient
    gmock
    gtest
    pthread
)

endif()