//
//  ClassThatUseDB.h
// 2023-10-20
// Ivan Konishchev
//
#pragma once
#include "DBConnection.h"
#include <iostream>
#include <string>

class ClassThatUseDB
{
private:
	DBConnection* connection_;
public:
    ClassThatUseDB() = delete;
	ClassThatUseDB(DBConnection* connection);
	~ClassThatUseDB() = default;

	int openConnection();
	MYSQL_RES useConnection(const char* command);
	void closeConnection();

};