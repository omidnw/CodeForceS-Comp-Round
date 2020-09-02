#include <stdio.h>

int main(){
    long long n, m, a;
    scanf("%lld %lld %lld", &n,&m,&a);
    printf("%lld",(((n+a-1)/a))*((m+a-1)/a));
    return 0;
}

/* Description Of Code Line : 

English : 

n = width
m = height
a = flagstone dimensions

1.BEGIN
2. Defining variables.
3. User input.
4. Getting number of flagstones for width from dividing the max width by flagstone size.
5. Getting number of flagstones for height from dividing the max height by flagstone size.
6. Multiply the number of stones for width and height together to get to max number.
7.END

Persian : 

n = عرض
m = طول
a = ابعاد سنگ

۱.شروع | -۱
۲. .در مرحله اول مقادیر را تعریف کرده
۳. .در این مرحله مقادیر را از کاربر دریافت کرده
۴. .در اولین مرحله عرض را به علاوه یکی از ابعاد سنگ می کنیم و یک واحد از آن کم می نماییم سپس تقسیم بر ابعاد سنگ می کنیم
۵. .در مرحله بعد طول را به یکی از ابعاد سنگ اضافه می کنیم سپس یک واحد از آن کم می کنیم در مرحله بعد آن را تقسیم بر یکی از ابعاد سنگ می کنیم
۶. حال عرض و طول بدست آمده را ضربدر هم می کنیم
۷.پایان | ۰

*/