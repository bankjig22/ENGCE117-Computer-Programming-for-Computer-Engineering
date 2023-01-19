#include <stdio.h>

struct Rectangle {
  int length;
  int width;
};

void doubleRectangle(struct Rectangle *rect) {
  rect->length *= 2;
  rect->width *= 2;
}

int main() {
  struct Rectangle rect = {2, 3};
  struct Rectangle *p = &rect;

  doubleRectangle(p);
  printf("length: %d, width: %d\n", rect.length, rect.width);
  return 0;
}