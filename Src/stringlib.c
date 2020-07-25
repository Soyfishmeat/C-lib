#include "stringlib.h"


// 大写转小写
char *upper_to_lower(char *str)
{
    char *ptr = str;
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
            *str += 0x20;
        str++;
    }
    return ptr;
}


// 小写转大写
char *lower_to_upper(char *str)
{
    char *ptr = str;
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
            *str -= 0x20;
        str++;
    }
    return ptr;
}
