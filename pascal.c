#include <stdio.h>


void findtriangle(int numlevels, int triangle[28][28]);
void maketriangle(int numlevels);



void maketriangle(int numlevels) {
  
}
void findtriangle(int numlevels, int triangle[28][28]) {
// get triangle values
  triangle[0][0] = 1;
  for (int i = 0; i < 28; ++i) {
    for (int j = 0; j < 28; ++j) {
      if (j == 0) {
        triangle[i][j] = 1;
      }
      else if (i == 0) {
        triangle[i][j] = 0;
      } else {
        triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
      }
    }
  }
// print out specific triangle values
  for (int i = 0; i < numlevels; i++) {
    for (int j = 0; j <= i; j++) {
        printf("%d ", triangle[i][j]);
      }
    printf("\n");
    }
}


int main() {
  int numlevels;
  printf("Please enter how many levels of Pascal's Triangle you would like to see: ");
  scanf("%d", &numlevels);
  findtriangle(numlevels, triangle);
  return 0;
}
