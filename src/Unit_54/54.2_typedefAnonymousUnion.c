typedef union {    // 익명 공용체 정의
    short candy;
    float snack;
    char doll[8];
} Box;             // typedef를 사용하여 공용체 별칭을 Box로 정의

Box b1;    // 공용체 별칭으로 공용체 변수 선언
