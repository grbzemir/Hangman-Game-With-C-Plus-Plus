#include<iostream>
#include<string.h>
#include<cstdlib>
#include<time.h>
#include<stdio.h>

using namespace std;


char kelimeler[][20]= {"EMIR" , "ORACLE" , "BILGE" , "VISUAL STUDIO " , "CHP" , "SOFTWARE" ,"COMPUTER" , "CODE" , "PROGRAM" , "PYTHON" , "JAVASCRIPT" };
char *kelime; //kelimeyi tutacak
char *tahmin; //tahmin edilen kelimeyi tutacak

int size;

//fonksiyon prototipleri

void KelimeOlustur()

 {
    
    int indis= rand() %10; 
	kelime= kelimeler[indis];
    size= strlen(kelime) ; 	 // kelimenin uzunluğunu buluyoruz
    tahmin = (char*) malloc( size+1 * sizeof(char) ) ;// tahmin için gerekli alanı ayırıyoruz

    int i=0;
    

    while(i<size) // kelimenin uzunluğu kadar dönüyoruz

    {

        tahmin[i] = '-'; // kelimenin uzunluğu kadar - işareti ekliyoruz
        i++; // i yi 1 arttırıyoruz


    }

    tahmin[i] = '\0'; // sonuna null karakter ekliyoruz

 

  cout<<"Kelime : "<<kelime<<endl;
  cout<<"Uzunluk: "<<size<<endl;
  cout<<"Tahmin : "<<tahmin<<endl;

  }

  int harfKontrol(char harf)

  {

    int i=0 , sonuc=0;


    while(i<size)

    {



            if(harf == kelime[i])  // kelime içinde harf varsa

            {

                tahmin[i] = harf; // tahmin içindeki - işaretini harf ile değiştiriyoruz
                sonuc = 1; // sonucu 1 yapıyoruz

            }

            i++;

        }

        cout<<endl;

        return sonuc;

    }

    int kelimeKontrol()

    {
        


        int i;
        i=0;
		int sonuc=1;
        
        while(i<size)

        {

            if(tahmin[i]=='-')

            {

                sonuc=0;

            }

            i++;

        }

        cout<<"Tahmininiz : "<<tahmin<<endl;

        return sonuc;

    }


    void sehpaCiz(int n)

    {

        system("cls");
        cout<<"HANGMAN GAME"<<endl;

        

    if(n==2 )

	{		

		cout<<"\t\t----------\n" ; 	

	}

	
		if(n==3 )

	{
		
		cout<<"\t\t          |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t----------\n"; 

	}
		if(n==4 )

	{
		
		cout<<"\t\t          |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t----------\n"; 	

	}
		if(n==5 )

	{
		
		cout<<"\t\t          |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t----------\n"; 

	}

		if(n==6 )

	{
		
		cout<<"\t\t          |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t----------\n"; 	
        	
	}

		if(n==7 )

	{
		cout<<"\t\t__________\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t          |\n"; 
	    cout<<"\t\t----------\n"; 

	}

		if(n== 8 )

	{
		cout<<"\t\t__________\n"; 
		cout<<"\t\t     |    |\n"; 
		cout<<"\t\t     O    |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t----------\n"; 	

	}

		if(n== 9 )

	{
		cout<<"\t\t__________\n"; 
		cout<<"\t\t     |    |\n"; 
		cout<<"\t\t     O    |\n"; 
		cout<<"\t\t    /|\\  |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t----------\n"; 	

	}
	
	
	if(n== 10 )

	{
		cout<<"\t\t__________\n"; 
		cout<<"\t\t     |    |\n"; 
		cout<<"\t\t     O    |\n"; 
		cout<<"\t\t    /|\\  |\n"; 
		cout<<"\t\t     |    |\n"; 
		cout<<"\t\t    / \\  |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t          |\n"; 
		cout<<"\t\t----------\n"; 			
	    printf("\t\tASILDINIZ !!! \n"); 
		printf("kelimemimiz  : %s", kelime); 
		
		 
		
	}
	
	cout<<endl<<endl;

}
    

   int main()

   {

    system("color 7");
    system("cls");
    cout<<"HANGMAN GAME"<<endl;
 
    srand(time(0));
    KelimeOlustur();
    
    char harf;
    int adet;
    int sonuc1;
    int sonuc2;
    adet=0;

    while(adet<10)

    {

        adet++;
        cout<<"Harf giriniz : ";
        cin>>harf;

        if(harfKontrol(harf))
        adet--;

        sehpaCiz(adet);

        if(kelimeKontrol())

        {

            cout<<"Tebrikler kazandiniz..."<<endl;
            break;

        }

    }

    
    return 0;


   }
