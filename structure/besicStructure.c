#include<stdio.h>
int main(){
    struct friend{
        int physics;
        int maths;
        float percentage;
        char grade;
    };

    struct friend kaif;      // isko declear karne ka second method nich hai
    kaif.physics = 80;
    kaif.maths =85;
    kaif.percentage = 83.16;
    kaif.grade = 'B';

    struct friend mojammil;
    mojammil.physics = 90;
    mojammil.maths=95;
    mojammil.percentage=93.4;
    mojammil.grade='A';

    printf("%d\n",kaif.maths);   
    printf("%f\n",kaif.percentage);   
    printf("%d\n",mojammil.maths);   
    printf("%c\n",mojammil.grade);   

    struct friend sarfuddin;
    sarfuddin.maths;

    printf("enter maths number: ");
    scanf("%d",&sarfuddin.maths);
    printf("%d\n",sarfuddin.maths);

    struct dost{
        int physics;
        int maths;
        float percentage;
        char grade;
    }kaifkhan, mh,ss;            // aise bhi declear kiya jata hai

     kaifkhan.maths =85;
     mh.maths=95;
     ss.maths=83;
    printf("%d\n",kaif.maths);   
    printf("%d\n",mh.maths);   
    printf("%d\n",ss.maths);   
    return 0;
}