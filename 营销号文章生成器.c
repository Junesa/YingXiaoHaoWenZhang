/*
    苹果不能和农药一起吃是怎么回事呢？苹果相信大家都很熟悉， 但是苹果不能和农药一起吃是怎么回事呢，下面就让小编带大家一起了解吧。
    苹果不能和农药一起吃，其实就是苹果和农药一起吃会中毒，大家可能会很惊讶苹果怎么会不能和农药一起吃呢？但事实就是这样，小编也感到非常惊讶。
    这就是关于苹果不能和农药一起吃的事情了，大家有什么想法呢，欢迎在评论区告诉小编一起讨论哦！
*/

#include <stdio.h>

void _output(char _a[200])
{
    int i;
    for (i = 0; i < 200 && _a[i] != '\0'; i++)
    {
        printf ("%c", _a[i]);
    }
}

void main()
{
    char _a[200], _b[200], _c[200];
    printf ("主体：");
    gets (_a);
    printf ("事件：");
    gets (_b);
    printf ("换一种说法：");
    gets (_c);
    
    _output (_a), _output (_b);
    printf ("是怎么回事呢？");
    _output (_a);
    printf ("相信大家都很熟悉， 但是");
    _output (_a), _output (_b);
    printf ("是怎么回事呢？下面就让小编带大家一起了解吧。\n");
    _output (_a), _output (_b);
    printf ("，其实就是");
    _output (_c);
    printf ("大家可能会很惊讶");
    _output (_a);
    printf ("怎么会");
    _output (_b);
    printf ("呢？但事实就是这样，小编也感到非常惊讶。\n");
    printf ("这就是关于");
    _output (_a), _output (_b);
    printf ("的事情了，大家有什么想法呢，欢迎在评论区告诉小编一起讨论哦！\n");
}
