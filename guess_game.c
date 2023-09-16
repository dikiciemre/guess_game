//
//  main.c
//  Guess_Game
//
//  Created by Emre Dikici on 16.09.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // 1 ile 100 arasında rastgele bir sayı üret
    int rastgeleSayi = rand() % 101;
    int tahmin;
    int denemeSayisi = 0;

    printf("1 ile 100 arasında rastgele bir sayıyı tahmin etmeye çalışın.\n");

    
    while (1) {
    
        printf("Tahmininizi girin: ");
        scanf("%d", &tahmin);
        denemeSayisi++;

        if (tahmin > rastgeleSayi) {
            printf("Daha küçük bir sayı girin.\n\n");
        } else if (tahmin < rastgeleSayi) {
            printf("Daha büyük bir sayı girin.\n\n");
        } else {
            printf("Tebrikler! %d. denemede doğru tahmin ettiniz.\n\n", denemeSayisi);
            break;
        }
    }

    return 0;
}

