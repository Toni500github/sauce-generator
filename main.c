#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main (int argc, char *argv[])
{
  int min = 11125;
  int max = 405238;
  
  printf("%s\n", "printing random sauce, press CTRL+C to stop");
  printf("%s\n", "DISCLAIMER: SOME NUMBERS ARE DANGEROUS, JUST CLOSE THESE IMMEDIATLY BY CTRL+W ON BROWSER");
    sleep(3);
  while (1) {
    int r = rand() % (max + 1 - min) + min;
    printf("\nhttps://nhentai.net/g/%d", r);
    usleep(31000);
  };
  return 0;
}
