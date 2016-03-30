#include <stdio.h>
#include "registers.h"
#include "operations.h"


int main(void)
{
  struct reg t0;
  t0.name  = "$t0";
  t0.value = 0x7fffeffc;

  printf("The register's name is:%s\nIt's value is:%li\n",
        			      t0.name, t0.value);

  return 0;

}

