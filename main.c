void bungaTabunganSederhana(){
    float saldoAwal, bungaBulanan, totalUang, totalBunga;

    printf("Masukan Saldo Awal (Rp):");
    scanf("%f", &saldoAwal );
    
    printf("Masukan Persentase Bunga Bulanan (%):");
    scanf("%f", &bungaBulanan);
    totalBunga = saldoAwal * (bungaBulanan / 100);
    totalUang = totalBunga + saldoAwal;

    printf("Saldo Awal                       = Rp %2lf\n", saldoAwal);
    printf("Persentase Bunga Bulanan         = %2lf%\n", bungaBulanan);
    printf("Total Bunga Bulanan yang didapat = Rp %2lf\n", totalBunga);
    printf("Total Uang                       = Rp %2lf\n", totalUang);
}
