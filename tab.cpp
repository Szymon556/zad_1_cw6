#include <iostream>
#include <algorithm>
#include "tabUtils.h"
#include <time.h>

void printTab(const int * const tab, unsigned int size) //wypisuje tablice
{
 for(unsigned int i =0; i<size;i++)
 {
     std::cout<<tab[i]<<std::endl;
 }
}

void reverseTab(int * const tab, unsigned int size) //odrwaca tablice
{
  for(unsigned int i = 0;i<=size/2;i++)
  {
     std::swap(tab[i],tab[size-i-1]);
  }
}