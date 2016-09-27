#include <stdio.h>
#include <stdlib.h>
    int main()
{
    float lengte;
    float gewicht;

    printf( "Vul uw lengte in m in: \n" );
    scanf( "%f", &lengte );
    printf( "Uw lengte is %f \n", lengte );
    printf( "Vul uw gewicht in kg in: \n" );
    scanf( "%f", &gewicht );
    printf( "Uw gewicht is %f \n", gewicht );

    float bmi = gewicht / (lengte * lengte);
     printf( "Uw bmi is %f \n", bmi );

     if (bmi < 18.5) {
        printf("u bent facking dun");
     }
     if (bmi > 18.5 && bmi <25) {
        printf("u bent gezond");
     }
     if (bmi > 24.9 && bmi <40) {
        printf("dikzak");
     }
     if (bmi > 39) {
        printf("je bent bijna net zo dik als frank");
     }
}


