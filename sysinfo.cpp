#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
  system("echo -n '\nHostname: '"); system("hostname");
  system("echo -n '\nAddress: '"); system("ip a");
  system("echo -n '\nDate/Time: '"); system("date");
  system("echo '\nFilesystem Utilization:'"); system("df -h; echo");
  return 0;
}