#include <sqlite.h>
#include <iostream>

int main()
{
sqlite3 *dbhandle;
char *szErrorMsg;
int ret;

ret = sqlite3_open("test.db",&dbhandle);

if(ret)
{

}
sqlite3_close(dbhandle);
}
