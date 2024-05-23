//Akbar Zaidan Rohman

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <ctype.h>

int operasi;
int x, y;

void title(){
	puts(" _   _");
	puts("| | / /    _     _      _     _   _  _	       _   _______  ___   _____");
	puts("| |/ /    / \\   | |    | | _ | | | || |       /	\\ |__   __|/ _ \\ |  _  \\");
	puts("|   (    / o \\  | |    | |/ /| | | || |      / o \\   | |  | | | ||  -  /");
	puts("| |\\ \\  /  _  \\ | |___ |   ( | |_| || |___  /  _  \\  | |  | |_| || |\\ \\");
	puts("|_| \\_\\/__/ \\__\\|_____||_|\\_\\|_____||_____|/__/ \\__\\ |_|   \\___/ |_| \\_\\ by : Akbar");
	puts("------------------------------------------------------------------------------------");
	puts("");
}

void opening(){
	title();
	puts("Selamat datang di Kalkulator!");
	puts("Disini kalian bisa Menambah, Mengurangi, Mengalikan, ");
	puts("Membagikan, Mencari rata-rata, Mencari sisa bagi, Memangkatkan,");
	puts("Mengkalikan matrix, Mencari Luas dan Keliling Bangun Datar.");
	puts("");
	
	printf("Tekan enter untuk melanjutkan...");
	getch();
}

void menu(){
	system("cls");
	title();
	puts("Pilih salah satu operasi berikut :");
	puts("1. Menambahkan");
	puts("2. Mengurangi");
	puts("3. Mengkalikan");
	puts("4. Membagikan");
	puts("5. Mencari Rata-rata");
	puts("6. Mencari sisa bagi");
	puts("7. Pangkat bilangan");
	puts("8. Mengkalikan matrix");
	puts("9. Mencari Luas Bangun datar");
	puts("10. Mencari Keliling Bangun datar");
	puts("0. Kembali");
	puts("----------------------------------");
	printf(">> ");
	scanf("%d", &operasi);
	getchar();
	
	system("cls");
}

void caseSatu(){
	puts("Menambahkan");
	puts("");
	puts("Contoh -> 11 + 22 + 33 = 66 (ada 3 variabel)");
	puts("Contoh -> 5 + 7 + 13 + 2 = 27 (ada 4 variabel)");
	int varr;
	do{
		printf("Masukkan berapa variabel yang ingin ditambahkan : ");
		scanf("%d", &varr);
		if(varr <= 1){
			printf("Variabel harus berupa angka dan lebih dari 1.\n");
		}
		while ((x = getchar()) != '\n' && x != EOF);
	} while(varr <= 1);
	
	puts("----------------------------------------------------");
	double total = 0;
	double value[10000];
	
	for(int i = 0; i < varr; i++) {
	    double z;
	    do {
	        printf("Masukkan variabel ke-%d : ", i + 1);
	        z = scanf("%lf", &value[i]);
	        if (z != 1) {
	            printf("Variabel harus berupa angka bilangan bulat atau desimal.\n");
	            while (fgetc(stdin) != '\n');
	        }
	    } while (z != 1);
	}
	
	for(int i=0; i<varr; i++){
		total = total + value[i];
	}
	puts("");
	printf("Hasil Tambah Seluruh Variabel : %.2lf\n", total);
	puts("");
	
	printf("Tekan enter untuk melanjutkan...");
	getch();
	
	system("cls");
	return menu();
}

void caseDua(){
	puts("Mengurangi");
	puts("");
	puts("Contoh -> 10 - 1 - 2 = 7 (ada 3 variabel)");
	puts("Contoh -> 100 - 10 - 20 - 30 = 40 (ada 4 variabel)");
	int varr;
	do{
		printf("Masukkan berapa variabel yang ingin ditkurangi : ");
		scanf("%d", &varr);
		if(varr <= 1){
			printf("Variabel harus berupa angka dan lebih dari 1.\n");
		}
		while ((x = getchar()) != '\n' && x != EOF);
	} while(varr <= 1);
	
	puts("----------------------------------------------------");
	double total = 0;
	double value[10000];
	
	for(int i = 0; i < varr; i++) {
	    double z;
	    do {
	        printf("Masukkan variabel ke-%d : ", i + 1);
	        z = scanf("%lf", &value[i]);
	        if (z != 1) {
	            printf("Variabel harus berupa angka bilangan bulat atau desimal.\n");
	            while (fgetc(stdin) != '\n');
	        }
	    } while (z != 1);
	}
	
	for(int i=0; i<varr; i++){
		if (i == 0) {
    	total = value[i];
    	} else {
    	total -= value[i];
		}
	}
	puts("");
	printf("Hasil Kurang Seluruh Variabel : %.2lf\n", total);
	puts("");
	
	printf("Tekan enter untuk melanjutkan...");
	getch();
	
	system("cls");
	return menu();
}

