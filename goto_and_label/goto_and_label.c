#include <stdio.h>

int main()
{
    int flag = 1;
    int ret = 0;

    if(flag)
    {
        goto ERROR;
    }

    goto SUCCESS;

ERROR:
    printf("flag set\n");
    ret = 1;
SUCCESS:
    printf("flag not set\n");
    return ret;
}
