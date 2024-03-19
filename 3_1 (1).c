#include<stdio.h>
int main(){
    int year;
    printf("Enter Year:");
    scanf("%d", &year);

    if(year==0){
            printf("Invalid");
        }
    else if(year==1){
            printf("Not a Leap Year\nNearest Leap year= %d", year+3);
        }
    else if(year==2){
            printf("Not a Leap Year\nNearest Leap year= %d", year+2);
        }
    else if(year==3){
            printf("Not a Leap Year\nNearest Leap year= %d", year+1);
        }

    else if(year%4==0&&year%100!=0||year%400==0){
        printf("Leap Year");
    }
    else {
        printf("Not a Leap Year\n");

        if(((year-1)%4==0&&(year-1)%100!=0)||(year-1)%400==0){
           printf("Nearest Leap Year:%d", year-1);
        }
        if(((year-2)%4==0&&(year-2)%100!=0)||(year-2)%400==0){
           printf("Nearest Leap Year:%d", year-2);
        }

        if(((year-3)%4==0&&(year-3)%100!=0)||(year-3)%400==0){
           printf("Nearest Leap Year:%d", year-3);
        }
        else if(((year+1)%4==0&&(year+1)%100!=0)||(year+1)%400==0){
                printf("Nearest Leap Year:%d", year+1);
        }
        else if(((year+2)%4==0&&(year+2)%100!=0)||(year+2)%400==0){
                printf("Nearest Leap Year:%d", year+2);
        }
        if(year%100==0&&year%400!=0){
            printf("Nearest Leap Years are: %d & %d", year-4, year+4);
        }
    }

    return 0;
}

