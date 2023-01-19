#include <stdio.h>

struct student {
  char name[20];
  int age;
  char sex;
  float gpa;
}; typedef struct student stds;

int main() {
  stds aboy ;
  aboy.age = 20;
  printf("%d\n", aboy.age);
  return 0;
}