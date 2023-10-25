#include<stdio.h>

int main() 
{  

    int celcius;
	float fahrenheit, reamur;

    printf("=== PROGRAM KONVERSI SUHU SEDERHANA ===\n");
	printf("\n");
    printf("Input Suhu dalam Celcius : ");
    scanf("%i", &celcius);

 //Konversi Celcius - Fahrenheit

    fahrenheit = (celcius * 1.8) + 32;

 //Konversi Celcius - Reamur

    reamur = (celcius * 0.8);

//Hasil Konversi

    printf("Fahrenheit = %.1f F\n", fahrenheit);
    printf("Reamur = %.1f R\n", reamur);

    return 0;

}
