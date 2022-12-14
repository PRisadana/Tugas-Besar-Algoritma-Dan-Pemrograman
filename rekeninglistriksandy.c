

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void logopln();
void rumah_tangga();
void bisnis();
void industri();
void fasilitas_publik();
void upgrade_daya_listrik();
void pilih_golongan_pascabayar();
void pilih_golongan_prabayar();
void rumah_tangga_prabayar();
void bisnis_prabayar();
void industri_prabayar();
void fasilitas_publik_prabayar();

//void cetakakunregister(char username_register[50], char password_register[8]);

//LWBP = Luar Waktu Beban Puncak (22.00 s.d. 18.00)
//WBP = Waktu Beban Puncak (18.00 s.d. 22.00)

void close(){
    printf("\n\tBerikutnya...");
    getchar();
    printf("\n\tKetik enter untuk melanjutkan...");
    getchar();
    system("clear");
}

// void pilih_admin_login(){
//     int pilih;
//     printf("\n\t================================================================");
//     printf("\n\t|                       Admin Login Account                    |");
//     printf("\n\t================================================================");
//     printf("\n\t| (1) Register                                                 |");
//     printf("\n\t| (2) Login                                                    |");
//     printf("\n\t================================================================");
//     printf("\n\t| Masukkan pilihan : ");
//     while(scanf("%d", &pilih)==0 || pilih<1 || pilih >2){
//         printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
//         printf("\n\tInputan harus berupa angka");
//         printf("\n\t================================================================");
//         printf("\n\t| Masukkan pilihan : ");
//         while( pilih = getchar() != '\n');
//     }
//     close();
//     if (pilih==1){
//         admin_register();
//     }else if (pilih==2){
//         admin_login();
//     };

    // if(pilih==1){
    //     printf("\n\t================================================================");
    //     printf("\n\t|                       Register Account                       |");
    //     printf("\n\t================================================================");
    //     printf("\n\tMasukkan username : ");
    //     //fgets(username_register, sizeof(username_register), stdin);
    //     scanf("%[^\n]s", login.username_register);
    //     printf("\n\tMasukkan password : ");
    //     //fgets(password_register, sizeof(password_register), stdin);
    //     scanf("%[^\n]s", login.password_register);
    //     printf("\n\t================================================================");
    //     printf("\n\t|                        Register Succes                       |");
    //     printf("\n\t================================================================");
    //     cetakakunregister(login.username_register, login.password_register);
    //     close();
    //     printf("\n\t================================================================");
    //     printf("\n\t|                         Login Account                        |");
    //     printf("\n\t================================================================");
    //     printf("\n\tMasukkan username : ");
    //     //fgets(username_login, sizeof(username_login), stdin);
    //     printf("\n\tMasukkan password : ");
    //     //fgets(password_login, sizeof(password_login), stdin);
    //     if( strcmp(username_register, username_login)==0 && strcmp(password_register, password_login)==0){ // strcmp akan mennghasilkan nilai 0 jika yang dibandingkan sama
    //         printf("\n\t================================================================");
    //         printf("\n\t|                         Login Succes                         |");
    //         printf("\n\t----------------------------------------------------------------");
    //         printf("\n\tSelamat datang %s ", username_login);
    //         printf("\n\t----------------------------------------------------------------");
    //         close();
    //     }else{
    //         printf("\n\t================================================================");
    //         printf("\n\t|                          PERINGATAN                          |");
    //         printf("\n\t----------------------------------------------------------------");
    //         printf("\n\t| Username atau password yang anda masukkan salah !            |");
    //         printf("\n\t| Silahkan login ulang                                         |");
    //         printf("\n\t----------------------------------------------------------------");
    //         close();
    //     }
    // }else if (pilih==2){
    //     //deklarasi variabel yang akan digunakan untuk menyimpan nilai yang diambil dari file txt
    //     char username_login_txt[50];
    //     char password_login_txt[8];
    //     //Membaca file txt
    //     FILE *fptr;

    //     if ((fptr = fopen("akunregister.txt","r")) == NULL){
    //     printf("Error: File tidak ada!");
    //     // Tutup program karena file gak ada.
    //     exit(1);
    //     }

    //     fgets(username_register, sizeof(username_register), stdin);
    //     fgets(password_register, sizeof(password_register), stdin);

    //     printf("\n\t================================================================");
    //     printf("\n\t|                         Login Account                        |");
    //     printf("\n\t================================================================");
    //     printf("\n\tMasukkan username : ");
    //     fgets(username_login, sizeof(username_login), stdin);
    //     printf("\n\tMasukkan password : ");
    //     fgets(password_login, sizeof(password_login), stdin);
    //     if( strcmp(username_login, username_register)==0 && strcmp(password_login, password_register)==0){ // strcmp akan mennghasilkan nilai 0 jika yang dibandingkan sama
    //         printf("\n\t================================================================");
    //         printf("\n\t|                         Login Succes                         |");
    //         printf("\n\t----------------------------------------------------------------");
    //         printf("\n\t| Selamat datang %s                                            |", username_login);
    //         printf("\n\t----------------------------------------------------------------");
    //     }else{
    //         printf("\n\t================================================================");
    //         printf("\n\t|                          PERINGATAN                          |");
    //         printf("\n\t----------------------------------------------------------------");
    //         printf("\n\t| Username atau password yang anda masukkan salah !            |");
    //         printf("\n\t| Silahkan login ulang                                         |");
    //         printf("\n\t----------------------------------------------------------------");
    //         close();
    //     }
    //     fclose(fptr);
    //     close();
    // }
//}

// void admin_register(){
// //     char username_register[50];
// //     char password_register[8];
// //     printf("\n\t================================================================");
// //     printf("\n\t|                       Register Account                       |");
// //     printf("\n\t================================================================");
// //     printf("\n\tMasukkan username : ");
// //     //fgets(username_register, sizeof(username_register), stdin);
// //     scanf("%[^\n]s", &username_register);
// //     printf("\n\tMasukkan password : ");
// //     //fgets(password_register, sizeof(password_register), stdin);
// //     scanf("%[^\n]s", &password_register);
// //     printf("\n\t================================================================");
// //     printf("\n\t|                        Register Succes                       |");
// //     printf("\n\t================================================================");
// //     cetakakunregister(username_register, password_register);
// //     cek_username_register(username_register);
// //     cek_password_register(password_register);
// //     close();
// //     pilih_admin_login();
// // }

// void cek_username_register(char *username){
//     char nama_pengguna[50];
//     nama_pengguna = username;
//     return nama_pengguna;
// }

// void cek_password_register(char *password){
//     char kata_kunci[50];
//     kata_kunci = password;
//     return kata_kunci;
// }

// void admin_login(){
//         //deklarasi variabel yang akan digunakan untuk menyimpan nilai yang diambil dari file txt
//         char username_login_txt[50];
//         char password_login_txt[8];
//         //Membaca file txt
//         FILE *fptr;

//         if ((fptr = fopen("akunregister.txt","r")) == NULL){
//         printf("Error: File tidak ada!");
//         // Tutup program karena file gak ada.
//         exit(1);
//         }

//         fgets(username_register, sizeof(username_register), stdin);
//         fgets(password_register, sizeof(password_register), stdin);

//         printf("\n\t================================================================");
//         printf("\n\t|                         Login Account                        |");
//         printf("\n\t================================================================");
//         printf("\n\tMasukkan username : ");
//         fgets(username_login, sizeof(username_login), stdin);
//         printf("\n\tMasukkan password : ");
//         fgets(password_login, sizeof(password_login), stdin);
//         if( strcmp(username_login, username_register)==0 && strcmp(password_login, password_register)==0){ // strcmp akan mennghasilkan nilai 0 jika yang dibandingkan sama
//             printf("\n\t================================================================");
//             printf("\n\t|                         Login Succes                         |");
//             printf("\n\t----------------------------------------------------------------");
//             printf("\n\t| Selamat datang %s                                            |", username_login);
//             printf("\n\t----------------------------------------------------------------");
//         }else{
//             printf("\n\t================================================================");
//             printf("\n\t|                          PERINGATAN                          |");
//             printf("\n\t----------------------------------------------------------------");
//             printf("\n\t| Username atau password yang anda masukkan salah !            |");
//             printf("\n\t| Silahkan login ulang                                         |");
//             printf("\n\t----------------------------------------------------------------");
//             close();
//         }
//         fclose(fptr);
//         close();
//     }

// void cek_admin_login(char *username, char *password){
    
// }

// void cetakakunregister(char username_register[50], char password_register[50]){
//     //menulis file ke txt
//     //membuat pointer
//     FILE *fptr;

//     //membuka file
//     fptr = fopen("akunregister.txt", "a");

//     if (fptr==NULL){
//         printf ("\n\tFile tidak ditemukan");
//         exit(0);
//     }

//         fprintf(fptr, "\n\t%s,%s ", username_register, password_register);

//         fclose(fptr);//tutup file

//         printf("\n\tAkun Telah Berhasil Disimpan\n");
// }

void pilih_fitur(){
    int pilih;
    printf("\n\t================================================================");
    printf("\n\t|                      Silahkan Pilih Fitur                    |");
    printf("\n\t================================================================");
    printf("\n\t| (1) Menaikkan Daya Listrik                                   |");
    printf("\n\t| (2) Menghitung Tagihan Listrik Pascabayar                    |");
    printf("\n\t| (3) Menghitung Tagihan Listrik Prabayar                      |");
    printf("\n\t================================================================");
    printf("\n\t| Masukkan pilihan : ");
    while(scanf("%d", &pilih)==0 || pilih<1 || pilih >3){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\t| Masukkan pilihan : ");
        while( pilih = getchar() != '\n');
    }

    close();

    // if(pilih==1){
    //     upgrade_daya_listrik();
    if(pilih==2){
        pilih_golongan_pascabayar();
    }else if(pilih==3){
        pilih_golongan_prabayar();
    }

}

void pilih_golongan_pascabayar(){
    int golongan;
    printf("\n\t================================================================");
    printf("\n\t|                  Silahkan Pilih Golongan Anda                |");
    printf("\n\t================================================================");
    printf("\n\t| (1) Rumah Tangga                                             |");
    printf("\n\t| (2) Bisnis                                                   |");
    printf("\n\t| (3) Industri                                                 |");
    printf("\n\t| (4) Fasilitas publik                                         |");
    printf("\n\t================================================================");
    printf("\n\t| Masukkan pilihan : ");
    while(scanf("%d", &golongan)==0 || golongan<1 || golongan >4){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\t| Masukkan pilihan : ");
        while( golongan = getchar() != '\n');
    }

    close();

    if(golongan==1){
        rumah_tangga();
    }else if(golongan==2){
        bisnis();
    }else if(golongan==3){
        industri();
    }else if(golongan==4){
        fasilitas_publik();
    }

}

