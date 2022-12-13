#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main (int argc, char *argv[])
{
  int min = 11125;
  int max = 405238;
  srand(time(0));

  puts("printing random sauce, press CTRL+C to stop");
  puts("probably will generate a number twice");
    sleep(2);
  
    while (1) {
    int sauce = rand() % (max + 1 - min) + min;
    printf("\nhttps://nhentai.net/g/%d", sauce);
    usleep(31000);
  };
  return 0;
}
