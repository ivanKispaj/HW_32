//
//  ClassThatuseDB.cpp
// 2023-10-20
// Ivan Konishchev
//


#include "ClassThatUseDB.h"

ClassThatUseDB::ClassThatUseDB(DBConnection* connection) :connection_(connection) {}

int ClassThatUseDB::openConnection()
{
	return connection_->open();
}

MYSQL_RES ClassThatUseDB::useConnection(const char* command)
{
	return connection_->execQuery(command);
}

void ClassThatUseDB::closeConnection()
{
	connection_->close();
}