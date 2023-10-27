//
//  DBConnection.h
// 2023-10-20
// Ivan Konishchev
//
#pragma once
#include "IDBConnection.h"

class DBConnection: public IDBConnection
{
public:
	~DBConnection() = default;
	int open() override;
	void close() override;
	MYSQL_RES execQuery(const char* command) override;
};