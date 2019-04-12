#include "../../sdk/dexsdk.h"
int main(int argc, char *argv[]) {
  if (argc < 4){
    printf("Usage: chown.exe <fd> <uid> <gid>\n");
    return -1;
  }
  dexsdk_systemcall(0x9F, atoi(argv[1]), atoi(argv[2]),
                    
                    atoi(argv[3]), 0, 0);
  
  return 0;
}