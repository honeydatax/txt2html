#include <stdio.h>

  static int abs(i)
    int i;
  {
    return (i < 0) ? -i : i;
  }


int main(){
	printf("%d\n",abs(-23));
	return 0;
}