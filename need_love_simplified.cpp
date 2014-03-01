#include <cmath>
#include <cstdio>

char str1[31], str2[31];

/* 求最大公约数. */
int gcd(int a, int b) {
    return (b == 0 ? a : gcd(b, a % b));
}

/* 将字符串转换成数组. */
int parse(char *str) {
    int sum = 0, i = 0;
    while(i < strlen(str)) 
        sum += (str[i++] - '0') * pow(2, strlen(str) - i - 1);
    return sum;
}

void main()
{
    int cases, dec1, dec2, curCase = 1;
    scanf("%d", &cases);
    while(curCase <= cases) {
        printf("Pair #%d: ", curCase++);
        scanf("%s%s", str1, str2);
        if(gcd(parse(str1), parse(str2)) != 1)
            printf("All you need is love!\n");
        else
            printf("Love is not all you need!\n");
    }
}