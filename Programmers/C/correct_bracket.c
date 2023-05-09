#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(const char* s) {

  bool answer = true;
  char arr[100000];

  strcpy(arr,s);             

int count;
count=0;

for(int i=0;arr[i]!='\0';i++)
{
  if(arr[i]=='(')
  {
    count++;
  }  
  else
  {
    count--;
    if(count <0)
    return false;
  }
}
return (count ==0)?true: false;
}
