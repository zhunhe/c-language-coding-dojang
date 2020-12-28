typedef union _Box {    // 공용체 이름은 _Box
    short candy;
    float snack;
    char doll[8];
} Box;                  // typedef를 사용하여 공용체 별칭을 Box로 정의

Box *b1 = malloc(sizeof(Box));    // 공용체 포인터 선언, 메모리 할당