void caseTiga(){
	puts("Mengalikan");
	puts("");
	puts("Contoh -> 1 x 2 x 3 = 6 (ada 3 variabel)");
	puts("Contoh -> 3 x 1 x 1 x 2 = 6 (ada 4 variabel)");
	int varr;
	do{
		printf("Masukkan berapa variabel yang ingin dikalikan : ");
		scanf("%d", &varr);
		if(varr <= 1){
			printf("Variabel harus berupa angka dan lebih dari 1.\n");
		}
		while ((x = getchar()) != '\n' && x != EOF);
	} while(varr <= 1);
	
	puts("----------------------------------------------------");
	double total = 0;
	double value[10000];
	
	for(int i = 0; i < varr; i++) {
	    double z;
	    do {
	        printf("Masukkan variabel ke-%d : ", i + 1);
	        z = scanf("%lf", &value[i]);
	        if (z != 1) {
	            printf("Variabel harus berupa angka bilangan bulat atau desimal.\n");
	            while (fgetc(stdin) != '\n');
	        }
	    } while (z != 1);
	}
	
	for(int i=0; i<varr; i++){
		if (i == 0) {
    	total = value[i];
    	} else {
    	total *= value[i];
		}
	}
	puts("");
	printf("Hasil Kali Seluruh Variabel : %.2lf\n", total);
	puts("");
	
	printf("Tekan enter untuk melanjutkan...");
	getch();
	
	system("cls");
	return menu();
}

void caseEmpat(){
	puts("Membagikan");
	puts("");
	puts("Contoh -> 10 : 2 : 5 = 1 (ada 3 variabel)");
	puts("Contoh -> 100 : 2 : 5 : 1 = 10 (ada 4 variabel)");
	int varr;
	do{
		printf("Masukkan berapa variabel yang ingin dibagikan : ");
		scanf("%d", &varr);
		if(varr <= 1){
			printf("Variabel harus berupa angka dan lebih dari 1.\n");
		}
		while ((x = getchar()) != '\n' && x != EOF);
	} while(varr <= 1);
	
	puts("----------------------------------------------------");
	double total = 0;
	double value[10000];
	
	for(int i = 0; i < varr; i++) {
	    double z;
	    do {
	        printf("Masukkan variabel ke-%d : ", i + 1);
	        z = scanf("%lf", &value[i]);
	        if (z != 1) {
	            printf("Variabel harus berupa angka bilangan bulat atau desimal.\n");
	            while (fgetc(stdin) != '\n');
	        }
	    } while (z != 1);
	}
	
	for(int i=0; i<varr; i++){
		if (i == 0) {
    	total = value[i];
    	} else {
    	total /= value[i];
		}
	}
	puts("");
	printf("Hasil Bagi Seluruh Variabel : %.2lf\n", total);
	puts("");
	
	printf("Tekan enter untuk melanjutkan...");
	getch();
	
	system("cls");
	return menu();
}

