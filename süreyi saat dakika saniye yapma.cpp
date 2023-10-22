

//Ekrandan saniye olarak girilen süreyi saat, dakika ve saniye olarak hesaplayan C programı
#include <stdio.h>
#include <stdlib.h>
int main() {
printf("Sureyi saniye olarak giriniz:");
int sure;
scanf("%d", &sure);
int saat = sure / 3600;
int dk = sure % 3600 / 60;
int s = sure % 60;
printf("%d saat, %d dk, %d s\n", saat, dk, s);
system("pause");
return 0;
}
