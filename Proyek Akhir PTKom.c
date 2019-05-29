#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>

int HitungKalender();
int Notes();
int ShowNote();
int Exit ();
int Bantuan ();
int Hitung_Tahun(int tahun);
int Hitung_Bulan(int tahun,int bulan);
int Cek_Hari(int JumlahHari);
int Hitung_Hari(int bulan,int tahun);
int LoadingScreen();
int menu;
char ch = 'a';
struct Remainder{
    int dd;
    int mm;
    int yy;
    char note[50];
};
struct Remainder R;
struct Date{
    int dd;
    int mm;
    int yy;
};
struct Date date;

void fullscreen()
{
keybd_event(VK_MENU,0x38,0,0);
keybd_event(VK_RETURN,0x1c,0,0);
keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
}

int LoadingScreen(){
printf("\t\t/////////////////////////////+os+////////////////////os+////////////////////////////////////////////\n");
printf("\t\t/////////////////////////////syhs///////////////////oyhy////////////////////////////////////////////\n");
printf("\t\t/////////////////+ooooooooooosyhyooooooooooooooooooosyhhooooooooooooo///////////////////////////////\n");
printf("\t\t/////////////////ooooooooooossyhyoooooooooosssssssssyyhhyssssssssssss///////////////////////////////\n");
printf("\t\t/////////////////ooooooooooososyosooooooooossssssssyosysyssssssssssss///////////////////////////////\n");
printf("\t\t/////////////////oooooooooooooooooooooooooossssssssssssssssssssssssss////////+ossso+////////////////\n");
printf("\t\t/////////////////oooooooooooooooooooooooooossssssssssssssssssssssssss///////shhddddhyso+////////////\n");
printf("\t\t/////////////////oooooooooooooooooo++oooo++ooossooossssssssssssssssss//////syo+syhhddddhyyy/////////\n");
printf("\t\t/////////////////ooooooooooooooooo:.:--+o.-::+o:::-+sssssssssssssssss/////+o/oo///osyhdddhs/////////\n");
printf("\t\t/////////////////ooooooooooooooooo--oo--o`-/+s/.ssoosssssssssssssssss////////s////++++hho+//////////\n");
printf("\t\t/////////////////ooooooooooooooooo--++.-o`:++o/.oo+osssssssssssssssss////sys++////oy++h+////////////\n");
printf("\t\t/////////////////ooooooooooooooooo:-:-:+o--::/o::::+sssssssssssssssss///shhhsooso++//++/////////////\n");
printf("\t\t/////////////////oooooooooooooooooooooooooossssssssssssssssssssssssss::/yhhhhyysshys////////////////\n");
printf("\t\t/////////////////+++++++++++++++++++++++++ooooooooooooooooooooooooooo.../hhhhdddddh+////////////////\n");
printf("\t\t/////////////////````````````````````````````````````````````````````...`-shhhhhhy+/////////////////\n");
printf("\t\t/////////////////`                 ``````````````````````````````````.....:/:::::///////////////////\n");
printf("\t\t/////////////////`             ````.`````````````````````````````````..../:.....-///////////////////\n");
printf("\t\t/////////////////`          `-+yhddmmdy+.`````.:/shdh````````````````...+/.......-//////////////////\n");
printf("\t\t/////////////////`         `odddhsosymmmm/```hdddddmm````````````````.-oo-...--...//////////////////\n");
printf("\t\t/////////////////`         ``:o:`````-mmmm```::::ddmm````````````````-ss-...-:-...-/////////////////\n");
printf("\t\t/////////////////`        ```````````-mmmd```````ddmm````````````````-+/:........-://///////////////\n");
printf("\t\t/////////////////`     `````````///oymmmy-```````ddmm.``````````````.o+//-.---::////////////////////\n");
printf("\t\t/////////////////``  ```````````dddmmmms:````````ddmm.``````````````.hdyy+//////////////////////////\n");
printf("\t\t/////////////////```````````````://+shmmmy.``````ddmm.````````````...hdds///////////////////////////\n");
printf("\t\t/////////////////````````````````````.smmmo``````hdmm.```````````....hdy////////////////////////////\n");
printf("\t\t/////////////////```````````.::```````+mmmy`````.ddmm.````````.......hy/////////////////////////////\n");
printf("\t\t/////////////////``````````+hdds:-.--+dmmm/`````.ddmm....````........s//////////////////////////////\n");
printf("\t\t/////////////////``````````.+hddddhddmmmh+```/hhhddmmhhh+`...........///////////////////////////////\n");
printf("\t\t/////////////////````````````.:+syyyyso:.````/yyyyyyyhhh+............///////////////////////////////\n");
printf("\t\t/////////////////`````````````````````````````...................--:////////////////////////////////\n");
printf("\t\t/////////////////.````````````````````````````````............-:///::///////////////////////////////\n");
printf("\t\t/////////////////.`````````````````````````````..............:///::-.///////////////////////////////\n");
printf("\t\t/////////////////:::::::::::::::::::::::::::::::::::::::::://////::::///////////////////////////////\n");
}

