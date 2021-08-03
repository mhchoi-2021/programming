#include "problem.h"
#include <iostream>
#include <string.h>

int test02_01(int a, int b) {
  return a - b;
}

int test02_02(int a, int b) {
  return a - b;
}

char* test02_03() {

  char* ch = new char[11];
  strcpy(ch, "천\n지\n인\n");
  return ch;

}

char* test02_04() {

  char* ch = new char[1024];
  strcpy(ch, "여보세요.\n안녕하세요.\n그럼 이만.\n");
  return ch;

}

char* test02_05() {

  char* ch = new char[1024];
  strcpy(ch, "경고!!\a경고!!\a\n");
  return ch;

}

int test02_06() {
  int x = 15;
  return x;
}

double* test02_07(double vx, double vy) {
  static double vx_vy[2] = {vx, vy};

  return vx_vy;
}