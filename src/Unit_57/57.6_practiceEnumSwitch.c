#include <stdio.h>

enum VayneSkill {
    Tumble = 1,     // 구르기
    SilverBolts,    // 은화살
    Condemn,        // 선고
    FinalHour       // 결전의 시간
};

int main()
{
    enum VayneSkill skill;

    skill = Tumble;

    switch (skill)
    {
    case Tumble:
        printf("구르기\n");
        break;
    case SilverBolts:
        printf("은화살\n");
        break;
    case Condemn:
        printf("선고\n");
        break;
    case FinalHour:
        printf("결전의 시간\n");
        printf("결전의 시간\n");
        printf("결전의 시간\n");
        printf("결전의 시간\n");
        break;
    default:
        break;
    }

    return 0;
}