void rumah_tangga(){
    char dayalistrik[5] [32] = {"900 VA", "1.300 VA", "2.200 VA", "3.500 VA s.d. 5.500 VA", "6.600 VA ke atas"};
    char golongan[5] [10] = {"R-1/TR", "R-1/TR", "R-1/TR", "R-2/TR", "R-3/TR"};
    float dayalistrik_2[5] = {900, 1300, 2200, 5500, 6600};
    float pemakaianbulanlalu;
    float pemakaianbulanini;
    float pemakaian;
    char rekening[20];
    char nama[128];
    char alamat[128];
    float pilih_dayalistrik;
    int tanggal;
    int bulan;
    int tahun;

    // Membuat time realtime
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    printf("\n\t================================================================");
    printf("\n\t|                  Silahkan Pilih Daya Listrik                 |");
    printf("\n\t================================================================");
    printf("\n\t| (1) 900 VA                                                   |");
    printf("\n\t| (2) 1.300 VA                                                 |");
    printf("\n\t| (3) 2.200 VA                                                 |");
    printf("\n\t| (4) 3.500 VA s.d. 5.500 VA                                   |");
    printf("\n\t| (5) 6.600 VA ke atas                                         |");
    printf("\n\t================================================================");
    printf("\n\tMasukkan pilihan : ");
    while(scanf("%f", &pilih_dayalistrik)==0 || pilih_dayalistrik<1 || pilih_dayalistrik >5){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan pilihan : ");
        while(pilih_dayalistrik=getchar() != '\n');
    }

    close();

    printf("\n\t================================================================");
    printf("\n\t|                     Golongan Rumah Tangga                    |");
    printf("\n\t================================================================");
    printf("\n\tMasukkan nama anda : ");
    fgets(nama, sizeof(nama), stdin);
    // scanf("%[^\n]s", &nama);

    printf("\n\tMasukkan NO REK ID Pelanggan : ");
    //scanf("%[^\n]s", &rekening);
    fgets(rekening, sizeof(rekening), stdin);

    printf("\n\tMasukkan alamat anda : ");
    fgets(alamat, sizeof(alamat), stdin);
    // scanf("%[^\n]s", &alamat);

    printf("\n\tMasukkan pemakaian bulan sebelumnya (kWh) : ");
    while(scanf("%f", &pemakaianbulanlalu)==0){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan pemakaian bulan sebelumnya (kWh) : ");
        while(pemakaianbulanlalu=getchar() != '\n');
    }

    printf("\n\tMasukkan pemakaian bulan ini (kWh) :");
    while(scanf("%f", &pemakaianbulanini)==0 || pemakaianbulanini<pemakaianbulanlalu){
        printf("\n\tInputan anda salah, silahkan ulangi");
        printf("\n\tPemakaian bulan ini < pemakaian bulan lalu (kWh)");
        printf("\n\t================================================================");
        printf("\n\tMasukkan pemakaian bulan ini (kWh) :");
        while(pemakaianbulanini=getchar() != '\n');
    }

    pemakaian = pemakaianbulanini - pemakaianbulanlalu;

    //pilih_dayalistrik = pilih_dayalistrik-1; 
    close();

    printf("\n\t================================================================");
    printf("\n\t|               Silahkan Masukkan Tanggal Tagihan              |");
    printf("\n\t================================================================");
    printf("\n\tMasukkan tanggal tagihan : ");
    while(scanf("%d", &tanggal)==0 || tanggal<1 || tanggal >31){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan tanggal tagihan : ");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\tMasukkan bulan tagihan : ");
    while(scanf("%d", &bulan)==0 || bulan < 1 || bulan > 12){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan bulan tagihan : ");
        while( bulan=getchar() != '\n');
    }
    printf("\n\tMasukkan tahun tagihan : ");
    while(scanf("%d", &tahun)==0){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan tahun tagihan : ");
        while( tahun = getchar()!= '\n');
    }

    float rumus_rekening;
    float rumus_denda;
    float rumus_rekening_total;
    // 900 VA
    if(pilih_dayalistrik==1 && tanggal <= 20 && bulan == tm.tm_mon + 1 && tahun == tm.tm_year + 1900){ // Tidak Terkena Denda
        rumus_denda = 0;
        if (pemakaian<=36){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1352);
        }else{
            rumus_rekening = 1352*pemakaian;
        }
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }else if(pilih_dayalistrik==1 && dayalistrik_2[(int)pilih_dayalistrik-1]==900 && tanggal > 20 && tanggal <=31 && bulan == tm.tm_mon + 1 && tahun == tm.tm_year + 1900){ // Terkena Denda Biaya Keterlambatan 1, di tahun yang sama
        if (pemakaian<=36){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1352);
        }else{
            rumus_rekening = 1352*pemakaian;
        }
        rumus_denda = 3000;
        rumus_rekening_total= rumus_rekening + rumus_denda;
    }else if(pilih_dayalistrik==1 && dayalistrik_2[(int)pilih_dayalistrik-1]==900 &&  bulan == tm.tm_mon  && tahun == tm.tm_year + 1900){ // Terkena Denda Biaya Keterlambatan 2, di tahun yang sama
        if (pemakaian<=36){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1352);
        }else{
            rumus_rekening = 1352*pemakaian;
        }
        rumus_denda = 3000*2;
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }else if(pilih_dayalistrik==1 && dayalistrik_2[(int)pilih_dayalistrik-1]==900 &&  bulan == tm.tm_mon -1 && tahun == tm.tm_year + 1900){ // Terkena Denda Biaya Keterlambatan 3, di tahun yang sama
        if (pemakaian<=36){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1352);
        }else{
            rumus_rekening = 1352*pemakaian;
        }
        rumus_denda = 3000*3;
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }else if(pilih_dayalistrik==1 && dayalistrik_2[(int)pilih_dayalistrik-1]==900 &&  bulan == tm.tm_mon  && tahun == tm.tm_year + 1899){  // Terkena Denda Biaya Keterlambatan 2, di tahun yang beda
        if (pemakaian<=36){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1352);
        }else{
            rumus_rekening = 1352*pemakaian;
        }
        rumus_denda = 3000*2;
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }else if(pilih_dayalistrik==1 && dayalistrik_2[(int)pilih_dayalistrik-1]==900 &&  bulan == tm.tm_mon -1 && tahun == tm.tm_year + 1899){ // Terkena Denda Biaya Keterlambatan 3, di tahun yang sama
        if (pemakaian<=36){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1352);
        }else{
            rumus_rekening = 1352*pemakaian;
        }
        rumus_denda = 3000*3;
        rumus_rekening_total = rumus_rekening + rumus_denda;
    // 1.300 VA
    }else if (pilih_dayalistrik==2 && tanggal <= 20 && bulan == tm.tm_mon + 1 && tahun == tm.tm_year + 1900){ // Tidak Terkena Denda
        rumus_denda = 0;
        if (pemakaian<=52){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1444.70);
        }else{
            rumus_rekening = 1444.70*pemakaian;
        }
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }else if(pilih_dayalistrik==2 && dayalistrik_2[(int)pilih_dayalistrik-1]==1300 && tanggal > 20 && tanggal <=31 && bulan == tm.tm_mon + 1 && tahun == tm.tm_year + 1900){ // Terkena Denda Biaya Keterlambatan 1, di tahun yang sama
        if (pemakaian<=52){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1444.70);
        }else{
            rumus_rekening = 1444.70*pemakaian;
        }
        rumus_denda = 5000;
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }else if(pilih_dayalistrik==2 && dayalistrik_2[(int)pilih_dayalistrik-1]==1300 &&  bulan == tm.tm_mon  && tahun == tm.tm_year + 1900){ // Terkena Denda Biaya Keterlambatan 2, di tahun yang sama
        if (pemakaian<=52){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1444.70);
        }else{
            rumus_rekening = 1444.70*pemakaian;
        }
        rumus_denda = 5000*2;
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }else if(pilih_dayalistrik==2 && dayalistrik_2[(int)pilih_dayalistrik-1]==1300 &&  bulan == tm.tm_mon -1 && tahun == tm.tm_year + 1900){ // Terkena Denda Biaya Keterlambatan 3, di tahun yang sama
        if (pemakaian<=52){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1444.70);
        }else{
            rumus_rekening = 1444.70*pemakaian;
        }
        rumus_denda = 5000*3;
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }else if(pilih_dayalistrik==2 && dayalistrik_2[(int)pilih_dayalistrik-1]==1300 &&  bulan == tm.tm_mon  && tahun == tm.tm_year + 1899){  // Terkena Denda Biaya Keterlambatan 2, di tahun yang beda
        if (pemakaian<=52){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1444.70);
        }else{
            rumus_rekening = 1444.70*pemakaian;
        }
        rumus_denda = 5000*2;
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }else if(pilih_dayalistrik==2 && dayalistrik_2[(int)pilih_dayalistrik-1]==1300 &&  bulan == tm.tm_mon -1 && tahun == tm.tm_year + 1899){ // Terkena Denda Biaya Keterlambatan 3, di tahun yang sama
        if (pemakaian<=52){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1444.70);
        }else{
            rumus_rekening = 1444.70*pemakaian;
        }
        rumus_denda = 5000*3;
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }
    // 2.200 VA
    else if (pilih_dayalistrik==3 && tanggal <= 20 && bulan == tm.tm_mon + 1 && tahun == tm.tm_year + 1900){ // Tidak Terkena Denda
        rumus_denda = 0;
        if (pemakaian<=88){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1444.70);
        }else{
            rumus_rekening = 1444.70*pemakaian;
        }
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }else if(pilih_dayalistrik==3 && dayalistrik_2[(int)pilih_dayalistrik-1]==2200 && tanggal > 20 && tanggal <=31 && bulan == tm.tm_mon + 1 && tahun == tm.tm_year + 1900){ // Terkena Denda Biaya Keterlambatan 1, di tahun yang sama
        if (pemakaian<=88){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1444.70);
        }else{
            rumus_rekening = 1444.70*pemakaian;
        }
        rumus_denda = 10000;
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }else if(pilih_dayalistrik==3 && dayalistrik_2[(int)pilih_dayalistrik-1]==2200 &&  bulan == tm.tm_mon  && tahun == tm.tm_year + 1900){ // Terkena Denda Biaya Keterlambatan 2, di tahun yang sama
        if (pemakaian<=88){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1444.70);
        }else{
            rumus_rekening = 1444.70*pemakaian;
        }
        rumus_denda = 10000 * 2;
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }else if(pilih_dayalistrik==3 && dayalistrik_2[(int)pilih_dayalistrik-1]==2200 &&  bulan == tm.tm_mon -1 && tahun == tm.tm_year + 1900){ // Terkena Denda Biaya Keterlambatan 3, di tahun yang sama
        if (pemakaian<=88){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1444.70);
        }else{
            rumus_rekening = 1444.70*pemakaian;
        }
        rumus_denda = 10000 * 3;
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }else if(pilih_dayalistrik==3 && dayalistrik_2[(int)pilih_dayalistrik-1]==2200 && bulan == tm.tm_mon  && tahun == tm.tm_year + 1899){  // Terkena Denda Biaya Keterlambatan 2, di tahun yang beda
        if (pemakaian<=88){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1444.70);
        }else{
            rumus_rekening = 1444.70*pemakaian;
        }
        rumus_denda = 10000 * 2;
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }else if(pilih_dayalistrik==3 && dayalistrik_2[(int)pilih_dayalistrik-1]==2200 &&  bulan == tm.tm_mon -1 && tahun == tm.tm_year + 1899){ // Terkena Denda Biaya Keterlambatan 3, di tahun yang sama
        if (pemakaian<=88){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1444.70);
        }else{
            rumus_rekening = 1444.70*pemakaian;
        }
        rumus_denda = 10000 * 3;
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }
    // 3.500 VA - 5.500 VA
    else if (pilih_dayalistrik==4 && tanggal <= 20 && bulan == tm.tm_mon + 1 && tahun == tm.tm_year + 1900){ // Tidak Terkena Denda
       rumus_denda = 0;
        if (pemakaian<=220){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1699.53);
        }else{
            rumus_rekening = 1699.53*pemakaian;
        }
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }else if(pilih_dayalistrik==4 && dayalistrik_2[(int)pilih_dayalistrik-1]==5500 && tanggal > 20 && tanggal <=31 && bulan == tm.tm_mon + 1 && tahun == tm.tm_year + 1900){ // Terkena Denda Biaya Keterlambatan 1, di tahun yang sama
        if (pemakaian<=52){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1699.53);
        }else{
            rumus_rekening = 1699.53*pemakaian;
        }
        rumus_denda = 50000;
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }else if(pilih_dayalistrik==4 && dayalistrik_2[(int)pilih_dayalistrik-1]==5500 &&  bulan == tm.tm_mon  && tahun == tm.tm_year + 1900){ // Terkena Denda Biaya Keterlambatan 2, di tahun yang sama
        if (pemakaian<=52){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1699.53);
        }else{
            rumus_rekening = 1699.53*pemakaian;
        }
        rumus_denda = 50000*2;
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }else if(pilih_dayalistrik==4 && dayalistrik_2[(int)pilih_dayalistrik-1]==5500 &&  bulan == tm.tm_mon -1 && tahun == tm.tm_year + 1900){ // Terkena Denda Biaya Keterlambatan 3, di tahun yang sama
         if (pemakaian<=52){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1699.53);
        }else{
            rumus_rekening = 1699.53*pemakaian;
        }
        rumus_denda = 50000*3;
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }else if(pilih_dayalistrik==4 && dayalistrik_2[(int)pilih_dayalistrik-1]==5500 &&  bulan == tm.tm_mon  && tahun == tm.tm_year + 1899){  // Terkena Denda Biaya Keterlambatan 2, di tahun yang beda
        if (pemakaian<=52){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1699.53);
        }else{
            rumus_rekening = 1699.53*pemakaian;
        }
        rumus_denda = 50000*2;
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }else if(pilih_dayalistrik==4 && dayalistrik_2[(int)pilih_dayalistrik-1]==5500 &&  bulan == tm.tm_mon -1 && tahun == tm.tm_year + 1899){ // Terkena Denda Biaya Keterlambatan 3, di tahun yang sama
        if (pemakaian<=52){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1699.53);
        }else{
            rumus_rekening = 1699.53*pemakaian;
        }
        rumus_denda = 50000*3;
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }
    // 6600 Ke Atas
    else if (pilih_dayalistrik==5 && tanggal <= 20 && bulan == tm.tm_mon + 1 && tahun == tm.tm_year + 1900){ // Tidak Terkena Denda
        if (pemakaian<=264){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1699.53);
        }else{
            rumus_rekening = 1699.53*pemakaian;
        }
        rumus_denda = 0;
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }else if(pilih_dayalistrik==5 && dayalistrik_2[(int)pilih_dayalistrik-1]==6600 && tanggal > 20 && tanggal <=31 && bulan == tm.tm_mon + 1 && tahun == tm.tm_year + 1900){ // Terkena Denda Biaya Keterlambatan 1, di tahun yang sama
        if (pemakaian<=264){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1699.53);
        }else{
            rumus_rekening = 1699.53*pemakaian;
        }
        if (rumus_rekening > 2500000){
            rumus_denda = 0.3 * rumus_rekening;
        }else if (rumus_rekening <= 2500000){
            rumus_denda = 75000;
        }
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }else if(pilih_dayalistrik==5 && dayalistrik_2[(int)pilih_dayalistrik-1]==6600 &&  bulan == tm.tm_mon  && tahun == tm.tm_year + 1900){ // Terkena Denda Biaya Keterlambatan 2, di tahun yang sama
        if (pemakaian<=264){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1699.53);
        }else{
            rumus_rekening = 1699.53*pemakaian;
        }
        if (rumus_rekening > 2500000){
            rumus_denda = 0.3 * rumus_rekening *2;
        }else if (rumus_rekening <= 2500000){
            rumus_denda = 75000*2;
        }
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }else if(pilih_dayalistrik==5 && dayalistrik_2[(int)pilih_dayalistrik-1]==6600 &&  bulan == tm.tm_mon -1 && tahun == tm.tm_year + 1900){ // Terkena Denda Biaya Keterlambatan 3, di tahun yang sama
        rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1699.53*pemakaian);
        if (pemakaian<=264){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1699.53);
        }else{
            rumus_rekening = 1699.53*pemakaian;
        }
        if (rumus_rekening > 2500000){
            rumus_denda = 0.3 * rumus_rekening*3;
        }else if (rumus_rekening <= 2500000){
            rumus_denda = 75000*3;
        }
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }else if(pilih_dayalistrik==5 && dayalistrik_2[(int)pilih_dayalistrik-1]==6600 &&  bulan == tm.tm_mon  && tahun == tm.tm_year + 1899){  // Terkena Denda Biaya Keterlambatan 2, di tahun yang beda
        if (pemakaian<=264){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1699.53);
        }else{
            rumus_rekening = 1699.53*pemakaian;
        }
        if (rumus_rekening > 2500000){
            rumus_denda = 0.3 * rumus_rekening *2;
        }else if (rumus_rekening <= 2500000){
            rumus_denda = 75000*2;
        }
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }else if(pilih_dayalistrik==5 && dayalistrik_2[(int)pilih_dayalistrik-1]==6600 &&  bulan == tm.tm_mon -1 && tahun == tm.tm_year + 1899){ // Terkena Denda Biaya Keterlambatan 3, di tahun yang sama
        if (pemakaian<=264){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1699.53);
        }else{
            rumus_rekening = 1699.53*pemakaian;
        }
        if (rumus_rekening > 2500000){
            rumus_denda = 0.3 * rumus_rekening*3;
        }else if (rumus_rekening <= 2500000){
            rumus_denda = 75000*3;
        }
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }

    close();

    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t||                        Perusahaan Listrik Negara                        ||");
    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t||                        Informasi Tagihan Listrik                        ||");
    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\tGolongan Rumah Tangga : %s", golongan[(int)pilih_dayalistrik-1]);
    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\tNama                      : %s", nama);
    printf("\n\tNO REK ID Pelanggan       : %s", rekening);
    printf("\n\tAlamat                    : %s", alamat);
    printf("\n\tTanggal Tagihan Diberikan : %d-%d-%d", tanggal, bulan, tahun);
    printf("\n\tTanggal pembayaran        : %d-%02d-%02d %02d:%02d:%02d", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
    printf("\n\tSumber Daya Listrik Digunakan = %s", dayalistrik[(int)pilih_dayalistrik-1]);
    printf("\n\tPemakaian anda bulan ini      = %.2f (kWh)", pemakaian);
    printf("\n\tBiaya denda                   = Rp.%.2f", rumus_denda);
    printf("\n\tBiaya pemakaian listrik(kWh)  = Rp.%.2f", rumus_rekening);
    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\tjumlah tagihan anda           = Rp.%.2f", rumus_rekening_total);
}

