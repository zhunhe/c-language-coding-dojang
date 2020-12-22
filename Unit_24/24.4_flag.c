#include <stdio.h>

#define SWITCH_FIRST    128
#define SWITCH_SECOND   64
#define SWITCH_THIRD    32
#define SWITCH_FOURTH   16
#define SWITCH_FIFTH    8
#define SWITCH_SIXTH    4
#define SWITCH_SEVENTH  2
#define SWITCH_LAST     1
#define SWITCH_ALL      255

void switchOn(unsigned char whichSwitch);
void switchCheck(unsigned char whichSwitch);
void switchOff(unsigned char whichSwitch);

static unsigned char switchEight = 0;

int main()
{
    // switch ON
    switchOn(SWITCH_LAST);     // 0000 0000 -> 0000 0001
    switchOn(SWITCH_SEVENTH);  // 0000 0001 -> 0000 0011
    switchOn(SWITCH_SIXTH);    // 0000 0011 -> 0000 0111

    // switch CHECK
    switchCheck(SWITCH_LAST);
    switchCheck(SWITCH_SEVENTH);
    switchCheck(SWITCH_SIXTH);
 
    // switch OFF
    switchOff(SWITCH_ALL);     // 0000 0111 -> 0000 0000

    // switch CHECK
    switchCheck(SWITCH_ALL);

    return 0;
}

void switchOn(unsigned char whichSwitch)
{
    switchEight |= whichSwitch;
}

void switchOff(unsigned char whichSwitch)
{
    switchEight &= ~whichSwitch;
}

void switchCheck(unsigned char whichSwitch)
{
    if (switchEight & whichSwitch)
        printf("%d is ON\n", whichSwitch);
    else if (whichSwitch == SWITCH_ALL)
        printf("All Switches are OFF\n");
    else
        printf("%d is OFF\n", whichSwitch);
}
