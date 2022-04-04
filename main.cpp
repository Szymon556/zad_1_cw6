#include <iostream>
#include <algorithm>
#include "tabUtils.h"
#include <time.h>

int main()
{
 int tab[5];
srand(time(NULL));
 
    for (int i=0; i<5; i++)// generuje losowe liczby
    {
        tab[i] = rand()%49+1;
       
        
    }
    reverseTab(tab,sizeof ( tab ) / sizeof ( int ));//wysyłamy wartości
    printTab(tab, sizeof ( tab ) / sizeof ( int ));
    return 0;
}