void bisnis(){
    char dayalistrik[2] [32] = {"6.600 VA s.d. 200 kVA", "Di atas 200 kVA"};
    char golongan[2] [10] = {"B-2/TR", "B-3/TM"};
    float dayalistrik_2[5] = {6600, 200000};
    int wbp;
    int lwbp;
    float rumus_wbp;
    float rumus_lwbp;
    float beban_wbp = 1035.78;
    float beban_lwbp = 1035.78;
    float kVArh = 1114.74;
    float pilih_kVArh;
    float rumus_kVArh;
    float current_transformer;
    float rumus_current_transformer;
    float k; //Faktor Perbandingan harga WBP dan LWBP, disesuaikan dengan karakteristik beban sistem kelistrikan yang digunakan.
    float pemakaianbulanlalu;
    float pemakaianbulanini;
    float pemakaian1;
    float pemakaian2;
    char rekening[20];
    char nama[128];
    char alamat[128];
    float pilih_dayalistrik;
    int tanggal;
    int bulan;
    int tahun;

    // Membuat time realtime
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    printf("\n\t================================================================");
    printf("\n\t|                  Silahkan Pilih Daya Listrik                 |");
    printf("\n\t================================================================");
    printf("\n\t| (1) 6.600 VA - 200 kVA                                       |");
    printf("\n\t| (2) Di atas 200 kVA                                          |");
    printf("\n\t================================================================");
    printf("\n\tMasukkan pilihan : ");
    while(scanf("%f", &pilih_dayalistrik)==0 || pilih_dayalistrik<1 || pilih_dayalistrik >2){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan pilihan : ");
        while(pilih_dayalistrik=getchar() != '\n');
    }

    close();

    printf("\n\t================================================================");
    printf("\n\t|                        Golongan Bisnis                       |");
    printf("\n\t================================================================");
    printf("\n\tMasukkan nama anda : ");
    fgets(nama, sizeof(nama), stdin);
    // scanf("%[^\n]s", &nama);

    printf("\n\tMasukkan NO REK ID Pelanggan : ");
    //scanf("%[^\n]s", &rekening);
    fgets(rekening, sizeof(rekening), stdin);

    printf("\n\tMasukkan alamat anda : ");
    fgets(alamat, sizeof(alamat), stdin);
    // scanf("%[^\n]s", &alamat);

    printf("\n\tMasukkan pemakaian bulan sebelumnya (kWh) : ");
    while(scanf("%f", &pemakaianbulanlalu)==0){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan pemakaian bulan sebelumnya (kWh) : ");
        while(pemakaianbulanlalu=getchar() != '\n');
    }

    printf("\n\tMasukkan pemakaian bulan ini (kWh) :");
    while(scanf("%f", &pemakaianbulanini)==0 || pemakaianbulanini<pemakaianbulanlalu){
        printf("\n\tInputan anda salah, silahkan ulangi");
        printf("\n\tPemakaian bulan ini < pemakaian bulan lalu (kWh)");
        printf("\n\t================================================================");
        printf("\n\tMasukkan pemakaian bulan ini (kWh) :");
        while(pemakaianbulanini=getchar() != '\n');
    }

    printf("\n\tJika anda memilih di atas 200 kVA");
    printf("\n\tSilahkan masukkan faktor perbandingan harga WBP dan LWBP");
    printf("\n\tNilai perbandingannya 1.4 s/d 2");
    printf("\n\tJika tidak, silahkan masukkan 0");
    printf("\n\tJika iya, silahkan masukkan 14 s/d 20");
    printf("\n\t================================================================");
    printf("\n\tMasukkan faktor perbandingan harga WBP dan LWBP : ");
    while(scanf("%f", &k)==0 || k<0 || k>20){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan faktor perbandingan harga WBP dan LWBP : ");
        while(k=getchar() != '\n');
    }

    printf("\n\tJika anda memilih di atas 200 kVA");
    printf("\n\tMasukkan berapa jam bisnis anda beroperasi dalam WBP");
    printf("\n\tWBP = Waktu Beban Puncak (18.00 s.d. 22.00)");
    printf("\n\tJika tidak, silahkan masukkan 0");
    printf("\n\t================================================================");
    printf("\n\tMasukkan berapa jam bisnis anda beroperasi dalam WBP : ");
    while(scanf("%d", &wbp)==0 || wbp<0 || wbp>4){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan berapa jam bisnis anda beroperasi dalam WBP : ");
        while(wbp=getchar() != '\n');
    }

    printf("\n\tJika anda memilih di atas 200 kVA");
    printf("\n\tMasukkan berapa jam bisnis anda beroperasi dalam LWBP");
    printf("\n\tLWBP = Luar Waktu Beban Puncak (22.00 s.d. 18.00)");
    printf("\n\tJika tidak, silahkan masukkan 0");
    printf("\n\t================================================================");
    printf("\n\tMasukkan berapa jam bisnis anda beroperasi dalam LWBP : ");
    while(scanf("%d", &lwbp)==0 || lwbp<0 || lwbp>20){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan berapa jam bisnis anda beroperasi dalam LWBP : ");
        while(lwbp=getchar() != '\n');
    }

    printf("\n\tJika anda memilih di atas 200 kVA");
    printf("\n\tSilahkan isi rasio CT yang digunakan");
    printf("\n\tSilahkan hanya memasukkan besar arus listriknya saja");
    printf("\n\tJika tidak, silahkan masukkan 0");
    printf("\n\t================================================================");
    printf("\n\tMasukkan besar arus listrik (ampere) :");
    while(scanf("%f", &current_transformer)==0){
        printf("\n\tInputan anda salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan pemakaian bulan ini (kWh) :");
        while(current_transformer=getchar() != '\n');
    }

    printf("\n\tJika anda memilih di atas 200 kVA");
    printf("\n\tSilahkan isi Total Daya Reaktif(kVArh)");
    printf("\n\tSilahkan hanya memasukkan faktor dayanya saja");
    printf("\n\tJika tidak atau >= 0.85, silahkan masukkan 0");
    printf("\n\tJika < 0.85, silahkan masukkan 1");
    printf("\n\t================================================================");
    printf("\n\tMasukkan pilihan :");
    while(scanf("%f", &pilih_kVArh)==0){
        printf("\n\tInputan anda salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan pilihan :");
        while(pilih_kVArh=getchar() != '\n');
    }

    rumus_current_transformer = current_transformer / 5;
    pemakaian1 = pemakaianbulanini - pemakaianbulanlalu;
    pemakaian2 = (pemakaianbulanini - pemakaianbulanlalu) * rumus_current_transformer;
    rumus_wbp = (pemakaian2 * wbp) / 12 * k/10 * beban_wbp;
    rumus_lwbp = (pemakaian2 * lwbp) /12 * beban_lwbp;

    if(pilih_kVArh==1){
        rumus_kVArh = kVArh * pemakaian2;
    }else if(pilih_kVArh==0){
        rumus_kVArh = 0;
    }

    close();

    printf("\n\t================================================================");
    printf("\n\t|               Silahkan Masukkan Tanggal Tagihan              |");
    printf("\n\t================================================================");
    printf("\n\tMasukkan tanggal tagihan : ");
    while(scanf("%d", &tanggal)==0 || tanggal<1 || tanggal >31){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan tanggal tagihan : ");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\tMasukkan bulan tagihan : ");
    while(scanf("%d", &bulan)==0 || bulan < 1 || bulan > 12){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan bulan tagihan : ");
        while( bulan=getchar() != '\n');
    }
    printf("\n\tMasukkan tahun tagihan : ");
    while(scanf("%d", &tahun)==0){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan tahun tagihan : ");
        while( tahun = getchar()!= '\n');
    }

    float rumus_rekening;
    float rumus_rekening_total;
    float rumus_denda;
    float ppj;

    // 6600 VA - 200.000 VA
    if (pilih_dayalistrik==1 && tanggal <= 20 && bulan == tm.tm_mon + 1 && tahun == tm.tm_year + 1900){ // Tidak Terkena Denda
        if (pemakaian1<=264){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1444.70);
        }else{
            rumus_rekening = 1444.70*pemakaian1;
        }
        rumus_denda = 0;
        ppj = 0;
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }else if(pilih_dayalistrik==1 && dayalistrik_2[(int)pilih_dayalistrik-1]==6600 && tanggal > 20 && tanggal <=31 && bulan == tm.tm_mon + 1 && tahun == tm.tm_year + 1900){ // Terkena Denda Biaya Keterlambatan 1, di tahun yang sama
        if (pemakaian1<=264){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1444.70);
        }else{
            rumus_rekening = 1444.70*pemakaian1;
        }
        if (rumus_rekening > 2500000){
            rumus_denda = 0.3 * rumus_rekening;
        }else if (rumus_rekening <= 2500000){
            rumus_denda = 75000;
        }
        ppj = 0;
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }else if(pilih_dayalistrik==1 && dayalistrik_2[(int)pilih_dayalistrik-1]==6600 &&  bulan == tm.tm_mon  && tahun == tm.tm_year + 1900){ // Terkena Denda Biaya Keterlambatan 2, di tahun yang sama
        if (pemakaian1<=264){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1444.70);
        }else{
            rumus_rekening = 1444.70*pemakaian1;
        }
        if (rumus_rekening > 2500000){
            rumus_denda = 0.3 * rumus_rekening;
        }else if (rumus_rekening <= 2500000){
            rumus_denda = 75000*2;
        }
         ppj = 0;
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }else if(pilih_dayalistrik==1 && dayalistrik_2[(int)pilih_dayalistrik-1]==6600 &&  bulan == tm.tm_mon -1 && tahun == tm.tm_year + 1900){ // Terkena Denda Biaya Keterlambatan 3, di tahun yang sama
        if (pemakaian1<=264){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1444.70);
        }else{
            rumus_rekening = 1444.70*pemakaian1;
        }
        if (rumus_rekening > 2500000){
            rumus_denda = 0.3 * rumus_rekening;
        }else if (rumus_rekening <= 2500000){
            rumus_denda = 75000*3;
        }
         ppj = 0;
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }else if(pilih_dayalistrik==1 && dayalistrik_2[(int)pilih_dayalistrik-1]==6600 &&  bulan == tm.tm_mon  && tahun == tm.tm_year + 1899){  // Terkena Denda Biaya Keterlambatan 2, di tahun yang beda
        if (pemakaian1<=264){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1444.70);
        }else{
            rumus_rekening = 1444.70*pemakaian1;
        }
        if (rumus_rekening > 2500000){
            rumus_denda = 0.3 * rumus_rekening;
        }else if (rumus_rekening <= 2500000){
            rumus_denda = 75000*2;
        }
         ppj = 0;
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }else if(pilih_dayalistrik==1 && dayalistrik_2[(int)pilih_dayalistrik-1]==6600 &&  bulan == tm.tm_mon -1 && tahun == tm.tm_year + 1899){ // Terkena Denda Biaya Keterlambatan 3, di tahun yang beda
        if (pemakaian1<=264){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1444.70);
        }else{
            rumus_rekening = 1444.70*pemakaian1;
        }
        if (rumus_rekening > 2500000){
            rumus_denda = 0.3 * rumus_rekening;
        }else if (rumus_rekening <= 2500000){
            rumus_denda = 75000*3;
        }
         ppj = 0;
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }
    // di atas 200.000 VA
    else if (pilih_dayalistrik==2 && tanggal <= 20 && bulan == tm.tm_mon + 1 && tahun == tm.tm_year + 1900){ // Tidak Terkena Denda
        rumus_denda = 0;
        rumus_rekening = (rumus_lwbp + rumus_wbp) + ((rumus_lwbp + rumus_wbp) * 0.03) + (rumus_kVArh) ;
        ppj = (rumus_lwbp + rumus_wbp) * 0.03;
        if (pemakaian2 <= 8000){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (lwbp);
        }
        rumus_rekening_total = rumus_rekening  + rumus_denda;
    }else if(pilih_dayalistrik==2 && dayalistrik_2[(int)pilih_dayalistrik-1]==200000 && tanggal > 20 && tanggal <=31 && bulan == tm.tm_mon + 1 && tahun == tm.tm_year + 1900){ // Terkena Denda Biaya Keterlambatan 1, di tahun yang sama
        rumus_rekening = (rumus_lwbp + rumus_wbp) + ((rumus_lwbp + rumus_wbp) * 0.03) + (rumus_kVArh);
        ppj = (rumus_lwbp + rumus_wbp) * 0.03;
        if (pemakaian2 <= 8000){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (lwbp);
        }
        if (rumus_rekening > 3333334){
            rumus_denda = 0.3 * rumus_rekening;
        }else if (rumus_rekening <= 3333334){
            rumus_denda = 100000;
        }
        rumus_rekening_total = rumus_rekening  + rumus_denda;
    }else if(pilih_dayalistrik==2 && dayalistrik_2[(int)pilih_dayalistrik-1]==200000 && bulan == tm.tm_mon  && tahun == tm.tm_year + 1900){ // Terkena Denda Biaya Keterlambatan 2, di tahun yang sama
        rumus_rekening = (rumus_lwbp + rumus_wbp) + ((rumus_lwbp + rumus_wbp) * 0.03) + (rumus_kVArh);
        ppj = (rumus_lwbp + rumus_wbp) * 0.03;
        if (pemakaian2 <= 8000){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (lwbp);
        }
        if (rumus_rekening > 3333334){
            rumus_denda = 0.3 * rumus_rekening * 2;
        }else if (rumus_rekening <= 3333334){
            rumus_denda = 100000*2;
        }
        rumus_rekening_total = rumus_rekening  + rumus_denda;
    }else if(pilih_dayalistrik==2 && dayalistrik_2[(int)pilih_dayalistrik-1]==200000 &&  bulan == tm.tm_mon -1 && tahun == tm.tm_year + 1900){ // Terkena Denda Biaya Keterlambatan 3, di tahun yang sama
        rumus_rekening = (rumus_lwbp + rumus_wbp) + ((rumus_lwbp + rumus_wbp) * 0.03) + (rumus_kVArh);
        ppj = (rumus_lwbp + rumus_wbp) * 0.03;
        if (pemakaian2 <= 8000){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (lwbp);
        }
        if (rumus_rekening > 3333334){
            rumus_denda = 0.3 * rumus_rekening * 3;
        }else if (rumus_rekening <= 3333334){
            rumus_denda = 100000*3;
        }
        rumus_rekening_total = rumus_rekening  + rumus_denda;
    }else if(pilih_dayalistrik==2 && dayalistrik_2[(int)pilih_dayalistrik-1]==200000 &&  bulan == tm.tm_mon  && tahun == tm.tm_year + 1899){  // Terkena Denda Biaya Keterlambatan 2, di tahun yang beda
        rumus_rekening = (rumus_lwbp + rumus_wbp) + ((rumus_lwbp + rumus_wbp) * 0.03) + (rumus_kVArh);
        ppj = (rumus_lwbp + rumus_wbp) * 0.03;
        if (pemakaian2 <= 8000){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (lwbp);
        }
        if (rumus_rekening > 3333334){
            rumus_denda = 0.3 * rumus_rekening * 2;
        }else if (rumus_rekening <= 3333334){
            rumus_denda = 100000*2;
        }
        rumus_rekening_total = rumus_rekening  + rumus_denda;
    }else if(pilih_dayalistrik==2 && dayalistrik_2[(int)pilih_dayalistrik-1]==200000 &&  bulan == tm.tm_mon -1 && tahun == tm.tm_year + 1899){ // Terkena Denda Biaya Keterlambatan 3, di tahun yang beda
        rumus_rekening = (rumus_lwbp + rumus_wbp) + ((rumus_lwbp + rumus_wbp) * 0.03) + (rumus_kVArh);
        ppj = (rumus_lwbp + rumus_wbp) * 0.03;
        if (pemakaian2 <= 8000){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (lwbp);
        }
        if (rumus_rekening > 3333334){
            rumus_denda = 0.3 * rumus_rekening * 3;
        }else if (rumus_rekening <= 3333334){
            rumus_denda = 100000*3;
        }
        rumus_rekening_total = rumus_rekening  + rumus_denda;
    }

    close();

    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t||                        Perusahaan Listrik Negara                        ||");
    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t||                        Informasi Tagihan Listrik                        ||");
    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\tGolongan Bisnis : %s", golongan[(int)pilih_dayalistrik-1]);
    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\tNama                      : %s", nama);
    printf("\n\tNO REK ID Pelanggan       : %s", rekening);
    printf("\n\tAlamat                    : %s", alamat);
    printf("\n\tTanggal Tagihan Diberikan : %d-%d-%d", tanggal, bulan, tahun);
    printf("\n\tTanggal pembayaran        : %d-%02d-%02d %02d:%02d:%02d", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
    printf("\n\tSumber Daya Listrik Digunakan           = %s", dayalistrik[(int)pilih_dayalistrik-1]);
    if(pilih_dayalistrik==1){
        printf("\n\tPemakaian anda bulan ini                = %.2f (kWh)", pemakaian1);
    }else if(pilih_dayalistrik==2){
        printf("\n\tPemakaian anda bulan ini                = %.2f (kWh)", pemakaian2);
    }
    printf("\n\tBiaya pemakaian daya reaktif (kVArh)    = Rp.%.1f ", rumus_kVArh);
    printf("\n\tFaktor perbandingan harga WBP dan LWBP  = Rp.%.2f ", k/10);
    printf("\n\tBiaya Beban WBP                         = Rp.%.2f ", rumus_wbp);
    printf("\n\tBiaya Beban LWBP                        = Rp.%.2f ", rumus_lwbp);
    printf("\n\tBiaya denda                             = Rp.%.2f", rumus_denda);
    printf("\n\tBiaya Pajak Penerangan Jalan            = Rp.%.2f", ppj);
    printf("\n\tBiaya pemakaian listrik(kWh)            = Rp.%.2f", rumus_rekening);
    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\tjumlah tagihan anda                     = Rp.%.2f", rumus_rekening_total);
}

