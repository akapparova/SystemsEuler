#include <stdio.h>
#include <math.h>

int main (){
  int ans1 = 0;
  int counter1;
  for (counter1 = 0; counter1 < 1000; counter1 ++){
    if ((counter1 % 3 == 0) || (counter1 % 5 == 0)){
      ans1 += counter1;
    }
  }

  int ans6a = 0;
  int ans6b = 0;
  int counter6;
  for (counter6 = 1; counter6 <= 100; counter6 ++){
    ans6a += (counter6 * counter6);
    ans6b += counter6;
  }
  int ans6 = -1 * (ans6a - (ans6b * ans6b));

  printf("The answer to problem #1 is %d (should be 233168)\n", ans1);
  printf("The answer to problem #6 is %d (should be 25164150)\n", ans6);
}
