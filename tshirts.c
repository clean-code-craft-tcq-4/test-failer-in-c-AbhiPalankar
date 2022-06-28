#include <stdio.h>
#include <assert.h>
#include "tshirts.h"

char size(int cms) {
    char sizeName = '\0';
    if(cms < SMALLSIZE) {
        sizeName = 'S';
    } else if(cms >= SMALLSIZE && cms < LARGESIZE) {
        sizeName = 'M';
    } else if(cms >= LARGESIZE) {
        sizeName = 'L';
    }
    return sizeName;
}

void CheckTshirtSize()
{
    assert(size(37) == 'S');
    assert(size(40) == 'M');
    assert(size(43) == 'L');
    assert(size(38) != 'L'); // tshirt size 38 is belongs to 'M'
    assert(size(42) != 'S'); // tshirt size 42 is belongs to 'L'

}

int main() 
{
    CheckTshirtSize();
    printf("All is well (maybe!)\n");
    return 0;
}
