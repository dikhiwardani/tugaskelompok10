#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void kalkulator_diskon() {
    float harga_awal, persentase_diskon;
    float jumlah_diskon, harga_akhir;
 
    printf("\n========================================\n");
    printf("     KALKULATOR DISKON BELANJA\n");
    printf("========================================\n");
 
    // Input harga awal
    printf("Masukkan harga awal barang (Rp): ");
    scanf("%f", &harga_awal);
 
    // Validasi harga awal
    if (harga_awal <= 0) {
        printf("[ERROR] Harga awal harus lebih dari 0!\n");
        return;
    }
 
    // Input persentase diskon
    printf("Masukkan persentase diskon (%%): ");
    scanf("%f", &persentase_diskon);
 
    // Validasi persentase diskon
    if (persentase_diskon < 0 || persentase_diskon > 100) {
        printf("[ERROR] Persentase diskon harus antara 0 - 100!\n");
        return;
    }
 
    // Hitung diskon dan harga akhir
    jumlah_diskon = harga_awal * (persentase_diskon / 100);
    harga_akhir   = harga_awal - jumlah_diskon;
 
    // Tampilkan hasil
    printf("\n----------------------------------------\n");
    printf("  HASIL PERHITUNGAN:\n");
    printf("----------------------------------------\n");
    printf("  Harga Awal       : Rp %.2f\n", harga_awal);
    printf("  Diskon (%.0f%%)     : Rp %.2f\n", persentase_diskon, jumlah_diskon);
    printf("  --------------------------------\n");
    printf("  Harga yang Harus\n");
    printf("  Dibayar          : Rp %.2f\n", harga_akhir);
    printf("----------------------------------------\n");
    printf("  Kamu hemat Rp %.2f!\n", jumlah_diskon);
    printf("========================================\n\n");
}
void splitBill() {
    float total;
    int orang;
    float hasil;

    printf("Total tagihan: ");
    scanf("%f", &total);

    printf("Jumlah orang: ");
    scanf("%d", &orang);

    if (orang <= 0) {
        printf("Jumlah orang tidak valid\n");
    } else {
        hasil = total / orang;
        printf("Per orang bayar: %.2f\n", hasil);
    }

}
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
                kalkulator_diskon();
                break;
            case 2:
                splitBill();
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
    } while(pilihan != 5);

    return 0;
}