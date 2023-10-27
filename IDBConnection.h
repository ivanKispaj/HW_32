//
//  IDBConnection.h
// 2023-10-20
// Ivan Konishchev
//

#pragma once
#include <mysql.h>

class IDBConnection
{
public:
	virtual ~IDBConnection() = default;
	virtual int open() = 0;
	virtual void close() = 0;
	virtual MYSQL_RES execQuery(const char* command) = 0;
};