#include "lib/models/nfv_resource.h"
#include "lib/execution/nfv_execute.h"
#include "lib/parse/y.tab.h"
#include <stdio.h>

nfv_resource *nfv_parse(int argc, char *argv[]);

int main(int argc, char *argv[])
{
  nfv_resource *nfv;
  if ( argc < 2 ) {
    printf("Usage: %s input_filename\n", argv[0]);
    return 0;
  }
  nfv = nfv_parse(argc, argv);
  nfv_execute(nfv, 0);
  return 0;
}