void industri(){
    char dayalistrik[2] [32] = {"Di atas 200 kVA", "30.000 kVA ke atas"};
    char golongan[2] [10] = {"I-3/TM", "I-4/TT"};
    float dayalistrik_2[5] = {200000, 30000000};
    int wbp;
    int lwbp;
    float rumus_wbp;
    float rumus_lwbp;
    float beban_wbp = 1035.78;
    float beban_lwbp = 1035.78;
    float beban_wbp_dan_lwbp = 996.74;
    float rumus_beban_wbp_dan_lwbp;
    float kVArh1 = 1114.74;
    float kVArh2 = 996.74;
    float pilih_kVArh;
    float rumus_kVArh;
    float current_transformer;
    float rumus_current_transformer;
    float k; //Faktor Perbandingan harga WBP dan LWBP, disesuaikan dengan karakteristik beban sistem kelistrikan yang digunakan.
    float pemakaianbulanlalu;
    float pemakaianbulanini;
    float pemakaian;
    char rekening[20];
    char nama[128];
    char alamat[128];
    float pilih_dayalistrik;
    int tanggal;
    int bulan;
    int tahun;

    // Membuat time realtime
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    printf("\n\t================================================================");
    printf("\n\t|                  Silahkan Pilih Daya Listrik                 |");
    printf("\n\t================================================================");
    printf("\n\t| (1) Di atas 200 kVA                                          |");
    printf("\n\t| (2) 30.000 kVA ke atas                                       |");
    printf("\n\t================================================================");
    printf("\n\tMasukkan pilihan : ");
    while(scanf("%f", &pilih_dayalistrik)==0 || pilih_dayalistrik<1 || pilih_dayalistrik >2){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan pilihan : ");
        while(pilih_dayalistrik=getchar() != '\n');
    }

    close();

    printf("\n\t================================================================");
    printf("\n\t|                       Golongan Industri                      |");
    printf("\n\t================================================================");
    printf("\n\tMasukkan nama anda : ");
    fgets(nama, sizeof(nama), stdin);
    // scanf("%[^\n]s", &nama);

    printf("\n\tMasukkan NO REK ID Pelanggan : ");
    //scanf("%[^\n]s", &rekening);
    fgets(rekening, sizeof(rekening), stdin);

    printf("\n\tMasukkan alamat anda : ");
    fgets(alamat, sizeof(alamat), stdin);
    // scanf("%[^\n]s", &alamat);

    printf("\n\tMasukkan pemakaian bulan sebelumnya (kWh) : ");
    while(scanf("%f", &pemakaianbulanlalu)==0){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan pemakaian bulan sebelumnya (kWh) : ");
        while(pemakaianbulanlalu=getchar() != '\n');
    }

    printf("\n\tMasukkan pemakaian bulan ini (kWh) :");
    while(scanf("%f", &pemakaianbulanini)==0 || pemakaianbulanini<pemakaianbulanlalu){
        printf("\n\tInputan anda salah, silahkan ulangi");
        printf("\n\tPemakaian bulan ini < pemakaian bulan lalu (kWh)");
        printf("\n\t================================================================");
        printf("\n\tMasukkan pemakaian bulan ini (kWh) :");
        while(pemakaianbulanini=getchar() != '\n');
    }

    printf("\n\tJika anda memilih di atas 200 kVA");
    printf("\n\tSilahkan masukkan faktor perbandingan harga WBP dan LWBP");
    printf("\n\tNilai perbandingannya 1.4 s/d 2");
    printf("\n\tJika tidak, silahkan masukkan 0");
    printf("\n\tJika iya, silahkan masukkan 14 s/d 20");
    printf("\n\t================================================================");
    printf("\n\tMasukkan faktor perbandingan harga WBP dan LWBP : ");
    while(scanf("%f", &k)==0 || k<0 || k>20){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan faktor perbandingan harga WBP dan LWBP : ");
        while(k=getchar() != '\n');
    }

    printf("\n\tJika anda memilih di atas 200 kVA");
    printf("\n\tMasukkan berapa jam bisnis anda beroperasi dalam WBP");
    printf("\n\tWBP = Waktu Beban Puncak (18.00 s.d. 22.00)");
    printf("\n\tJika tidak, silahkan masukkan 0");
    printf("\n\t================================================================");
    printf("\n\tMasukkan berapa jam bisnis anda beroperasi dalam WBP : ");
    while(scanf("%d", &wbp)==0 || wbp<0 || wbp>4){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan berapa jam bisnis anda beroperasi dalam WBP : ");
        while(wbp=getchar() != '\n');
    }

    printf("\n\tJika anda memilih di atas 200 kVA");
    printf("\n\tMasukkan berapa jam bisnis anda beroperasi dalam LWBP");
    printf("\n\tLWBP = Luar Waktu Beban Puncak (22.00 s.d. 18.00)");
    printf("\n\tJika tidak, silahkan masukkan 0");
    printf("\n\t================================================================");
    printf("\n\tMasukkan berapa jam bisnis anda beroperasi dalam LWBP : ");
    while(scanf("%d", &lwbp)==0 || lwbp<0 || lwbp>20){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan berapa jam bisnis anda beroperasi dalam LWBP : ");
        while(lwbp=getchar() != '\n');
    }

    printf("\n\tSilahkan isi rasio CT yang digunakan");
    printf("\n\tSilahkan hanya memasukkan besar arus listriknya saja");
    printf("\n\t================================================================");
    printf("\n\tMasukkan besar arus listrik (ampere) :");
    while(scanf("%f", &current_transformer)==0 || pilih_kVArh < 0){
        printf("\n\tInputan anda salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan pemakaian bulan ini (kWh) :");
        while(current_transformer=getchar() != '\n');
    }

    printf("\n\tSilahkan isi Total Daya Reaktif(kVArh)");
    printf("\n\tSilahkan hanya memasukkan sesuai pilihan");
    printf("\n\tJika tidak atau >= 0.85, silahkan masukkan 0");
    printf("\n\tJika di atas 200 kVA dan < 0.85, silahkan masukkan 1");
    printf("\n\tJika 30.000 ke atas kVA dan < 0.85, silahkan masukkan 2");
    printf("\n\t================================================================");
    printf("\n\tMasukkan pilihan :");
    while(scanf("%f", &pilih_kVArh)==0 || pilih_kVArh < 0 || pilih_kVArh > 0){
        printf("\n\tInputan anda salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan pilihan :");
        while(pilih_kVArh=getchar() != '\n');
    }

    rumus_current_transformer = current_transformer / 5;
    pemakaian = (pemakaianbulanini - pemakaianbulanlalu) * rumus_current_transformer;
    rumus_wbp = (pemakaian * wbp) / 12 * k/10 * beban_wbp;
    rumus_lwbp = (pemakaian * lwbp) /12 * beban_lwbp;
    rumus_beban_wbp_dan_lwbp = beban_wbp_dan_lwbp*pemakaian;

    if(pilih_kVArh==1){
        rumus_kVArh = kVArh1 * pemakaian;
    }else if(pilih_kVArh==2){
        rumus_kVArh = kVArh2 * pemakaian;
    }else if(pilih_kVArh==0){
        rumus_kVArh = 0;
    }

    close();

    printf("\n\t================================================================");
    printf("\n\t|               Silahkan Masukkan Tanggal Tagihan              |");
    printf("\n\t================================================================");
    printf("\n\tMasukkan tanggal tagihan : ");
    while(scanf("%d", &tanggal)==0 || tanggal<1 || tanggal >31){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan tanggal tagihan : ");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\tMasukkan bulan tagihan : ");
    while(scanf("%d", &bulan)==0 || bulan < 1 || bulan > 12){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan bulan tagihan : ");
        while( bulan=getchar() != '\n');
    }
    printf("\n\tMasukkan tahun tagihan : ");
    while(scanf("%d", &tahun)==0){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan tahun tagihan : ");
        while( tahun = getchar()!= '\n');
    }

    float rumus_rekening_total;
    float rumus_rekening;
    float rumus_denda;
    float ppj;

    // diatas 200 kVA
    if (pilih_dayalistrik==1 && tanggal <= 20 && bulan == tm.tm_mon + 1 && tahun == tm.tm_year + 1900){ // Tidak Terkena Denda
        rumus_denda = 0;
        rumus_rekening = (rumus_lwbp + rumus_wbp) + ((rumus_lwbp + rumus_wbp) * 0.03) + (rumus_kVArh) ;
        ppj = (rumus_lwbp + rumus_wbp) * 0.03;
        if (pemakaian <= 8000){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (lwbp);
        }
        rumus_rekening_total = rumus_rekening  + rumus_denda;
    }else if(pilih_dayalistrik==1 && dayalistrik_2[(int)pilih_dayalistrik-1]==200000 && tanggal > 20 && tanggal <=31 && bulan == tm.tm_mon + 1 && tahun == tm.tm_year + 1900){ // Terkena Denda Biaya Keterlambatan 1, di tahun yang sama
        rumus_rekening = (rumus_lwbp + rumus_wbp) + ((rumus_lwbp + rumus_wbp) * 0.03) + (rumus_kVArh);
        ppj = (rumus_lwbp + rumus_wbp) * 0.03;
        if (pemakaian <= 8000){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (lwbp);
        }
        if (rumus_rekening > 3333334){
            rumus_denda = 0.3 * rumus_rekening;
        }else if (rumus_rekening <= 3333334){
            rumus_denda = 100000;
        }
        rumus_rekening_total = rumus_rekening  + rumus_denda;
    }else if(pilih_dayalistrik==1 && dayalistrik_2[(int)pilih_dayalistrik-1]==200000 &&  bulan == tm.tm_mon  && tahun == tm.tm_year + 1900){ // Terkena Denda Biaya Keterlambatan 2, di tahun yang sama
        rumus_rekening = (rumus_lwbp + rumus_wbp) + ((rumus_lwbp + rumus_wbp) * 0.03) + (rumus_kVArh);
        ppj = (rumus_lwbp + rumus_wbp) * 0.03;
        if (pemakaian <= 8000){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (lwbp);
        }
        if (rumus_rekening > 3333334){
            rumus_denda = 0.3 * rumus_rekening * 2;
        }else if (rumus_rekening <= 3333334){
            rumus_denda = 100000*2;
        }
        rumus_rekening_total = rumus_rekening  + rumus_denda;
    }else if(pilih_dayalistrik==1 && dayalistrik_2[(int)pilih_dayalistrik-1]==200000 &&  bulan == tm.tm_mon -1 && tahun == tm.tm_year + 1900){ // Terkena Denda Biaya Keterlambatan 3, di tahun yang sama
        rumus_rekening = (rumus_lwbp + rumus_wbp) + ((rumus_lwbp + rumus_wbp) * 0.03) + (rumus_kVArh);
        ppj = (rumus_lwbp + rumus_wbp) * 0.03;
        if (pemakaian <= 8000){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (lwbp);
        }
        if (rumus_rekening > 3333334){
            rumus_denda = 0.3 * rumus_rekening * 3;
        }else if (rumus_rekening <= 3333334){
            rumus_denda = 100000*3;
        }
        rumus_rekening_total = rumus_rekening  + rumus_denda;
    }else if(pilih_dayalistrik==1 && dayalistrik_2[(int)pilih_dayalistrik-1]==200000 &&  bulan == tm.tm_mon  && tahun == tm.tm_year + 1899){  // Terkena Denda Biaya Keterlambatan 2, di tahun yang beda
        rumus_rekening = (rumus_lwbp + rumus_wbp) + ((rumus_lwbp + rumus_wbp) * 0.03) + (rumus_kVArh);
        ppj = (rumus_lwbp + rumus_wbp) * 0.03;
        if (pemakaian <= 8000){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (lwbp);
        }
        if (rumus_rekening > 3333334){
            rumus_denda = 0.3 * rumus_rekening * 2;
        }else if (rumus_rekening <= 3333334){
            rumus_denda = 100000*2;
        }
        rumus_rekening_total = rumus_rekening  + rumus_denda;
    }else if(pilih_dayalistrik==1 && dayalistrik_2[(int)pilih_dayalistrik-1]==200000 &&  bulan == tm.tm_mon -1 && tahun == tm.tm_year + 1899){ // Terkena Denda Biaya Keterlambatan 3, di tahun yang beda
        rumus_rekening = (rumus_lwbp + rumus_wbp) + ((rumus_lwbp + rumus_wbp) * 0.03) + (rumus_kVArh);
        ppj = (rumus_lwbp + rumus_wbp) * 0.03;
        if (pemakaian <= 8000){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (lwbp);
        }
        if (rumus_rekening > 3333334){
            rumus_denda = 0.3 * rumus_rekening * 3;
        }else if (rumus_rekening <= 3333334){
            rumus_denda = 100000*3;
        }
        rumus_rekening_total = rumus_rekening  + rumus_denda;
    }
    // 30.000 kVA ke atas
    else if (pilih_dayalistrik==2 && tanggal <= 20 && bulan == tm.tm_mon + 1 && tahun == tm.tm_year + 1900){ // Tidak Terkena Denda
        rumus_rekening = (rumus_beban_wbp_dan_lwbp) + ((rumus_beban_wbp_dan_lwbp) * 0.03) + (rumus_kVArh) ;
        ppj = (rumus_beban_wbp_dan_lwbp) * 0.03;
        if (pemakaian <= 1200000){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (rumus_beban_wbp_dan_lwbp + (rumus_kVArh));
        }
        rumus_denda = 0;
        rumus_rekening_total = rumus_rekening  + rumus_denda;
    }else if(pilih_dayalistrik==2 && dayalistrik_2[(int)pilih_dayalistrik-1]==30000000 && tanggal > 20 && tanggal <=31 && bulan == tm.tm_mon + 1 && tahun == tm.tm_year + 1900){ // Terkena Denda Biaya Keterlambatan 1, di tahun yang sama
        rumus_rekening = (rumus_beban_wbp_dan_lwbp) + ((rumus_beban_wbp_dan_lwbp) * 0.03) + (rumus_kVArh) ;
        ppj = (rumus_beban_wbp_dan_lwbp) * 0.03;
        if (pemakaian <= 1200000){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (rumus_beban_wbp_dan_lwbp + (rumus_kVArh));
        }
        if (rumus_rekening > 3333334){
            rumus_denda = 0.3 * rumus_rekening;
        }else if (rumus_rekening <= 3333334){
            rumus_denda = 100000;
        }
        rumus_rekening_total = rumus_rekening  + rumus_denda;
    }else if(pilih_dayalistrik==2 && dayalistrik_2[(int)pilih_dayalistrik-1]==30000000 &&  bulan == tm.tm_mon  && tahun == tm.tm_year + 1900){ // Terkena Denda Biaya Keterlambatan 2, di tahun yang sama
        rumus_rekening = (rumus_beban_wbp_dan_lwbp) + ((rumus_beban_wbp_dan_lwbp) * 0.03) + (rumus_kVArh) ;
        ppj = (rumus_beban_wbp_dan_lwbp) * 0.03;
        if (pemakaian <= 1200000){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (rumus_beban_wbp_dan_lwbp + (rumus_kVArh));
        }
        if (rumus_rekening > 3333334){
            rumus_denda = 0.3 * rumus_rekening * 2;
        }else if (rumus_rekening <= 3333334){
            rumus_denda = 100000 * 2;
        }
        rumus_rekening_total = rumus_rekening  + rumus_denda;
    }else if(pilih_dayalistrik==2 && dayalistrik_2[(int)pilih_dayalistrik-1]==30000000 &&  bulan == tm.tm_mon -1 && tahun == tm.tm_year + 1900){ // Terkena Denda Biaya Keterlambatan 3, di tahun yang sama
        rumus_rekening = (rumus_beban_wbp_dan_lwbp) + ((rumus_beban_wbp_dan_lwbp) * 0.03) + (rumus_kVArh) ;
        ppj = (rumus_beban_wbp_dan_lwbp) * 0.03;
        if (pemakaian <= 1200000){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (rumus_beban_wbp_dan_lwbp + (rumus_kVArh));
        }
        if (rumus_rekening > 3333334){
            rumus_denda = 0.3 * rumus_rekening * 3;
        }else if (rumus_rekening <= 3333334){
            rumus_denda = 100000 * 3;
        }
        rumus_rekening_total = rumus_rekening  + rumus_denda;
    }else if(pilih_dayalistrik==2 && dayalistrik_2[(int)pilih_dayalistrik-1]==30000000 &&  bulan == tm.tm_mon  && tahun == tm.tm_year + 1899){  // Terkena Denda Biaya Keterlambatan 2, di tahun yang beda
        rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (rumus_beban_wbp_dan_lwbp + (rumus_kVArh));
        rumus_rekening = (rumus_beban_wbp_dan_lwbp) + ((rumus_beban_wbp_dan_lwbp) * 0.03) + (rumus_kVArh) ;
        ppj = (rumus_beban_wbp_dan_lwbp) * 0.03;
        if (pemakaian <= 1200000){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (rumus_beban_wbp_dan_lwbp + (rumus_kVArh));
        }
        if (rumus_rekening > 3333334){
            rumus_denda = 0.3 * rumus_rekening * 2;
        }else if (rumus_rekening <= 3333334){
            rumus_denda = 100000 * 2;
        }
        rumus_rekening_total = rumus_rekening  + rumus_denda;
    }else if(pilih_dayalistrik==2 && dayalistrik_2[(int)pilih_dayalistrik-1]==30000000 &&  bulan == tm.tm_mon -1 && tahun == tm.tm_year + 1899){ // Terkena Denda Biaya Keterlambatan 3, di tahun yang beda
        rumus_rekening = (rumus_beban_wbp_dan_lwbp) + ((rumus_beban_wbp_dan_lwbp) * 0.03) + (rumus_kVArh) ;
        ppj = (rumus_beban_wbp_dan_lwbp) * 0.03;
        if (pemakaian <= 1200000){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (rumus_beban_wbp_dan_lwbp + (rumus_kVArh));
        }
        if (rumus_rekening > 3333334){
            rumus_denda = 0.3 * rumus_rekening * 3;
        }else if (rumus_rekening <= 3333334){
            rumus_denda = 100000 * 3;
        }
        rumus_rekening_total = rumus_rekening  + rumus_denda;
    }

    close();

    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t||                        Perusahaan Listrik Negara                        ||");
    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t||                        Informasi Tagihan Listrik                        ||");
    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\tGolongan Industri : %s", golongan[(int)pilih_dayalistrik-1]);
    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\tNama                      : %s", nama);
    printf("\n\tNO REK ID Pelanggan       : %s", rekening);
    printf("\n\tAlamat                    : %s", alamat);
    printf("\n\tTanggal Tagihan Diberikan : %d-%d-%d", tanggal, bulan, tahun);
    printf("\n\tTanggal pembayaran        : %d-%02d-%02d %02d:%02d:%02d", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
    printf("\n\tSumber Daya Listrik Digunakan           = %s", dayalistrik[(int)pilih_dayalistrik-1]);
    printf("\n\tPemakaian anda bulan ini                = %.2f (kWh)", pemakaian);
    printf("\n\tBiaya pemakaian daya reaktif (kVArh)    = Rp.%.1f ", rumus_kVArh);
    printf("\n\tFaktor perbandingan harga WBP dan LWBP  = Rp.%.2f ", k/10);
    printf("\n\tBiaya Beban WBP                         = Rp.%.2f ", rumus_wbp);
    printf("\n\tBiaya Beban LWBP                        = Rp.%.2f ", rumus_lwbp);
    printf("\n\tBiaya Beban WBP Dan LWBP                = Rp.%.2f ", rumus_beban_wbp_dan_lwbp);
    printf("\n\tBiaya Pajak Penerangan Jalan            = Rp.%.2f", ppj);
    printf("\n\tBiaya denda                             = Rp.%.2f", rumus_denda);
    printf("\n\tBiaya pemakaian listrik(kWh)            = Rp.%.2f", rumus_rekening);
    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\tjumlah tagihan anda                     = Rp.%.2f", rumus_rekening_total);
}

void fasilitas_publik(){
    char dayalistrik[3] [32] = {"6.600 VA s.d. 200 kVA", "Di atas 200 kVA", "Penerangan Jalan Umum"};
    char golongan[3] [10] = {"P-1/TR", "P-2/TM", "P-3/TR"};
    float dayalistrik_2[5] = {6600, 200000, 0};
    int wbp;
    int lwbp;
    float rumus_wbp;
    float rumus_lwbp;
    float beban_wbp = 1415.01;
    float beban_lwbp = 1415.01;
    float kVArh = 1522.88;
    float pilih_kVArh;
    float rumus_kVArh;
    float current_transformer;
    float rumus_current_transformer;
    float k; //Faktor Perbandingan harga WBP dan LWBP, disesuaikan dengan karakteristik beban sistem kelistrikan yang digunakan.
    float pemakaianbulanlalu;
    float pemakaianbulanini;
    float pemakaian1;
    float pemakaian2;
    char rekening[20];
    char nama[128];
    char alamat[128];
    float pilih_dayalistrik;
    int tanggal;
    int bulan;
    int tahun;

    // Membuat time realtime
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    printf("\n\t================================================================");
    printf("\n\t|                  Silahkan Pilih Daya Listrik                 |");
    printf("\n\t================================================================");
    printf("\n\t| (1) 6.600 VA - 200 kVA (Kantor Pemerintah Tegangan Rendah)   |");
    printf("\n\t| (2) Di atas 200 kVA (Kantor Pemerintah Tegangan Menegah)     |");
    printf("\n\t| (3) Penerangan Jalan Umum                                    |");
    printf("\n\t================================================================");
    printf("\n\tMasukkan pilihan : ");
    while(scanf("%f", &pilih_dayalistrik)==0 || pilih_dayalistrik<1 || pilih_dayalistrik >3){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan pilihan : ");
        while(pilih_dayalistrik=getchar() != '\n');
    }

    close();

    printf("\n\t================================================================");
    printf("\n\t|                   Golongan Fasilitas Publik                  |");
    printf("\n\t================================================================");
    printf("\n\tMasukkan nama anda : ");
    fgets(nama, sizeof(nama), stdin);
    // scanf("%[^\n]s", &nama);

    printf("\n\tMasukkan NO REK ID Pelanggan : ");
    //scanf("%[^\n]s", &rekening);
    fgets(rekening, sizeof(rekening), stdin);

    printf("\n\tMasukkan alamat anda : ");
    fgets(alamat, sizeof(alamat), stdin);
    // scanf("%[^\n]s", &alamat);

    printf("\n\tMasukkan pemakaian bulan sebelumnya (kWh) : ");
    while(scanf("%f", &pemakaianbulanlalu)==0){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan pemakaian bulan sebelumnya (kWh) : ");
        while(pemakaianbulanlalu=getchar() != '\n');
    }

    printf("\n\tMasukkan pemakaian bulan ini (kWh) :");
    while(scanf("%f", &pemakaianbulanini)==0 || pemakaianbulanini<pemakaianbulanlalu){
        printf("\n\tInputan anda salah, silahkan ulangi");
        printf("\n\tPemakaian bulan ini < pemakaian bulan lalu (kWh)");
        printf("\n\t================================================================");
        printf("\n\tMasukkan pemakaian bulan ini (kWh) :");
        while(pemakaianbulanini=getchar() != '\n');
    }

    printf("\n\tJika anda memilih di atas 200 kVA");
    printf("\n\tSilahkan masukkan faktor perbandingan harga WBP dan LWBP");
    printf("\n\tNilai perbandingannya 1.4 s/d 2");
    printf("\n\tJika tidak, silahkan masukkan 0");
    printf("\n\tJika iya, silahkan masukkan 14 s/d 20");
    printf("\n\t================================================================");
    printf("\n\tMasukkan faktor perbandingan harga WBP dan LWBP : ");
    while(scanf("%f", &k)==0 || k<0 || k>20){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan faktor perbandingan harga WBP dan LWBP : ");
        while(k=getchar() != '\n');
    }

    printf("\n\tJika anda memilih di atas 200 kVA");
    printf("\n\tMasukkan berapa jam bisnis anda beroperasi dalam WBP");
    printf("\n\tWBP = Waktu Beban Puncak (18.00 s.d. 22.00)");
    printf("\n\tJika tidak, silahkan masukkan 0");
    printf("\n\t================================================================");
    printf("\n\tMasukkan berapa jam bisnis anda beroperasi dalam WBP : ");
    while(scanf("%d", &wbp)==0 || wbp<0 || wbp>4){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan berapa jam bisnis anda beroperasi dalam WBP : ");
        while(wbp=getchar() != '\n');
    }

    printf("\n\tJika anda memilih di atas 200 kVA");
    printf("\n\tMasukkan berapa jam bisnis anda beroperasi dalam LWBP");
    printf("\n\tLWBP = Luar Waktu Beban Puncak (22.00 s.d. 18.00)");
    printf("\n\tJika tidak, silahkan masukkan 0");
    printf("\n\t================================================================");
    printf("\n\tMasukkan berapa jam bisnis anda beroperasi dalam LWBP : ");
    while(scanf("%d", &lwbp)==0 || lwbp<0 || lwbp>20){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan berapa jam bisnis anda beroperasi dalam LWBP : ");
        while(lwbp=getchar() != '\n');
    }

    printf("\n\tJika anda memilih di atas 200 kVA");
    printf("\n\tSilahkan isi rasio CT yang digunakan");
    printf("\n\tSilahkan hanya memasukkan besar arus listriknya saja");
    printf("\n\tJika tidak, silahkan masukkan 0");
    printf("\n\t================================================================");
    printf("\n\tMasukkan besar arus listrik (ampere) :");
    while(scanf("%f", &current_transformer)==0){
        printf("\n\tInputan anda salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan pemakaian bulan ini (kWh) :");
        while(current_transformer=getchar() != '\n');
    }

    printf("\n\tJika anda memilih di atas 200 kVA");
    printf("\n\tSilahkan isi Total Daya Reaktif(kVArh)");
    printf("\n\tSilahkan hanya memasukkan faktor dayanya saja");
    printf("\n\tJika tidak atau >= 0.85, silahkan masukkan 0");
    printf("\n\tJika < 0.85, silahkan masukkan 1");
    printf("\n\t================================================================");
    printf("\n\tMasukkan pilihan :");
    while(scanf("%f", &pilih_kVArh)==0){
        printf("\n\tInputan anda salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan pilihan :");
        while(pilih_kVArh=getchar() != '\n');
    }

    rumus_current_transformer = current_transformer / 5;
    pemakaian1 = pemakaianbulanini - pemakaianbulanlalu;
    pemakaian2 = (pemakaianbulanini - pemakaianbulanlalu) * rumus_current_transformer;
    rumus_wbp = (pemakaian2 * wbp) / 12 * k/10 * beban_wbp;
    rumus_lwbp = (pemakaian2 * lwbp) /12 * beban_lwbp;

    if(pilih_kVArh==1){
        rumus_kVArh = kVArh * pemakaian2;
    }else if(pilih_kVArh==0){
        rumus_kVArh = 0;
    }

    close();

    printf("\n\t================================================================");
    printf("\n\t|               Silahkan Masukkan Tanggal Tagihan              |");
    printf("\n\t================================================================");
    printf("\n\tMasukkan tanggal tagihan : ");
    while(scanf("%d", &tanggal)==0 || tanggal<1 || tanggal >31){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan tanggal tagihan : ");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\tMasukkan bulan tagihan : ");
    while(scanf("%d", &bulan)==0 || bulan < 1 || bulan > 12){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan bulan tagihan : ");
        while( bulan=getchar() != '\n');
    }
    printf("\n\tMasukkan tahun tagihan : ");
    while(scanf("%d", &tahun)==0){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan tahun tagihan : ");
        while( tahun = getchar()!= '\n');
    }

    float rumus_rekening_total;
    float rumus_rekening;
    float rumus_denda;
    float ppj;

    // 6600 VA - 200.000 VA
    if (pilih_dayalistrik==1 && tanggal <= 20 && bulan == tm.tm_mon + 1 && tahun == tm.tm_year + 1900){ // Tidak Terkena Denda
        if (pemakaian1<=264){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1444.70);
        }else{
            rumus_rekening = 1699.53*pemakaian1;
        }
        rumus_denda = 0;
        ppj = 0;
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }else if(pilih_dayalistrik==1 && dayalistrik_2[(int)pilih_dayalistrik-1]==6600 && tanggal > 20 && tanggal <=31 && bulan == tm.tm_mon + 1 && tahun == tm.tm_year + 1900){ // Terkena Denda Biaya Keterlambatan 1, di tahun yang sama
        if (pemakaian1<=264){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1699.53);
        }else{
            rumus_rekening = 1699.53*pemakaian1;
        }
        if (rumus_rekening > 2500000){
            rumus_denda = 0.3 * rumus_rekening;
        }else if (rumus_rekening <= 2500000){
            rumus_denda = 75000;
        }
        ppj = 0;
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }else if(pilih_dayalistrik==1 && dayalistrik_2[(int)pilih_dayalistrik-1]==6600 &&  bulan == tm.tm_mon  && tahun == tm.tm_year + 1900){ // Terkena Denda Biaya Keterlambatan 2, di tahun yang sama
        if (pemakaian1<=264){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1699.53);
        }else{
            rumus_rekening = 1699.53*pemakaian1;
        }
        if (rumus_rekening > 2500000){
            rumus_denda = 0.3 * rumus_rekening;
        }else if (rumus_rekening <= 2500000){
            rumus_denda = 75000*2;
        }
         ppj = 0;
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }else if(pilih_dayalistrik==1 && dayalistrik_2[(int)pilih_dayalistrik-1]==6600 &&  bulan == tm.tm_mon -1 && tahun == tm.tm_year + 1900){ // Terkena Denda Biaya Keterlambatan 3, di tahun yang sama
        if (pemakaian1<=264){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1699.53);
        }else{
            rumus_rekening = 1699.53*pemakaian1;
        }
        if (rumus_rekening > 2500000){
            rumus_denda = 0.3 * rumus_rekening;
        }else if (rumus_rekening <= 2500000){
            rumus_denda = 75000*3;
        }
         ppj = 0;
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }else if(pilih_dayalistrik==1 && dayalistrik_2[(int)pilih_dayalistrik-1]==6600 &&  bulan == tm.tm_mon  && tahun == tm.tm_year + 1899){  // Terkena Denda Biaya Keterlambatan 2, di tahun yang beda
        if (pemakaian1<=264){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1699.53);
        }else{
            rumus_rekening = 1699.53*pemakaian1;
        }
        if (rumus_rekening > 2500000){
            rumus_denda = 0.3 * rumus_rekening;
        }else if (rumus_rekening <= 2500000){
            rumus_denda = 75000*2;
        }
         ppj = 0;
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }else if(pilih_dayalistrik==1 && dayalistrik_2[(int)pilih_dayalistrik-1]==6600 &&  bulan == tm.tm_mon -1 && tahun == tm.tm_year + 1899){ // Terkena Denda Biaya Keterlambatan 3, di tahun yang beda
        if (pemakaian1<=264){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (1699.53);
        }else{
            rumus_rekening = 1699.53*pemakaian1;
        }
        if (rumus_rekening > 2500000){
            rumus_denda = 0.3 * rumus_rekening;
        }else if (rumus_rekening <= 2500000){
            rumus_denda = 75000*3;
        }
         ppj = 0;
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }
    // di atas 200.000 VA
    else if (pilih_dayalistrik==2 && tanggal <= 20 && bulan == tm.tm_mon + 1 && tahun == tm.tm_year + 1900){ // Tidak Terkena Denda
        rumus_denda = 0;
        rumus_rekening = (rumus_lwbp + rumus_wbp) + ((rumus_lwbp + rumus_wbp) * 0.03) + (rumus_kVArh) ;
        ppj = (rumus_lwbp + rumus_wbp) * 0.03;
        if (pemakaian2 <= 8000){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (lwbp);
        }
        rumus_rekening_total = rumus_rekening  + rumus_denda;
    }else if(pilih_dayalistrik==2 && dayalistrik_2[(int)pilih_dayalistrik-1]==200000 && tanggal > 20 && tanggal <=31 && bulan == tm.tm_mon + 1 && tahun == tm.tm_year + 1900){ // Terkena Denda Biaya Keterlambatan 1, di tahun yang sama
        rumus_rekening = (rumus_lwbp + rumus_wbp) + ((rumus_lwbp + rumus_wbp) * 0.03) + (rumus_kVArh);
        ppj = (rumus_lwbp + rumus_wbp) * 0.03;
        if (pemakaian2 <= 8000){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (lwbp);
        }
        if (rumus_rekening > 3333334){
            rumus_denda = 0.3 * rumus_rekening;
        }else if (rumus_rekening <= 3333334){
            rumus_denda = 100000;
        }
        rumus_rekening_total = rumus_rekening  + rumus_denda;
    }else if(pilih_dayalistrik==2 && dayalistrik_2[(int)pilih_dayalistrik-1]==200000 &&  bulan == tm.tm_mon  && tahun == tm.tm_year + 1900){ // Terkena Denda Biaya Keterlambatan 2, di tahun yang sama
        rumus_rekening = (rumus_lwbp + rumus_wbp) + ((rumus_lwbp + rumus_wbp) * 0.03) + (rumus_kVArh);
        ppj = (rumus_lwbp + rumus_wbp) * 0.03;
        if (pemakaian2 <= 8000){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (lwbp);
        }
        if (rumus_rekening > 3333334){
            rumus_denda = 0.3 * rumus_rekening * 2;
        }else if (rumus_rekening <= 3333334){
            rumus_denda = 100000*2;
        }
        rumus_rekening_total = rumus_rekening  + rumus_denda;
    }else if(pilih_dayalistrik==2 && dayalistrik_2[(int)pilih_dayalistrik-1]==200000 &&  bulan == tm.tm_mon -1 && tahun == tm.tm_year + 1900){ // Terkena Denda Biaya Keterlambatan 3, di tahun yang sama
        rumus_rekening = (rumus_lwbp + rumus_wbp) + ((rumus_lwbp + rumus_wbp) * 0.03) + (rumus_kVArh);
        ppj = (rumus_lwbp + rumus_wbp) * 0.03;
        if (pemakaian2 <= 8000){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (lwbp);
        }
        if (rumus_rekening > 3333334){
            rumus_denda = 0.3 * rumus_rekening * 3;
        }else if (rumus_rekening <= 3333334){
            rumus_denda = 100000*3;
        }
        rumus_rekening_total = rumus_rekening  + rumus_denda;
    }else if(pilih_dayalistrik==2 && dayalistrik_2[(int)pilih_dayalistrik-1]==200000 &&  bulan == tm.tm_mon  && tahun == tm.tm_year + 1899){  // Terkena Denda Biaya Keterlambatan 2, di tahun yang beda
        rumus_rekening = (rumus_lwbp + rumus_wbp) + ((rumus_lwbp + rumus_wbp) * 0.03) + (rumus_kVArh);
        ppj = (rumus_lwbp + rumus_wbp) * 0.03;
        if (pemakaian2 <= 8000){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (lwbp);
        }
        if (rumus_rekening > 3333334){
            rumus_denda = 0.3 * rumus_rekening * 2;
        }else if (rumus_rekening <= 3333334){
            rumus_denda = 100000*2;
        }
        rumus_rekening_total = rumus_rekening  + rumus_denda;
    }else if(pilih_dayalistrik==2 && dayalistrik_2[(int)pilih_dayalistrik-1]==200000 &&  bulan == tm.tm_mon -1 && tahun == tm.tm_year + 1899){ // Terkena Denda Biaya Keterlambatan 3, di tahun yang beda
        rumus_rekening = (rumus_lwbp + rumus_wbp) + ((rumus_lwbp + rumus_wbp) * 0.03) + (rumus_kVArh);
        ppj = (rumus_lwbp + rumus_wbp) * 0.03;
        if (pemakaian2 <= 8000){
            rumus_rekening = 40 * (dayalistrik_2[(int)pilih_dayalistrik-1]*0.001) * (lwbp);
        }
        if (rumus_rekening > 3333334){
            rumus_denda = 0.3 * rumus_rekening * 3;
        }else if (rumus_rekening <= 3333334){
            rumus_denda = 100000*3;
        }
        rumus_rekening_total = rumus_rekening  + rumus_denda;
    }
    // Penerangan Jalan Umum
    if (pilih_dayalistrik==3){ // Tidak Terkena Denda
        rumus_rekening = 1699.53*pemakaian1;
        rumus_denda = 0;
        ppj = 0;
        rumus_rekening_total = rumus_rekening + rumus_denda;
    }

    close();

    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t||                        Perusahaan Listrik Negara                        ||");
    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t||                        Informasi Tagihan Listrik                        ||");
    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\tGolongan Fasilitas Publik : %s", golongan[(int)pilih_dayalistrik-1]);
    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\tNama                      : %s", nama);
    printf("\n\tNO REK ID Pelanggan       : %s", rekening);
    printf("\n\tAlamat                    : %s", alamat);
    printf("\n\tTanggal Tagihan Diberikan : %d-%d-%d", tanggal, bulan, tahun);
    printf("\n\tTanggal pembayaran        : %d-%02d-%02d %02d:%02d:%02d", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
    printf("\n\tSumber Daya Listrik Digunakan           = %s", dayalistrik[(int)pilih_dayalistrik-1]);
    if(pilih_dayalistrik==1){
        printf("\n\tPemakaian anda bulan ini                = %.2f (kWh)", pemakaian1);
    }else if(pilih_dayalistrik==2){
        printf("\n\tPemakaian anda bulan ini                = %.2f (kWh)", pemakaian2);
    }else if(pilih_dayalistrik==3){
        printf("\n\tPemakaian anda bulan ini                = %.2f (kWh)", pemakaian1);
    }
    printf("\n\tBiaya pemakaian daya reaktif (kVArh)    = Rp.%.1f ", rumus_kVArh);
    printf("\n\tFaktor perbandingan harga WBP dan LWBP  = Rp.%.2f ", k/10);
    printf("\n\tBiaya Beban WBP                         = Rp.%.2f ", rumus_wbp);
    printf("\n\tBiaya Beban LWBP                        = Rp.%.2f ", rumus_lwbp);
    printf("\n\tBiaya denda                             = Rp.%.2f", rumus_denda);
    printf("\n\tBiaya Pajak Penerangan Jalan            = Rp.%.2f", ppj);
    printf("\n\tBiaya pemakaian listrik(kWh)            = Rp.%.2f", rumus_rekening);
    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\tjumlah tagihan anda                     = Rp.%.2f", rumus_rekening_total);
}

