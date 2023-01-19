#include <stdio.h>

struct Rectangle {
  int length;
  int width;
};

void doubleRectangleByValue(struct Rectangle rect) {
  rect.length *= 2;
  rect.width *= 2;
  printf("In Function -> length: %d, width: %d\n", rect.length, rect.width);
}

int main() {
  struct Rectangle rect = {2, 3};
  doubleRectangleByValue(rect);
  printf("Out Function -> length: %d, width: %d\n", rect.length, rect.width);
  return 0;
}