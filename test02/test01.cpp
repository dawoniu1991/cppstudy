#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main ()
{
   printf("women====\n ");
   printf("PATH : %s\n", getenv("PATH"));
   printf("HOME : %s\n", getenv("HOME"));
   printf("ROOT : %s\n", getenv("ROOT"));
   printf("aa : %s\n", getenv("aa"));
   
   cin.get();

   return(0);
}
