#include <stdio.h>

int main()
{
    float z, u, r, m, Hindi, English, Math, science, socialscience, Drawing;
    printf("\n\n");
    printf("Er Manmohan Sharma Programmer developed this program\n ");
    printf("\n");
    int select;
    printf("Enter 1 for HighSchool And 2 For Intermediate Know Your Performance\n\n");
    scanf("%d", &select);
    switch (select)
    {
    case 1:
        printf("1.Hindi 2.English 3.Math 4.science\n 5.socialscience 6.Drawing/sanskrit\n");
        printf("If in case your subject is diffrent Please Enter 6 subject marks Only \n\n");
        scanf("%f%f%f%f%f%f", &Hindi, &English, &Math, &science, &socialscience, &Drawing);
        printf("\n");

        if (Hindi && English && Math && science && socialscience && Drawing > 33)
        {
            printf("You have passed in exam and you get a smartphone\n");
        }
        else
        {
            printf("You have failed in exam/ try again next time \n");
        }
        printf("\n\n");
        if (English && Math && science > 70)
        {
            printf("You got Dictation Marks in Math ,Science and English\n ");
        }

        else if (Math >= 70)
        {
            printf("You got Dictation marks in Math\n", Math);
        }

        else if (science >= 70)
        {
            printf("You got Dictation marks in science\n", science);
        }

        else if (English >= 70)
        {
            printf("You got Dictation marks in English\n", English);
        }
        printf("\n\n");

        z = Hindi + English + Math + science + socialscience + Drawing;
        printf("Total Marks All Subjects in class 10th = %0.2f\n", z);
        u = z / 6;
        printf("\n");


        printf("The parcentage in class 10th = %0.2f%%\n", u);
        printf("\n");

        if (u <= 99.99 && u >= 60)
        {
            printf("You got first division in exam ,\n parents: Good,Mera beta h\n");
            printf("\n");
            printf("Grate -'A' ");
        }
        else if (u <= 60 && u >= 50)
        {
            printf("You got second division in exam, \n parents: beta achhe se padhai ki hoti to\n first aa jate\n");
            printf("\n");
            printf("Grate -'B' ");
        }
        else if (u <= 50 && u >= 30)
        {
            printf("You got third division in exam,\n parents: kutta padhai hi nhi karta tha\n pass hi ho gaya yahi badi baat hai \n");
            printf("\n");
            printf("Grate -'C' ");
        }

        break;

    case 2:
        printf("1.Hindi 2.English 3.Math 4.Physic 5.Chemistry\n\n ");
         printf("If in case your subject is diffrent Please Enter 5 subject marks Only \n\n");
        scanf("%f%f%f%f%f", &Hindi, &English, &Math, &science, &socialscience);
        

        if (Hindi && English && Math && science && socialscience > 33)
        {
            printf("You have passed in exam and you get a smartphone\n");
        }
        else
        {
            printf("You have failed in exam/ try again next time \n");
        }
        printf("\n\n");
        if (English && Math && science > 70)
        {
            printf("You got Dictation Marks in Math ,Science and English\n ");
        }

        else if (Math >= 70)
        {
            printf("You got Dictation marks in Math\n", Math);
        }

        else if (science >= 70)
        {
            printf("You got Dictation marks in science\n", science);
        }

        else if (English >= 70)
        {
            printf("You got Dictation marks in English\n", English);
        }
        printf("\n\n");

       

        r = Hindi + English + Math + science + socialscience;
        printf("Total Marks All Subjects in class 12th = %0.2f\n", r);
        m = r / 5;
        printf("\n\n");

       

        printf("The parcentage in class 12th = %0.2f%%", m);
        printf("\n\n");
        if (u <= 99.99 && u >= 60)
        {
            printf("You got first division in exam ,\n parents: Good,Mera beta h\n");
            printf("\n");
            printf("Grate -'A' ");
        }
        else if (u <= 60 && u >= 50)
        {
            printf("You got second division in exam, \n parents: beta achhe se padhai ki hoti to\n first aa jate\n");
            printf("\n");
            printf("Grate -'B' ");
        }
        else if (u <= 50 && u >= 30)
        {
            printf("You got third division in exam,\n parents: kutta padhai hi nhi karta tha\n pass hi ho gaya yahi badi baat hai \n");
            printf("\n");
            printf("Grate -'C' ");
        }
        break;
    default:
        printf("You enter wrong Number Please 1 or 2 ");
        break;
    }
   
    return 0;
}