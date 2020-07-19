#include <stdio.h>
#include <stdlib.h>
#include "../dsa.h"

#define dl import_string_dllf

void main() {


string_dll* dlins = dl.create();
dl.push(dlins,"I");
dl.push(dlins,"need");
dl.push(dlins,"to");
dl.push(dlins,"check");
dl.push(dlins,"this");
dl.add(dlins,"hai");
dl.print(dlins);
dl.pop(dlins);
dl.remove(dlins);
printf("count=%d\n",dlins->count);
dl.reverse(dlins);
//dl.insert(dlins,4,"project");
//dl.delete(dlins,1);
//printf("\n");
dl.print(dlins);
printf("\n");
dl.print_in_reverse(dlins);
}
