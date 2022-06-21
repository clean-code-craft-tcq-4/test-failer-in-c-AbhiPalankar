#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "misaligned.h"

void printColorMapTable(int pairNumber, const char *majorColor, const char *minorColor )
{
	printf("%d | %s | %s\n", pairNumber, majorColor, minorColor);
}

int pairNumberCalc(int majorIndex , int minorIndex)
{
	return (majorIndex * 5 + minorIndex);
}

int printColorMap()
 {
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printColorMapTable( pairNumberCalc(i,j), majorColor[i], minorColor[j]);
        }
    }
    return i * j;
}
void checkColorMapTable(int expectedPairNumber, const char *expectedMajorColorName, const char *expectedMinorColorName, int majorColorIndex, int minorColorIndex )
{
	int pairNumber = pairNumberCalc(majorColorIndex, minorColorIndex);
	assert(pairNumber == expectedPairNumber);
	assert(majorColor[majorColorIndex] == expectedMajorColorName);
	assert(minorColor[minorColorIndex] == expectedMinorColorName);
}

void PrintColorsConsole()
{
	checkColorMapTable(0, "White", "Blue", 0 , 0 );
	checkColorMapTable(1, "White", "Orange", 0 , 1 );
	checkColorMapTable(2, "White", "Green", 0 , 2 );
	checkColorMapTable(3, "White", "Brown", 0 , 3 );
	checkColorMapTable(4, "White", "Slate", 0 , 4 );
	checkColorMapTable(5, "Red", "Blue", 1 , 0 );
	checkColorMapTable(6, "Red", "Orange", 1 , 1 );
	checkColorMapTable(7, "Red", "Green", 1 , 2 );
	checkColorMapTable(8, "Red", "Brown", 1 , 3 );
	checkColorMapTable(9, "Red", "Slate", 1 , 4 );
	checkColorMapTable(10, "Black", "Blue", 2 , 0 );
	checkColorMapTable(11, "Black", "Orange", 2 , 1 );
	checkColorMapTable(12, "Black", "Green", 2 , 2 );
	checkColorMapTable(13, "Black", "Brown", 2 , 3 );
	checkColorMapTable(14, "Black", "Slate", 2 , 4 );
	checkColorMapTable(15, "Yellow", "Blue", 3 , 0 );
	checkColorMapTable(16, "Yellow", "Orange", 3 , 1 );
	checkColorMapTable(17, "Yellow", "Green", 3 , 2 );
	checkColorMapTable(18, "Yellow", "Brown", 3 , 3 );
	checkColorMapTable(19, "Yellow", "Slate", 3 , 4 );
	checkColorMapTable(20, "Violet", "Blue", 4 , 0 );
	checkColorMapTable(21, "Violet", "Orange", 4 , 1 );
	checkColorMapTable(22, "Violet", "Green", 4 , 2 );
	checkColorMapTable(23, "Violet", "Brown", 4 , 3 );
	checkColorMapTable(24, "Violet", "Slate", 4 , 4 );
}

int main() {
    	int result = printColorMap();
	assert(result == 25); 
	PrintColorsConsole();
	printf("All is well (maybe!)\n");
	return 0;
}
