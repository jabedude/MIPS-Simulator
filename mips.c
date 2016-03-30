#include <stdio.h>
#include "registers.h"

int main(void)
{
  struct reg $t0;
  $t0.name  = "$t0";
  $t0.value = 0x00001;

  printf("The register's name is:%s\nIt's value is:%d\n",
        $t0.name, $t0.value);

  return 0;
}