void caseLima(){
	puts("Mencari Rata-rata");
	puts("");
	puts("Contoh -> 1, 2, 3 (ada 3 variabel)");
	puts("Contoh -> 1, 2, 3, 4 (ada 4 variabel)");
	int varr;
	do{
		printf("Masukkan berapa variabel yang ingin dirata-ratakan : ");
		scanf("%d", &varr);
		if(varr <= 1){
			printf("Variabel harus berupa angka dan lebih dari 1.\n");
		}
		while ((x = getchar()) != '\n' && x != EOF);
	} while(varr <= 1);
	
	puts("----------------------------------------------------");
	double total = 0;
	double value[10000];
	
	for(int i = 0; i < varr; i++) {
	    double z;
	    do {
	        printf("Masukkan variabel ke-%d : ", i + 1);
	        z = scanf("%lf", &value[i]);
	        if (z != 1) {
	            printf("Variabel harus berupa angka bilangan bulat atau desimal.\n");
	            while (fgetc(stdin) != '\n');
	        }
	    } while (z != 1);
	}
	
	for(int i=0; i<varr; i++){
    	total = total + value[i];
	}
	
	double total1 = total/varr;
	puts("");
	
	printf("Hasil Rata-rata Seluruh Variabel : %.2lf\n", total1);
	puts("");
	
	printf("Tekan enter untuk melanjutkan...");
	getch();
	
	system("cls");
	return menu();
}

void caseEnam(){
	puts("Sisa bagi");
	puts("");
	puts("Contoh -> 10 % 3");
	puts("10 -> Variabel ke-1");
	puts("3  -> Variabel ke-2");
	puts("----------------------------------------------------");
	int a;
	printf("Masukkan Variabel ke-1 : ");
	scanf("%d", &a);
	int b;
	printf("Masukkan Variabel ke-2 : ");
	scanf("%d", &b);
	puts("");
	
	int c = a&b;
	
	printf("Hasil Sisa bagi %d dengan %d : %d\n", a, b, c);
	puts("");
	
	printf("Tekan enter untuk melanjutkan...");
	getch();
	
	system("cls");
	return menu();
}

void caseTujuh(){
	puts("Pangkat Bilangan");
	puts("");
	puts("Contoh -> 6^2 (6 Dipangkatkan 2)");
	puts("6 -> Variabel ke-1");
	puts("2 -> Variabel ke-2");
	puts("----------------------------------------------------");
	int a;
	printf("Masukkan Variabel ke-1 : ");
	scanf("%d", &a);
	int b;
	printf("Masukkan Variabel ke-2 : ");
	scanf("%d", &b);
	puts("");
	
	int c = pow(a,b);
	
	printf("Hasil %d dipangkatkan dengan %d : %d\n", a, b, c);
	puts("");
	
	printf("Tekan enter untuk melanjutkan...");
	getch();
	
	system("cls");
	return menu();
}

void caseDelapan(){
	puts("Mengkalikan 2 Matrix Persegi");
	puts("");
	puts("Contoh -> 2 3   -> Matrix 2x2 -> Input 2 pada Panjang Matrix Persegi");
	puts("          3 5   ");
	puts("");
	puts("          3 5 6 ");
	puts("Contoh -> 2 3 4 -> Matrix 3x3 -> Input 3 pada Panjang Matrix Persegi");
	puts("          2 3 7 ");
	puts("");
	puts("Contoh ""Masukkan Matrix Persegi"": 3 -> 1 2 3");
	puts("                                     4 5 6");
	puts("                                     7 8 9");
	puts("                                    (Enter)");
	puts("                                     1 2 3");
	puts("                                     4 5 6");
	puts("                                     7 8 9");
	int n;
	do{
		printf("Masukkan Panjang Matrix persegi (Contoh 2, 3, 4, atau seterusnya): ");
		scanf("%d", &n);
		if(n <= 1){
			printf("Variabel harus berupa angka dan lebih dari 1.\n");
		}
		while ((x = getchar()) != '\n' && x != EOF);
	} while(n <= 1);
	
	puts("-----------------------------------------------------------------------------");
	puts("Masukkan matrix :");
	long long int matrix1[n][n];
        for(int j = 0; j < n; j++){
            for (int k = 0; k < n; k++){
                scanf("%lld", &matrix1[j][k]);
            }
        }
        
        long long int matrix2[n][n];
        for(int j = 0; j < n; j++){
            for (int k = 0; k < n; k++){
                scanf("%lld", &matrix2[j][k]);
            }
        }

        long long int newMatrix1[n][n];
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                newMatrix1[j][k] = 0;
                for (int l = 0; l < n; l++) {
                    newMatrix1[j][k] += matrix1[j][l] * matrix2[l][k];
                }
            }
        }

	puts("");
	puts("Hasil Perkalian 2 Matrix Persegi :");
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                if(k < n-1){
                	printf("%lld ", newMatrix1[j][k]);
				}
				else{
					printf("%lld", newMatrix1[j][k]);
				}
            }
			printf("\n");
        }
	
	puts("");
	printf("Tekan enter untuk melanjutkan...");
	getch();
	
	system("cls");
	return menu();
}

