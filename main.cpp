//
//  main.cpp
// 2023-10-20
// Ivan Konishchev
//

#include<iostream>
#include "Test.h"

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}