void loader();
	
void loader()
{
	int i;
	system("cls");
	LoadingScreen();
	printf("\n						Please Wait Loading....\n");
	printf("						");
	for (i=0; i<25; i++){
		Sleep(100);
		printf("%c", 219);
		
	}
}
int main()
{
	int menu;
	system("COLOR 3F");
	{
	loader ();
	system("cls");
	printf("\n\n						Loading Completed");
	Sleep(1000);
	system("cls");
	goto menu;
	}


	menu:

	
	system ("cls");
	int position = 1;
	int keyPressed = 0;
	
	#define MAX 5
	#define MIN 1
	
	while (keyPressed !=13){
	system ("cls");
	printf("\n\n");
	printf("Dibuat oleh : \n");
	printf("Helmi Arrazy\n");
	printf("Leonardus Kevin\n");
	printf("LUnnardo Soekarno Lukias\n");
	printf("\n");
	arrowHere (1,position); printf (" 1.Masuk ke Kalender\n");
	arrowHere (2,position); printf (" 2.Masukkan Notes\n");
	arrowHere (3,position); printf (" 3.Tampilkan Notes\n");
	arrowHere (4,position); printf (" 4.Tentang Kalender\n");
	arrowHere (5,position); printf (" 5.Exit\n");
	
	keyPressed = getch ();
	
	if (keyPressed == 80 && position != MAX ){
		position++;	
	}
	else if (keyPressed == 72 && position != MIN){
		position--;
	}
	else {
		position == position;
	}
}
switch (position){

case 1 : HitungKalender(); break;
case 2 : Notes(); break;
case 3 : ShowNote(date.mm); break;
case 4 : Bantuan(); break;
case 5 : Exit(); break;
}
return 0;
}

void arrowHere (int realposition, int arrowposition){
	
			if (realposition == arrowposition){
				printf ("----->>>");
			}
			else {
				printf ("        ");
			}
}


int HitungKalender()
{
    int tahun,bulan,JumlahHari,Jumlah_Hari,Hari, i, menu;
    char ch = 'a';
    char str1[100];
    
	system("cls");
    printf("Masukkan Tahun yang anda inginkan : ");
    scanf("%d",&tahun);fflush(stdin);
 do{
  printf("Masukkan Bulan yang anda inginkan : ");
  scanf("%d",&bulan);fflush(stdin);


 }while(bulan<1||bulan>12);
 printf("\n. . . Loading . . .\n");
 sleep(1);
 system("cls");
 	if (bulan==1)
 	{
 	 printf("Calendar : January %d",tahun);
	 }else
		{	
 		if (bulan==2)
		{
  	 	printf("Calendar : February %d",tahun);
		}else 
			{
			if (bulan==3)
			{
 	 		printf("Calendar : March %d",tahun);
 			}else
 				{
				if (bulan==4)
				{
  				printf("Calendar : April %d",tahun);
 				}else 
 					{
	 				if (bulan==5)
					{
  					printf("Calendar : May %d",tahun);
 					}else 
	 				{
	 				if (bulan==6)
	 				{
  	 				printf("Calendar : June %d",tahun);
  	 				} else 
						 {
	 					 if(bulan==7)
	 					 	{
  	  						printf("Calendar : July %d",tahun);
 	 						}else 
 	 							{
	  							if (bulan==8)
	 							{
  	  							printf("Calendar : August %d",tahun);
 	  							}else 
	  								{
	  								if (bulan==9)
	  								{
  	   								printf("Calendar : September %d",tahun);
 	  								}else 
	  									{
	   									if (bulan==10)
	   									{
  										printf("Calendar : October %d",tahun);
										}
 										else 
 											{
 											if (bulan==11)
		 										{
  		  										printf("Calendar : November %d",tahun);
 		 										}else
													{
 													if (bulan==12)
													{
  													printf("Calendar : Desember %d",tahun);
 													}
													}											
											}	
										}
									}
								}
							}
						}
					}
				}
			}
		}
    JumlahHari = Hitung_Tahun(tahun) + Hitung_Bulan(tahun, bulan);
 	Hari = Cek_Hari(JumlahHari);
    Jumlah_Hari = Hitung_Hari(bulan,tahun);

    printf("\n\n=======================================================\n");
    printf("Sen\tSel\tRab\tKam\tJum\tSab\tMing\n");
    printf("=====================================================\n");
    printf("%s", str1);

for(i = 2 ; i <= Hari ; i++){
  printf("\t|");
 }
 for(i = 1 ; i <= Jumlah_Hari ; i++){
  printf("%d\t|", i);
  if(Hari %7 == 0)
         printf("\n");
  Hari++;
    }
    getch();
    system("cls");
printf("Apakah anda ingin keluar?\n");
    printf("Tekan 1 untuk Keluar\n");
    printf("Tekan 2 untuk ke menu utama\n");
    scanf("%d",&menu);
    system("cls");
    if(menu==1)
	{
    	return 0;
	}
	if(menu==2)
	{
	return main();
	}
	else
	{
		printf("input anda salah silakan diulangi");
	}
}


