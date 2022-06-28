#ifndef MISALIGNED_H
#define MISALIGNED_H

const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

typedef struct {
    const char* majorColor;
    const char* minorColor;
} ColorPair;

extern void printColorMapTable(int pairNumber, const char *majorColor, const char *minorColor );
extern int pairNumberCalc(int majorIndex , int minorIndex);
extern int printColorMap();
extern void checkColorMapTable(int expectedPairNumber, const char *expectedMajorColorName, const char *expectedMinorColorName, int majorColorIndex, int minorColorIndex );
extern void PrintColorsConsole();

#endif