void menu1(){
	system("cls");
	title();
	puts("Mencari Luas Bangun datar");
	puts("");
	puts("Pilih Bangun Datar :");
	puts("1. Persegi/Persegi Panjang");
	puts("2. Jajar Genjang");
	puts("3. Segitiga");
	puts("4. Lingkaran");
	puts("----------------------------------");
	printf(">> ");
	scanf("%d", &y);
	getchar();
	
	system("cls");
}

void caseSembilan(){
	system("cls");
	title();
	puts("Mencari Luas Bangun datar");
	puts("");
	puts("Pilih Bangun Datar :");
	puts("1. Persegi/Persegi Panjang");
	puts("2. Jajar Genjang");
	puts("3. Segitiga");
	puts("4. Lingkaran");
	puts("----------------------------------");
	printf(">> ");
	scanf("%d", &y);
	getchar();
	
	system("cls");
	switch(y){
		case 1 : {
			title();
			puts("Mencari Luas Persegi/Persegi Panjang");
			puts("");
			puts("          ___________ ");
			puts("         |           |");
			puts("Contoh : |           | Lebar");
			puts("         |___________|");
			puts("            Panjang");
			puts("");
			printf("Masukan Panjang Persegi : ");
			int p;
			scanf("%d", &p); getchar();
			printf("Masukan Lebar Persegi : ");
			int l;
			scanf("%d", &l);getchar();
			puts("----------------------------------");
			int luas;
			luas = p*l;
			printf("Luas Persegi : %d\n", luas);
			
			puts("");
			printf("Tekan enter untuk melanjutkan...");
			getch();
			
			system("cls");
			return menu();
			break;
		}
		case 2 : {
			title();
			puts("Mencari Luas Jajar Genjang");
			puts("");
			puts("             ___________ ");
			puts("           /           /");
			puts("Contoh :  /           /  Tinggi");
			puts("         /___________/");
			puts("              Alas");
			puts("");
			printf("Masukan Alas Jajar Genjang : ");
			int p;
			scanf("%d", &p); getchar();
			printf("Masukan Tinggi Jajar Genjang : ");
			int l;
			scanf("%d", &l); getchar();
			puts("----------------------------------");
			int luas;
			luas = p*l;
			printf("Luas Jajar Genjang : %d\n", luas);
			
			puts("");
			printf("Tekan enter untuk melanjutkan...");
			getch();
			
			system("cls");
			return menu();
			break;
		}
		case 3 : {
			title();
			puts("Mencari Luas Segitiga");
			puts("");
			puts("            /\\ ");
			puts("           /  \\         ");
			puts("Contoh :  /    \\  Tinggi");
			puts("         /______\\");
			puts("           Alas");
			puts("");
			printf("Masukan Alas Segitiga : ");
			int p;
			scanf("%d", &p); getchar();
			printf("Masukan Tinggi Segitiga : ");
			int l;
			scanf("%d", &l); getchar();
			puts("----------------------------------");
			int luas;
			luas = p*l/2;
			printf("Luas Segitiga : %d\n", luas);
			
			puts("");
			printf("Tekan enter untuk melanjutkan...");
			getch();
			
			system("cls");
			return menu();
			break;
		}
		case 4 : {
			title();
			puts("Mencari Luas Lingkaran");
			puts("");
			puts("");
			printf("Masukan Jari-jari Lingkaran : ");
			double p;
			scanf("%lf", &p); getchar();
			puts("----------------------------------");
			double luas;
			luas = 3.14*p*p;
			printf("Luas Segitiga : %.2lf\n", luas);
			
			puts("");
			printf("Tekan enter untuk melanjutkan...");
			getch();
			
			system("cls");
			return menu();
			break;
		}
	}

	printf("Tekan enter untuk melanjutkan...");
	getch();
	
	system("cls");
	return menu();
}

