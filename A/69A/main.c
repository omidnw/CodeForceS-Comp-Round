#include <stdio.h>

int main()
{
    int Force, x, y, z;
    int tx = 0 , ty = 0, tz = 0;
    scanf("%d", &Force);
    for(int i=0; i<Force;i++){
        scanf("%d %d %d", &x, &y, &z);
        tx += x;
        ty += y;
        tz += z;
    }

    if(tx==0 && ty==0 && tz==0)
        printf("YES");
    else
        printf("NO");
    return 0;
}
