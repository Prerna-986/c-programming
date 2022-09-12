#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
  float valueOne;
  float valueTwo;
  char operator;
  float answer;

  printf("Enter calculation:\n\n");
  scanf("%f %c %f", &valueOne, &operator, & valueTwo);

  switch(operator)
    {
    case '/': answer = valueOne/valueTwo;
      break;
    case '*': answer = valueOne*valueTwo;
      break;
    case '+': answer = valueOne+valueTwo;
      break;
    case '-': answer = valueOne-valueTwo;
      break;
    case '^': answer = pow(valueOne,valueTwo);
      break;
    case ' ': answer = sqrt(valueTwo);
      break;
    default: goto fail;
    }
  printf("%f%c%f =  %f\n\n",valueOne,operator, valueTwo, answer);
  goto exit;
 fail:
  printf("Fail.\n");
 exit:
  return 0;
}