void caseSepuluh(){
	system("cls");
	title();
	puts("Mencari Keliling Bangun Datar");
	puts("");
	puts("Pilih Bangun Datar :");
	puts("1. Persegi/Persegi Panjang");
	puts("2. Jajar Genjang");
	puts("3. Segitiga");
	puts("4. Lingkaran");
	puts("----------------------------------");
	printf(">> ");
	scanf("%d", &y);
	getchar();
	
	system("cls");
	switch(y){
		case 1 : {
			title();
			puts("Mencari Keliling Persegi/Persegi Panjang");
			puts("");
			puts("          ___________ ");
			puts("         |           |");
			puts("Contoh : |           | Lebar");
			puts("         |___________|");
			puts("            Panjang");
			puts("");
			printf("Masukan Panjang Persegi : ");
			int p;
			scanf("%d", &p); getchar();
			printf("Masukan Lebar Persegi : ");
			int l;
			scanf("%d", &l);getchar();
			puts("----------------------------------");
			int luas;
			luas = (p+l)*2;
			printf("Keliling Persegi : %d\n", luas);
			
			puts("");
			printf("Tekan enter untuk melanjutkan...");
			getch();
			
			system("cls");
			return menu();
			break;
		}
		case 2 : {
			title();
			puts("Mencari Keliling Jajar Genjang");
			puts("");
			puts("             ___________ ");
			puts("           /           /");
			puts("Contoh :  /           /  Sisi Miring");
			puts("         /___________/");
			puts("              Alas");
			puts("");
			printf("Masukan Alas Jajar Genjang : ");
			int p;
			scanf("%d", &p); getchar();
			printf("Masukan Sisi Miring Jajar Genjang : ");
			int l;
			scanf("%d", &l); getchar();
			puts("----------------------------------");
			int luas;
			luas = (p+l)*2;
			printf("Keliling Jajar Genjang : %d\n", luas);
			
			puts("");
			printf("Tekan enter untuk melanjutkan...");
			getch();
			
			system("cls");
			return menu();
			break;
		}
		case 3 : {
			title();
			puts("Mencari Keliling Segitiga");
			puts("");
			puts("            /\\ ");
			puts("           /  \\         ");
			puts("Contoh :  /    \\  Sisi Miring");
			puts("         /______\\");
			puts("           Alas");
			puts("");
			printf("Masukan Alas Segitiga : ");
			int p;
			scanf("%d", &p); getchar();
			printf("Masukan Sisi Miring Segitiga : ");
			int l;
			scanf("%d", &l); getchar();
			puts("----------------------------------");
			int luas;
			luas = (2*l)+p;
			printf("Keliling Segitiga : %d\n", luas);
			
			puts("");
			printf("Tekan enter untuk melanjutkan...");
			getch();
			
			system("cls");
			return menu();
			break;
		}
		case 4 : {
			title();
			puts("Mencari Keliling Lingkaran");
			puts("");
			puts("");
			printf("Masukan Jari-jari Lingkaran : ");
			double p;
			scanf("%lf", &p); getchar();
			puts("----------------------------------");
			double luas;
			luas = 3.14*p*2;
			printf("Keliling Segitiga : %.2lf\n", luas);
			
			puts("");
			printf("Tekan enter untuk melanjutkan...");
			getch();
			
			system("cls");
			return menu();
			break;
		}
	}
	system("cls");
	return menu();
}

int main (){
	
	opening();
	menu();
	
	while(true){
		switch(operasi){
			case 1 :{
				title();
				caseSatu();
				break;
			}
			case 2 :{
				title();
				caseDua();
				break;
			}
			case 3 :{
				title();
				caseTiga();
				break;
			}
			case 4 :{
				title();
				caseEmpat();
				break;
			}
			case 5 :{
				title();
				caseLima();
				break;
			}
			case 6 :{
				title();
				caseEnam();
				break;
			}
			case 7 :{
				title();
				caseTujuh();
				break;
			}
			case 8 :{
				title();
				caseDelapan();
				break;
			}
			case 9 :{
				title();
				caseSembilan();
				break;
			}
			case 10 :{
				title();
				caseSepuluh();
				break;
			}
			case 0 :{
				opening();
				menu();
				break;
			}

		}
	}

	return 0;
}
