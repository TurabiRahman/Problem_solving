#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int count = 0;
    for(int i = 0; i < n; i++)
    {
        char str[4];
        scanf("%s", str);

        if(str[0] == '+' || str[2] == '+')
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    printf("%d\n", count);

    return 0;
}
