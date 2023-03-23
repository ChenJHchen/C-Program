#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//    printf("     ** \n");
//    printf("     ** \n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *   \n");
//    printf("    *  *   \n");
//    return 0;
//}
//


//int main()
//{
//	printf("%15d\n", 0xABCDEF);
//	return 0;
//}

//
//int main()
//{
//	
//
//	//printf("\n%d\n", ret);
//	printf("\n%d\n", printf("Hello World!"));
//
//	return 0;
//}



//int main()
//{
//	int id = 0;
//	double c_score = 0.0;//float double c_score = 0.0
//	double math_score = 0.0;
//	double eng_score = 0.0;
//	scanf("%d;%lf,%lf,%lf", &id, &c_score, &math_score, &eng_score);
//	printf("The each subject score of No.%d is %.2lf,%.2lf,%.2lf.", id, c_score, math_score, eng_score);;
//	return 0;
//}


int main()
{
    int ch = 0;
    while ((ch = getchar()) != EOF)
    {
        getchar();
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            printf("YES\n");
        else
            printf("NO\n");
        
    }
    return 0;
}