void pilih_golongan_prabayar(){
    int golongan;
    printf("\n\t================================================================");
    printf("\n\t|                  Silahkan Pilih Golongan Anda                |");
    printf("\n\t================================================================");
    printf("\n\t| (1) Rumah Tangga                                             |");
    printf("\n\t| (2) Bisnis                                                   |");
    printf("\n\t| (3) Industri                                                 |");
    printf("\n\t| (4) Fasilitas publik                                         |");
    printf("\n\t================================================================");
    printf("\n\t| Masukkan pilihan : ");
    while(scanf("%d", &golongan)==0 || golongan<1 || golongan >4){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\t| Masukkan pilihan : ");
        while( golongan = getchar() != '\n');
    }

    close();

    if(golongan==1){
        rumah_tangga_prabayar();
    }else if(golongan==2){
        bisnis_prabayar();
    }else if(golongan==3){
        industri_prabayar();
    }else if(golongan==4){
        fasilitas_publik_prabayar();
    }
}

void rumah_tangga_prabayar(){
    char dayalistrik[5] [32] = {"900 VA", "1.300 VA", "2.200 VA", "3.500 VA s.d. 5.500 VA", "6.600 VA ke atas"};
    char golongan[5] [10] = {"R-1/TR", "R-1/TR", "R-1/TR", "R-2/TR", "R-3/TR"};
    float dayalistrik_2[5] = {900, 1300, 2200, 5500, 6600};
    float jumlah_bayar;
    float ppj;
    char rekening[20];
    char nama[128];
    char alamat[128];
    float pilih_dayalistrik;
    int token;

    // Membuat time realtime
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    printf("\n\t================================================================");
    printf("\n\t|                  Silahkan Pilih Daya Listrik                 |");
    printf("\n\t================================================================");
    printf("\n\t| (1) 900 VA                                                   |");
    printf("\n\t| (2) 1.300 VA                                                 |");
    printf("\n\t| (3) 2.200 VA                                                 |");
    printf("\n\t| (4) 3.500 VA s.d. 5.500 VA                                   |");
    printf("\n\t| (5) 6.600 VA ke atas                                         |");
    printf("\n\t================================================================");
    printf("\n\tMasukkan pilihan : ");
    while(scanf("%f", &pilih_dayalistrik)==0 || pilih_dayalistrik<1 || pilih_dayalistrik >5){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan pilihan : ");
        while(pilih_dayalistrik=getchar() != '\n');
    }

    close();

    printf("\n\t================================================================");
    printf("\n\t|                     Golongan Rumah Tangga                    |");
    printf("\n\t================================================================");
    printf("\n\tMasukkan nama anda : ");
    fgets(nama, sizeof(nama), stdin);
    //scanf("%[^\n]s", &nama);

    printf("\n\tMasukkan NO Meteran : ");
    //scanf("%[^\n]s", &rekening);
    fgets(rekening, sizeof(rekening), stdin);

    printf("\n\tMasukkan alamat anda : ");
    fgets(alamat, sizeof(alamat), stdin);
    //scanf("%[^\n]s", &alamat);

    printf("\n\tMasukkan jumlah pembayaran (Rp): ");
    while(scanf("%f", &jumlah_bayar)==0){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan pemakaian bulan sebelumnya (kWh) : ");
        while(jumlah_bayar=getchar() != '\n');
    }

    ppj = 0.03 * jumlah_bayar;

    close();

    float rumus_rekening_total;
    // 900 VA
    if(pilih_dayalistrik==1 && dayalistrik_2[(int)pilih_dayalistrik-1]==900){ // Terkena Denda Biaya Keterlambatan 1, di tahun yang sama
        rumus_rekening_total = (jumlah_bayar - ppj) / 1352.00;
    }
    // 1.300 VA
    else if(pilih_dayalistrik==2 && dayalistrik_2[(int)pilih_dayalistrik-1]==1300){
        rumus_rekening_total = (jumlah_bayar - ppj) / 1444.70;
    }
    // 2.200 VA
    else if(pilih_dayalistrik==3 && dayalistrik_2[(int)pilih_dayalistrik-1]==2200){
        rumus_rekening_total = (jumlah_bayar - ppj) / 1444.70;
    }
    // 3.500 VA - 5.500 VA
    else if(pilih_dayalistrik==4 && dayalistrik_2[(int)pilih_dayalistrik-1]==5500){
        rumus_rekening_total = (jumlah_bayar - ppj) / 1699.53;
    }
    // 6600 Ke Atas
    else if(pilih_dayalistrik==5 && dayalistrik_2[(int)pilih_dayalistrik-1]==6600){
        rumus_rekening_total = (jumlah_bayar - ppj) / 1699.53;
    }

    //membangkitkan bilangan random
    srand(time(NULL)); 
    for(int i=0; i<12; i++){ //looping sebanyak 12 kali
        token = rand() % 12 + 1; // *Scaling
    }


    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t||                        Perusahaan Listrik Negara                        ||");
    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t||                    Informasi Tagihan Listrik Prabayar                   ||");
    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\tGolongan Rumah Tangga : %s", golongan[(int)pilih_dayalistrik-1]);
    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\tNama                      : %s", nama);
    printf("\n\tNO Meteran                : %s", rekening);
    printf("\n\tAlamat                    : %s", alamat);
    printf("\n\tNO Token                  : ");
    //membangkitkan bilangan random untuk token listrik
    srand(time(NULL)); 
    for(int i=0; i<12; i++){ //looping sebanyak 12 kali
        token = rand() % 9 + 1; // *Scaling
        printf("%d", token);
    }
    printf("\n\tTanggal Pembelian         : %d-%02d-%02d %02d:%02d:%02d", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
    printf("\n\tSumber Daya Listrik Digunakan  = %s", dayalistrik[(int)pilih_dayalistrik-1]);
    printf("\n\tJumlah Bayar Anda              = Rp.%.2f", jumlah_bayar);
    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\tjumlah Daya Yang Didapat (kWh) = %.2f", rumus_rekening_total);
}

void bisnis_prabayar(){
    char dayalistrik[2] [32] = {"6.600 VA s.d. 200 kVA", "Di atas 200 kVA"};
    char golongan[2] [10] = {"B-2/TR", "B-3/TM"};
    float dayalistrik_2[5] = {6600, 200000};
    float jumlah_bayar;
    float ppj;
    char rekening[20];
    char nama[128];
    char alamat[128];
    int token;
    float pilih_dayalistrik;

    // Membuat time realtime
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    printf("\n\t================================================================");
    printf("\n\t|                  Silahkan Pilih Daya Listrik                 |");
    printf("\n\t================================================================");
    printf("\n\t| (1) 6.600 VA - 200 kVA                                       |");
    printf("\n\t| (2) Di atas 200 kVA                                          |");
    printf("\n\t================================================================");
    printf("\n\tMasukkan pilihan : ");
    while(scanf("%f", &pilih_dayalistrik)==0 || pilih_dayalistrik<1 || pilih_dayalistrik >2){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan pilihan : ");
        while(pilih_dayalistrik=getchar() != '\n');
    }

    close();

    printf("\n\t================================================================");
    printf("\n\t|                        Golongan Bisnis                       |");
    printf("\n\t================================================================");
    printf("\n\tMasukkan nama anda : ");
    fgets(nama, sizeof(nama), stdin);
    // scanf("%[^\n]s", &nama);

    printf("\n\tMasukkan NO REK ID Pelanggan : ");
    //scanf("%[^\n]s", &rekening);
    fgets(rekening, sizeof(rekening), stdin);

    printf("\n\tMasukkan alamat anda : ");
    fgets(alamat, sizeof(alamat), stdin);
    // scanf("%[^\n]s", &alamat);

    printf("\n\tMasukkan Jumlah Bayar (Rp) : ");
    while(scanf("%f", &jumlah_bayar)==0){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan pemakaian bulan sebelumnya (kWh) : ");
        while(jumlah_bayar=getchar() != '\n');
    }

    ppj = 0.03 * jumlah_bayar;

    close();

    float rumus_rekening_total;

    // 6600 VA - 200.000 VA
    if(pilih_dayalistrik==1 && dayalistrik_2[(int)pilih_dayalistrik-1]==6600){
        rumus_rekening_total = (jumlah_bayar - ppj) / 1444.70;
    }
    // di atas 200.000 VA
    else if(pilih_dayalistrik==2 && dayalistrik_2[(int)pilih_dayalistrik-1]==200000){
        rumus_rekening_total = (jumlah_bayar - ppj) / 1035.78;
    }

    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t||                        Perusahaan Listrik Negara                        ||");
    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t||                    Informasi Tagihan Listrik Prabayar                   ||");
    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\tGolongan Bisnis : %s", golongan[(int)pilih_dayalistrik-1]);
    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\tNama                      : %s", nama);
    printf("\n\tNO Meteran                : %s", rekening);
    printf("\n\tAlamat                    : %s", alamat);
    printf("\n\tNO Token                  : ");
    //membangkitkan bilangan random untuk token listrik
    srand(time(NULL)); 
    for(int i=0; i<12; i++){ //looping sebanyak 12 kali
        token = rand() % 9 + 1; // *Scaling
        printf("%d", token);
    }
    printf("\n\tTanggal Pembelian         : %d-%02d-%02d %02d:%02d:%02d", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
    printf("\n\tSumber Daya Listrik Digunakan   = %s", dayalistrik[(int)pilih_dayalistrik-1]);
    printf("\n\tJumlah Bayar Anda               = Rp.%.2f", jumlah_bayar);
    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\tjumlah Daya Yang Didapat (kWh)  = %.2f", rumus_rekening_total);
}

void industri_prabayar(){
    char dayalistrik[2] [32] = {"Di atas 200 kVA", "30.000 kVA ke atas"};
    char golongan[2] [10] = {"I-3/TM", "I-4/TT"};
    float dayalistrik_2[5] = {200000, 30000000};
    float jumlah_bayar;
    float ppj;
    char rekening[20];
    char nama[128];
    char alamat[128];
    float pilih_dayalistrik;
    int token;

    // Membuat time realtime
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    printf("\n\t================================================================");
    printf("\n\t|                  Silahkan Pilih Daya Listrik                 |");
    printf("\n\t================================================================");
    printf("\n\t| (1) Di atas 200 kVA                                          |");
    printf("\n\t| (2) 30.000 kVA ke atas                                       |");
    printf("\n\t================================================================");
    printf("\n\tMasukkan pilihan : ");
    while(scanf("%f", &pilih_dayalistrik)==0 || pilih_dayalistrik<1 || pilih_dayalistrik >2){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan pilihan : ");
        while(pilih_dayalistrik=getchar() != '\n');
    }

    close();

    printf("\n\t================================================================");
    printf("\n\t|                       Golongan Industri                      |");
    printf("\n\t================================================================");
    printf("\n\tMasukkan nama anda : ");
    fgets(nama, sizeof(nama), stdin);
    // scanf("%[^\n]s", &nama);

    printf("\n\tMasukkan NO REK ID Pelanggan : ");
    //scanf("%[^\n]s", &rekening);
    fgets(rekening, sizeof(rekening), stdin);

    printf("\n\tMasukkan alamat anda : ");
    fgets(alamat, sizeof(alamat), stdin);
    // scanf("%[^\n]s", &alamat);

    printf("\n\tMasukkan Jumlah Pembayaran (Rp) : ");
    while(scanf("%f", &jumlah_bayar)==0){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan pemakaian bulan sebelumnya (kWh) : ");
        while(jumlah_bayar=getchar() != '\n');
    }
    close();

    ppj = jumlah_bayar * 0.03;

    float rumus_rekening_total;

    // diatas 200 kVA
    if(pilih_dayalistrik==1 && dayalistrik_2[(int)pilih_dayalistrik-1]==200000){
        rumus_rekening_total = (jumlah_bayar - ppj) / 1035.78;
    }
    // 30.000 kVA ke atas
    else if(pilih_dayalistrik==2 && dayalistrik_2[(int)pilih_dayalistrik-1]==30000000){
        rumus_rekening_total = (jumlah_bayar - ppj) / 996.74;
    }

    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t||                        Perusahaan Listrik Negara                        ||");
    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t||                     Informasi Tagihan Listrik Prabayar                  ||");
    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\tGolongan Industri : %s", golongan[(int)pilih_dayalistrik-1]);
    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\tNama                      : %s", nama);
    printf("\n\tNO Meteran                : %s", rekening);
    printf("\n\tAlamat                    : %s", alamat);
    printf("\n\tNO Token                  : ");
    //membangkitkan bilangan random untuk token listrik
    srand(time(NULL)); 
    for(int i=0; i<12; i++){ //looping sebanyak 12 kali
        token = rand() % 9 + 1; // *Scaling
        printf("%d", token);
    }
    printf("\n\tTanggal Pembelian         : %d-%02d-%02d %02d:%02d:%02d", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
    printf("\n\tSumber Daya Listrik Digunakan   = %s", dayalistrik[(int)pilih_dayalistrik-1]);
    printf("\n\tJumlah Bayar Anda               = Rp.%.2f", jumlah_bayar);
    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\tjumlah Daya Yang Didapat (kWh)  = %.2f", rumus_rekening_total);
}

void fasilitas_publik_prabayar(){
    char dayalistrik[3] [32] = {"6.600 VA s.d. 200 kVA", "Di atas 200 kVA", "Penerangan Jalan Umum"};
    char golongan[3] [10] = {"P-1/TR", "P-2/TM", "P-3/TR"};
    float dayalistrik_2[5] = {6600, 200000, 0};
    float jumlah_bayar;
    float ppj;
    char rekening[20];
    char nama[128];
    char alamat[128];
    float pilih_dayalistrik;
    int token;

    // Membuat time realtime
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    printf("\n\t================================================================");
    printf("\n\t|                  Silahkan Pilih Daya Listrik                 |");
    printf("\n\t================================================================");
    printf("\n\t| (1) 6.600 VA - 200 kVA (Kantor Pemerintah Tegangan Rendah)   |");
    printf("\n\t| (2) Di atas 200 kVA (Kantor Pemerintah Tegangan Menegah)     |");
    printf("\n\t| (3) Penerangan Jalan Umum                                    |");
    printf("\n\t================================================================");
    printf("\n\tMasukkan pilihan : ");
    while(scanf("%f", &pilih_dayalistrik)==0 || pilih_dayalistrik<1 || pilih_dayalistrik >3){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan pilihan : ");
        while(pilih_dayalistrik=getchar() != '\n');
    }

    close();

    printf("\n\t================================================================");
    printf("\n\t|                   Golongan Fasilitas Publik                  |");
    printf("\n\t================================================================");
    printf("\n\tMasukkan nama anda : ");
    fgets(nama, sizeof(nama), stdin);
    // scanf("%[^\n]s", &nama);

    printf("\n\tMasukkan NO REK ID Pelanggan : ");
    //scanf("%[^\n]s", &rekening);
    fgets(rekening, sizeof(rekening), stdin);

    printf("\n\tMasukkan alamat anda : ");
    fgets(alamat, sizeof(alamat), stdin);
    // scanf("%[^\n]s", &alamat);

    printf("\n\tMasukkan Jumlah Pembayaran (Rp) : ");
    while(scanf("%f", &jumlah_bayar)==0){
        printf("\n\tKarakter yang anda inputkan salah, silahkan ulangi");
        printf("\n\tInputan harus berupa angka");
        printf("\n\t================================================================");
        printf("\n\tMasukkan pemakaian bulan sebelumnya (kWh) : ");
        while(jumlah_bayar=getchar() != '\n');
    }

    ppj = 0.03 * jumlah_bayar;

    float rumus_rekening_total;
    
    close();

    // 6600 VA - 200.000 VA
    if(pilih_dayalistrik==1 && dayalistrik_2[(int)pilih_dayalistrik-1]==6600){
        rumus_rekening_total = (jumlah_bayar - ppj) / 1699.53;
    }
    // di atas 200.000 VA
    else if(pilih_dayalistrik==2 && dayalistrik_2[(int)pilih_dayalistrik-1]==200000){
         rumus_rekening_total = (jumlah_bayar - ppj) / 1415.01;
    }
    // Penerangan Jalan Umum
    if (pilih_dayalistrik==3){
        rumus_rekening_total = (jumlah_bayar - ppj) / 1699.53;
    }

    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t||                        Perusahaan Listrik Negara                        ||");
    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t||                     Informasi Tagihan Listrik Prabayar                  ||");
    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\tGolongan Fasilitas Publik : %s", golongan[(int)pilih_dayalistrik-1]);
    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\tNama                      : %s", nama);
    printf("\n\tNO Meteran                : %s", rekening);
    printf("\n\tAlamat                    : %s", alamat);
    printf("\n\tNO Token                  : ");
    //membangkitkan bilangan random untuk token listrik
    srand(time(NULL)); 
    for(int i=0; i<12; i++){ //looping sebanyak 12 kali
        token = rand() % 9 + 1; // *Scaling
        printf("%d", token);
    }
    printf("\n\tTanggal Pembelian         : %d-%02d-%02d %02d:%02d:%02d", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
    printf("\n\tSumber Daya Listrik Digunakan   = %s", dayalistrik[(int)pilih_dayalistrik-1]);
    printf("\n\tJumlah Bayar Anda               = Rp.%.2f", jumlah_bayar);
    printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\tjumlah Daya Yang Didapat (kWh)  = %.2f", rumus_rekening_total);
}

int main(){
    logopln();
    close();
    //pilih_admin_login();
    pilih_fitur();
}

void logopln(){
    char buff[255];
    FILE *fptr;

    // membuka file
    if ((fptr = fopen("logopln.txt","r")) == NULL){
        printf("Error: File tidak ada!");
        // Tutup program karena file gak ada.
        exit(1);
    }

    // baca isi file dengan gets lalu simpan ke buff
    while(fgets(buff, sizeof(buff), fptr)){
        printf("%s", buff);
    }

    // tutup file
    fclose(fptr);
}
