void increase(int *a, int *b, int *x) 
{
    *a += *x;    // x를 역참조하여 가져온 값만큼 *a를 역참조하여 값을 증가시킴
    *b += *x;    // x를 역참조하여 가져온 값만큼 *b를 역참조하여 값을 증가시킴
}
