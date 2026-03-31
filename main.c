#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    int pilihan;

    do {
        
        printf("\n=== APLIKASI KELOMPOK 1 ===\n");
        printf("1. Fitur A (Tugas Anggota 1)\n");
        printf("2. Fitur B (Tugas Anggota 2)\n");
        printf("3. Fitur C (Tugas Anggota 3)\n");
        printf("4. Fitur D (Tugas Anggota 4)\n");
        printf("5. Keluar\n");
        printf("Masukkan pilihan (1-5): ");
        scanf("%d", &pilihan);

        switch(pilihan) {
            case 1:
                printf("Menjalankan Fitur A...\n");
                break;
            case 2:
                printf("Menjalankan Fitur B...\n");
                break;
            case 3:
                printf("Menjalankan Fitur C...\n");
                break;
            case 4:
                printf("Menjalankan Fitur C...\n");
                break;
            case 5:
                printf("Terima kasih telah menggunakan program ini.\n");
                break;
            default:
                printf("Pilihan tidak valid, silakan coba lagi.\n");
        }
    } while(pilihan != 4);

    return 0;
}