# 32.6. Итоговое задание
    Задание: создать тесты с моком объекта, имитирующим подключение к базе данных.

    Подробнее: напишите реализацию классов (которые будут участвовать в тестах), как показано на схеме:
<img src="https://github.com/ivanKispaj/HW_32/assets/91827767/87d540c6-ca35-4606-819f-c931ed6a8870">

## Компиляция и запуск

MacOS:

    * Папки gmock and gtest с заголовочными файлами должны лежать по адресу:
        /usr/local/include
    * mysql должна находится в usr/local
    * cd 'путь к проекту'
    * mkdir build
    * cd build
    * cmake ..
    * make
    * ./HW_32


linux/ubuntu:
    
    * Папки gmock and gtest с заголовочными файлами должны лежать по адресу:
        /usr/include
    * библиотеки gmock/gtest/mysql в каталоге /usr/include/x86_64-linux-gnu
    * cd 'путь к проекту'
    * mkdir build
    * cd build
    * cmake ..
    * make
    * ./HW_32

  
