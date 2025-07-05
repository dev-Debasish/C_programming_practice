#include <stdio.h>

typedef struct date
{
    int dd;
    int mm;
    int yyyy;
} date;

int compare(date d1, date d2)
{
    if (d1.yyyy == d2.yyyy && d1.mm == d2.mm && d1.dd == d2.dd)
    {
        return 0;
    }
    else if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }
    else if (d1.yyyy < d2.yyyy)
    {
        return -1;
    }
    else if (d1.mm > d2.mm)
    {
        return 1;
    }
    else if (d1.mm < d2.mm)
    {
        return -1;
    }
    else if (d1.dd > d2.dd)
    {
        return 1;
    }
    else if (d1.dd < d2.dd)
    {
        return -1;
    }
}

int main()
{
    date d2 = {29, 04, 2003};
    date d1 = {23, 07, 2006};
    printf("%d", compare(d1, d2));
    return 0;
}