int Hitung_Tahun(int tahun){
    int JumlahHari = 0, year;
    for(year = 1900 ; year < tahun ; year++){
            if(year%4 == 0){
              JumlahHari += 366;
            }else{
              JumlahHari += 365;
            }
    }
    return(JumlahHari);
}

int Hitung_Bulan(int tahun,int bulan){
    int JumlahHari = 0, Month;
    for(Month = 1 ; Month < bulan ; Month++)
    {
  if(Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10 || Month == 12){
   JumlahHari += 31;
  }else if(Month==4||Month==6||Month==9||Month==11){
            JumlahHari += 30;
  }else{
            if(tahun%4 == 0){
               JumlahHari += 29;
   }else
               JumlahHari += 28;
            }
  }
    return(JumlahHari);
}

int Cek_Hari(int JumlahHari){
 int Hari = JumlahHari%7 ;
 return(Hari);
}

int Hitung_Hari(int Month,int tahun)
{
int JumlahHari = 0;
if(Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10 || Month == 12)
	{
    JumlahHari += 31;
 	}
 	else 
 	{
 		if(Month == 4 || Month == 6 || Month == 9 || Month == 11)
 		{
        	JumlahHari += 30;
 		}
 		else
 		{
 			if(tahun%4==0)
  			{
     		JumlahHari += 29;
  			}
  			else
  			{
			JumlahHari += 28;
    		}
		}
	}
    return(JumlahHari);
    system("pause");
	system("cls");
	return menu;
    
}


int Notes(){
    FILE *fp;
    fp = fopen("feb2019.txt","ab");
    system("cls");
    printf("Enter the date(DD/MM/YYYY): ");
    scanf("%d%d%d",&R.dd, &R.mm, &R.yy);
    printf("Enter the Note(50 character max): ");
    fflush(stdin);
    scanf("%[^\n]",R.note);
    if(fwrite(&R,sizeof(R),1,fp)){
        puts("Note is saved sucessfully");
        fclose(fp);
    }else{
        puts("\aFail to save!!\a");
    }
    printf("Press any key............");
    getch();
    fclose(fp);
    return main();
}


int ShowNote(int mm, int yy)
{
    system("cls");
	printf("Enter month and year (MM/YYYY) : ");
    scanf("%d %d",&date.mm,&date.yy);
    FILE *fp;
    int i = 0, isFound = 0;
    system("cls");
    fp = fopen("feb2019.txt","rb+");
    if(fp == NULL){
        printf("Error in opening the file");
    }
    while(fread(&R,sizeof(R),1,fp) == 1){
        if(R.mm == date.mm && R.yy == date.yy){
            printf("Note %d = %d/%d/%d: %s\n", i+1, R.dd, R.mm, R.yy,  R.note);
            isFound = 1;
            i++;
        }
    }
    if(isFound == 0){
        printf("This Month contains no note\n");
    }
    printf("Press any key to back.......");
    getch();
    return main(menu);

}





int Exit() {
	int pil;
	printf ("Apakah anda ingin keluar?\n");
	printf ("1)TIDAK\n"); 
	printf ("2)YA\n");
	printf("masukkan pilihan : ");
			scanf("%d", &pil);
				if(pil==1){
					system("cls");
					main();
				}
				else if(pil==2){
				printf("!!!!!!!!!!!***TERIMAKASIH TELAH MENCOBA PROGRAM NYA***!!!!!!!!!!\n");
				system("pause");
				return 0;
}
}

int Bantuan() {
	int menu;
	system("cls");
	printf ("Kalender adalah sebuah sistem untuk memberi nama pada sebuah periode waktu.");
	printf ("(seperti hari sebagai contohnya)\n");
	printf ("Kalender di sini juga bisa digunakan untuk meniympan notes dan bisa mengecek nya kebali dalam rentang 1 bulan\n");
	system("pause");
	system("cls");
	return main(menu);
}

