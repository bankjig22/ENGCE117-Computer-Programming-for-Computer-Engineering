#include <stdio.h>

struct Rectangle {
  int length;
  int width;
};

int main() {
  struct Rectangle rect = {2, 3};
  struct Rectangle *p = &rect;
  p->length = 5;
  p->width = 10;
  printf("length: %d, width: %d\n", rect.length, rect.width);
  return 0;
}