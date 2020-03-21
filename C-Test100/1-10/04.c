// 题目：输入某年某月某日，判断这一天是这一年的第几天？
#include <stdio.h>
#include <stdlib.h>

int IsLeap(int year);
int isVaild(int year, int month, int day);
int getTheMonthDayS(int year, int month);

int main(){
    int year , month, day;
    while (1){
        printf("请输入日期（格式：xxxx-xx-xx）\n");
        scanf("%d-%d-%d", &year, &month, &day);
        int isDate = isVaild(year, month, day);
        if( !isDate){
            continue;
        }
        if(month == 1){
            printf("当天是%d年的第%d天", year, day);
            continue;
        }
        int sum = 0;
        for(int i = 1; i < month; i++){
            int theMonthDay = getTheMonthDayS(year, i);
            printf("the days = %d\n", theMonthDay);
            sum += theMonthDay;
        }
        sum += day;
        printf("当天是%d年的第%d天\n", year, sum);
    }
    int isLeap = IsLeap(year);

    system("pause");
    return 0;
}

int getTheMonthDayS(int year, int month){
    int days ;
    switch (month){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        days = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        days = 30;
        break;
    default:
        if( IsLeap(year) ){
            days = 29;
        }else{
            days = 28;
        }
        break;
    }
    return days;
}

//检查日期的合法性
int isVaild(int year, int month, int day){
    int isDate = 1;
    if( month < 1 || month > 12){
        printf("月份不合法\n");
        isDate = 0;
    }
    switch (month){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if( day < 0 || day > 31){
            printf("当月日期不合法\n");
            isDate = 0;
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        if( day < 0 || day > 30){
            printf("当月日期不合法\n");
            isDate = 0;
        }
        break;
    default:
        if( IsLeap(year) ){
            if( day < 0 || day > 29 ){
                printf("当月日期不合法\n");
                isDate = 0;
            }
        }else{
            if( day < 0 || day > 28 ){
                printf("当月日期不合法\n");
                isDate = 0;
            }
        }
        break;
    }
    return isDate;
}

//判断是否是闰年
int IsLeap(int year){
    if( (year%4 == 0 && year%100 != 0) || year%400 == 0){
        return 1;
    }else{
        return 0;
    }
    
}