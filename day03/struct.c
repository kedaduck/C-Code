/*
 * @Author: Leoren 
 * @Date: 2020-03-18 18:18:34 
 * @Last Modified by: mikey.zhaopeng
 * @Last Modified time: 2020-03-18 18:21:52
 */
#include <stdio.h>
#include <stdlib.h>

struct  date{
    int month;
    int day;
    int year;
};

int main(){
    struct date today;

    today = (struct date){03, 18, 2020};

    struct date day;
    day = today;

    printf("Today's date is %i-%i-%i.\n", today.year, today.month, today.day);
    printf("Day's date is %i-%i-%i.\n", day.year, day.month, day.day);

    system("pause");
    return 0;
}