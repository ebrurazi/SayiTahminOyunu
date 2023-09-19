#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
int main(void) {
    int bilgisayarTahmin,oyuncuTahmin;
    int adeti=0;
    
    srand(time(NULL));//Program her çalıştığında rastgele sayı üretir
    
    printf("************SAYI TAHMİN OYUNU************\n\n");
    
    bilgisayarTahmin=1+rand()%10;//1 ile 10 arasında bir sayı üretir,bilgisayarın tahmini alıyoruz
    
    printf("Tahmininizi giriniz : ");//Oyuncunun tahmini alırız
    scanf("%d",&oyuncuTahmin);
    
    while (oyuncuTahmin != bilgisayarTahmin){//Eşit olmadıkları sürece devam ettir
        if(oyuncuTahmin>bilgisayarTahmin){//Oyuncu!nun tahmini daha büyükse daha düşük bir sayi girmesini söyler
            adeti++;
            printf("Daha düşük bir sayı giriniz! : ");
            scanf("%d",&oyuncuTahmin);
        }
        else if(oyuncuTahmin<bilgisayarTahmin){//Oyuncu!nun tahmini daha küçükse daha yüksek bir sayi girmesini söyler
            adeti++;
            printf("Daha yüksek bir sayı giriniz! : ");
            scanf("%d",&oyuncuTahmin);
        }
}
    adeti++;
    printf("Tebrikler doğru tahmin ettiniz!!!\n");
    printf("%d tahminden sonra doğru bildiniz.\n",adeti);//kaç adet tahmin yazılmışsa sonuç ekrana yazdırılır
    printf("\n");
    return 0;
}
