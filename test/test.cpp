#include "../src/head.h"

int main()
{
    string dest = ("was/were");
    string str = ("was");
    
    int okay = 0;
    
    int flg = str_slash(dest, str);
    if (0 == flg)
        okay++;
    else fprintf(stderr, "str_slash_1 false\n");

    str = ("were");
    
    flg = str_slash(dest, str);
    if (0 == flg)
        okay++;
    else fprintf(stderr, "str_slash_2 false\n");
    
    str = ("was/were");

    flg = str_slash(dest, str);
    if (0 == flg)
        okay++;
    else fprintf(stderr, "str_slash_3 false\n");
    
    str = ("were/was");

    flg = str_slash(dest, str);
    if (0 != flg)
        okay++;
    else fprintf(stderr, "str_slash_4 false\n");
    str = ("wa");

    flg = str_slash(dest, str);
    if (0 != flg)
        okay++;
    else fprintf(stderr, "str_slash_5 false\n");

    printf("OK %d/%d\n", okay, 5);
}
