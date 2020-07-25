#include "arraylib.h"

/******************************************************
* 检测数组 data 是否是数组 buff 的子集
* 是则返回 buff 中 data 第一次出现的地址
* 不是则返回 NULL
******************************************************/
uint8_t *Check_Buffer(uint8_t *buff, uint16_t buff_len, uint8_t *data, uint16_t data_len)
{
    uint16_t head, end;
    uint8_t *ptr = NULL;

    if (buff_len >= data_len)
    {
        for (head = 0; head < buff_len; head++)
        {
            if (NULL == ptr)
            {
                if (head + data_len <= buff_len)
                {
                    if (*(buff + head) == *data)
                        ptr = buff + head;
                }
                else
                    return NULL;
            }
            else
            {
                for (end = 0; end < data_len; end++)
                {
                    if (*(ptr + end) != *(data + end))
                    {
                        ptr = NULL;
                        break;
                    }
                }
                if (end == data_len)
                    return ptr;
            }
        }
    }

    return NULL;
}
