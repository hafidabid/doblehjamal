#include <stdio.h>
#include <string.h>

char a[999];
char opr[999];
int opsiawal;
lanjut = 1;
count = 0;

void credit(){
	printf("thanks for use this program\n");
		printf("created by = \n");
		printf("1. hafid abi d 16519371\n");
		printf("2. m ainun nahar \n");
		printf("3. fakhri nail wibowo 16519\n");
}
void turunan(){
	char hasil[999];
	int n,x,y,z;
	printf("masukkan jumlah derajat = \n");
	scanf("%d",&n);
	int arr[n];
	for(x=0;x<n;x++){
		printf("masukkan x^%d = ",n-1-x);
		scanf("%d",&arr[x]);
		//printf("\n");
	}
	//sebelum diturunkan
	printf("f(x) = ");
	for(x=0;x<n;x++){
		if(x==0){
			if(arr[x]>0||arr[x]<0){
				printf("%d x^%d",arr[x],n-x-1);
			}
		}else{
			if(arr[x]>0){
				printf(" + %d x^%d",arr[x],n-x-1);
			}else if(arr[x]<0){
				arr[x] = arr[x]*-1;
				printf(" - %d x^%d",arr[x],n-x-1);
			}
		}
	}

	for(x=0;x<n;x++){
		arr[x] = arr[x]*(n-x-1);
	}
	printf("\nf'(x) = ");
	for(x=0;x<n;x++){
		if(x==0){
			if(arr[x]>0||arr[x]<0){
				printf("%d x^%d",arr[x],n-x-2);
			}
		}else{
			if(arr[x]>0){
				printf(" + %d x^%d",arr[x],n-x-2);
			}else if(arr[x]<0){
				arr[x] = arr[x]*-1;
				printf(" - %d x^%d",arr[x],n-x-2);
			}
		}
	}
	printf("\nmau menurunkan fungsi lagi (1/0) ? ");
	scanf("%d",&y);
	if(y==1){
		turunan();
	}else{
		credit();
	}
}

void kalkulator(){
    float angka[999];
    char opr[999];
    int x;
    lanjut == 1;
    count == 0;
    printf("masukkan angka pertama anda: ");
    scanf("%d", &angka[0]);
    while (lanjut && count<999);{
        printf("masukkan angka selanjutnya: ");
        scanf("%d", &angka[count+1]);
        printf("masukkan operasi yang diinginkan: \n");
        printf("ketik + untuk penjumlahan\n");
        printf("ketik - untuk pengurangan\n");
        printf("ketik x untuk pengalian\n");
        printf("ketik : untuk pembagian\n");
        scanf("%c", opr[count]);
        printf("ketik 1 untuk melanjutkan dan 0 untuk berhenti");
        scanf("&d", &lanjut);
        if (lanjut == 1);{
            count++;
        }

    }
    for(x=0;x<=count;x++);{
        if (opr[x] == "x"){
            if (x == 0){
                angka[x+1] = angka[x]*angka[x++];
                angka[x] = 0;
                opr[x] = "+";
            }
            else{
                angka[x+1] = angka[x]*angka[x++];
                angka[x] = 0;
                opr[x] = opr[x-1];
            }

        }
        else if (opr[x] == ":"){
            if (x == 0){
                angka[x+1] = angka[x]/angka[x+1];
                angka[x] = 0;
                opr[x] = "+";
            }
            angka[x+1] = angka[x]/angka[x++];
            angka[x] = 0;
            opr[x] = opr[x-1];
        }
    }
    for(x=0;x<=count;x++);{
        if (opr[x] == "+"){
            angka[x+1] = angka[x]+angka[x+1];
        }
        else if (opr[x] == "-"){
            angka[x+1] == angka[x]-angka[x+1];
        }
    }

}

int main(){
<<<<<<< HEAD
	printf("Kalkulator Pintar namun sederhana\n");
	printf("===================================\n");
	printf("ketik 1 untuk kalkulator biasa\n");
	printf("ketik 2 untuk differensial\n");
	printf("ketik 3 untuk keluar dari program\n");
	scanf("%d",&opsiawal);
	if(opsiawal==1){
		kalkulator();
	}else if(opsiawal==2){
		turunan();
	}else{
		credit();
		return 0;
	}

	//printf("%s",a);

=======
>>>>>>> fb3b3ec137c941461a6464a4e538371903102958
}

