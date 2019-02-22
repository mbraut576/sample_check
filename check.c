#include<stdio.h>

int main()
{
int k=1;
int read,get;
int arr[3] = {1,3,22,4};
int *ptr;
ptr = fetch();
read = k++ * k++ * k++;
printf("Ponter Value =%d",*ptr);
func();
funct1();
printf("Value = %d",read);

}

void func()
{
int divide_val;
int val=6;
divide_val = val/3;
printf("Divide Value = %d",divide_val);
}

void func1()
{
  
}

int* fetch()
{
  int val;
  val=100;
  return &val;
}
