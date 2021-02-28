#include <iostream.>
#include <conio.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <math.h>
#include <windows.h>
using namespace std;
	void gotoxy(int x1, int y1)
{
 HANDLE hcon;
 hcon = GetStdHandle(STD_OUTPUT_HANDLE);
 COORD dwPos;
 dwPos.X = x1;
 dwPos.Y = y1;
 SetConsoleCursorPosition(hcon,dwPos);
}
char opcion;
int x=10,y=10;


void suma(){

int a,b;
	int s,r,m;
	float d;
	char resp='s';
	do {
		system("cls");
	
	cout<<"ingrese el primer numero:",cin>>a;
	cout<<"ingrese el segundo numero:",cin>>b;
    cout<<""<<endl;
    s=a+b;
    r=a-b;
    m=a*b;
    d=a/b;
    cout<<"la suma de los numeros  "<<a<<"  y  "<<b<<" es: "<<s<<endl; 	
    cout<<""<<endl;
	cout<<"la resta de los numeros  "<<a<<"  y  "<<b<<" es: "<<r<<endl; 
    cout<<""<<endl;
    cout<<"la multiplicacion de los numeros  "<<a<<"  y  "<<b<<" es: "<<m<<endl; 
    cout<<""<<endl;
    cout<<"la division de los numeros  "<<a<<"  y  "<<b<<" es: "<<d<<endl; 
 cout<<""<<endl;
cout<<"desea ingresar otros datos[s/n]", cin>>resp;

}while(resp=='s');
}

void par(){
	
int x;
	char resp='s';
	do {
		system("cls");

cout<<"ingrese un numero"<<endl;
cin>>x;
cout<<""<<endl;

if(x%2==0)
{
cout<<x<<"  es par"<<endl;
}
else

{
cout<<x<<"  es impar"<<endl;
}

cout<<""<<endl;
cout<<"desea ingresar otros datos[s/n]", cin>>resp;

}while(resp=='s');
}
void conversion(){
		int op1;
 int k,m;
 float k1,m1;
 char resp='s';
 do
 {//icicio del do
  system("cls");

 cout<<"menu de opciones basicas"<<endl;
 cout<<"1. kilometros a millas "<<endl;
 cout<<"2. metros a pulgadas"<<endl;
 cout<<"3. Libras a Kilos"<<endl;
 cout<<"4. SAlir"<<endl;
 cout<<"ingrese su opcion"<<endl;
 cin>>op1;


     switch(op1)
     {//inicio del switch

          case 1:
          	do {
          system("cls");
          cout<<"ingrese la cantidad en kilometros a millas"<<endl;
          cin>>k;
          cout<<"ingrese la cantidad en millas a kilometros"<<endl;
          cin>>m;
          k1=k/1.609;
          cout<<""<<endl;
          cout<<"kilometros a millas es: "<<k1<<endl;
           m1=m*1.609;
          cout<<""<<endl;
          cout<<"millas a kilometros es: "<<m1<<endl;
          cout<<""<<endl;
          cout<<"desea ingresar otros datos[s/n]", cin>>resp;
		  }while(resp=='s');
		  
		  getch();
          break;


          case 2:
          do
          {
		  
		  system("cls");
          cout<<"ingrese la longitud de metros a pulagadas:",cin>>k;
          k1=k*39.3701;
          cout<<"kilometros a millas es: "<<k1<<endl;
          cout<<""<<endl;
		  cout<<"desea ingresar otros datos[s/n]", cin>>resp;
		  }while(resp=='s');
          
         
          getch();
          break;

          case 3:
          do{
		  
		  system("cls");
          cout<<"ingrese el peso en libras a kilos:",cin>>k;
          cout<<"ingrese el peso en kilos a libras",cin>>m;
		  k1=k/2.205;
		  m1=m*2.205;
          cout<<""<<endl;
          cout<<"Las libras a kilos son: "<<k1<<endl;
          cout<<""<<endl;
          cout<<"Las libras a kilos son: "<<m1<<endl;
          cout<<""<<endl;
		  cout<<"desea ingresar otros datos[s/n]", cin>>resp;
		  }while(resp=='s');
          getch();
          break;

        

          }//fin del switch
          }//fin del do

          while(op1<=3);

getch();
}

int palindromo(){
	char cadena[100], copia[100];
	char resp='s';
	do{
	system("cls");
	cout<<"ingrese una palabra:"<<endl;
	cin>>cadena;
	
	for(int i=(strlen(cadena)-1);i>=0;i--){
		copia[strlen(cadena)-1-i]=cadena[i];
	}
	copia[strlen(cadena)]='\0';
	
	if(strcmp(cadena,copia)==0){
		cout<<"Es palindromo"<<endl;
	}else{
		cout<<"la palabra no es palindromo"<<endl;
	}
	
	cout<<"desea otra palabra [s/n]", cin>>resp;
		  }while(resp=='s');
	
	
	getch();
}



void romanos(){

int numero1,unidades1,decenas1,centenas1,millar1;
    char resp1='s';
	do {
          system("cls");
	cout<<"Digite un numero entero a convertir a romano: ", cin>>numero1;
	
	unidades1 = numero1%10; numero1/=10;
	decenas1 = numero1%10; numero1/=10;
	centenas1 = numero1%10; numero1/=10;
	millar1 = numero1%10; numero1/=10;
	
	switch(millar1){
	
	case 1: cout<<"M "; break;
	case 2: cout<<"MM "; break;
	case 3: cout<<"MMM "; break;
	
}

switch(centenas1){
	
	case 1: cout<<"C";break;
    case 2: cout<<"CC"; break;
    case 3: cout<<"CCC"; break;
    case 4: cout<<"CD"; break;
    case 5: cout<<"D"; break;
    case 6: cout<<"DC"; break;
    case 7: cout<<"DCC"; break;
    case 8: cout<<"DCCC "; break;
    case 9: cout<<"CM"; break;
}
switch(decenas1){
	
	case 1:cout<<"X";  break;
    case 2: cout<<"XX"; break;
   	case 3: cout<<"XXX"; break;
   	case 4: cout<<"XL"; break;
    case 5: cout<<"L"; break;
    case 6: cout<<"LX"; break;
    case 7: cout<<"LXX"; break;
    case 8: cout<<"LXXX"; break;
    case 9: cout<<"XC"; break;
}
switch(unidades1){
	
	case 1: cout<<"I"; break;
	case 2: cout<<"II";  break;
	case 3: cout<<"III";break;
    case 4: cout<<"IV";break;
    case 5:cout<<"V";break;  
    case 6: cout<<"VI"; break;
    case 7: cout<<"VII"; break;
    case 8: cout<<"VIII"; break;
    case 9: cout<<"IX "; break;
}
cout<<""<<endl;
cout<<""<<endl;
cout<<"desea ingresar otros datos[s/n]", cin>>resp1;
		  }while(resp1=='s');
	
	getch();	
}

void NumL(){
	int numero,unidades,decenas,centenas,millar;
    char resp='s';
	do {
          system("cls");
	cout<<"digite un numero entero "<<endl;
	cin>>numero;

	
	unidades = numero%10; numero/=10;
	decenas = numero%10; numero/=10;
	centenas = numero%10; numero/=10;
	millar = numero%10; numero/=10;
	
	switch(millar){
	
	case 1: cout<<"mil "; break;
	case 2: cout<<"dos mil "; break;
	case 3: cout<<"tres mil "; break;
	case 4: cout<<"cuatro mil "; break;
	case 5: cout<<"cinco mil "; break;
	case 6: cout<<"seis mil "; break;
	case 7: cout<<"siete mil "; break;
	case 8: cout<<"ocho mil "; break;
	case 9: cout<<"nueve mil "; break;
	case 10: cout<<"diez mil "; break;
	
}

switch(centenas){
	
	case 1: if((centenas=100) && (unidades<1))
          	{cout<<"cien"; }
          	else 
          	if((centenas=100)&&(unidades>=1))
          	{cout<<"ciento "; }break;
    case 2: cout<<"docientos "; break;
    case 3: cout<<"trecientos "; break;
    case 4: cout<<"cuatrocientos "; break;
    case 5: cout<<"quinientos "; break;
    case 6: cout<<"seicientos "; break;
    case 7: cout<<"setecintos "; break;
    case 8: cout<<"ochocientos "; break;
    case 9: cout<<"novecientos "; break;
}
switch(decenas){
	
	case 1: if((decenas=10) && (unidades<1))
          	{cout<<"diez"; }
          	else 
          	if((decenas=10)&&(unidades==1))
          	{cout<<"once"; } 
			else
			if((decenas=10)&&(unidades==2))
          	{cout<<"doce"; }
          	else
          	if((decenas=10)&&(unidades==3))
          	{cout<<"trece"; }
          	else
			  if((decenas=10)&&(unidades==4))
          	{cout<<"catorce"; }
          	else
          		if((decenas=10)&&(unidades==5))
          	{cout<<"quince"; }
			  else 
			  	if((decenas=10)&&(unidades>=6))
          	{cout<<"dieci"; }
			  
			  break;
			  
          	
   
    case 2: if((decenas=20) && (unidades<1))
          	{cout<<"veinte"; }
          	else 
          	if((decenas=20)&&(unidades>=1))
          	{cout<<"veinti"; }
	break;
    
	case 3: if((decenas=30) && (unidades<1))
          	{cout<<"treinta "; }
          	else 
          	if((decenas=30)&&(unidades>=1))
          	{cout<<"treinta y "; } break;
    
	case 4: if((decenas=40) && (unidades<1))
          	{cout<<"cuarenta"; }
          	else 
          	if((decenas=40)&&(unidades>=1))
          	{cout<<"cuarenta y "; } break;
   
    case 5: if((decenas=50) && (unidades<1))
          	{cout<<"cincuenta"; }
          	else 
          	if((decenas=50)&&(unidades>=1))
          	{cout<<"cincuenta y "; } break;
   
    case 6: if((decenas=60) && (unidades<1))
          	{cout<<"sesenta"; }
          	else 
          	if((decenas=60)&&(unidades>=1))
          	{cout<<"sesenta y "; } break;
   
    case 7: if((decenas=70) && (unidades<1))
          	{cout<<"setenta"; }
          	else 
          	if((decenas=70)&&(unidades>=1))
          	{cout<<"setenta y "; } break;
   
    case 8: if((decenas=80) && (unidades<1))
          	{cout<<"ochenta"; }
          	else 
          	if((decenas=20)&&(unidades>=1))
          	{cout<<"ochenta y "; } break;
   
    case 9: if((decenas=90) && (unidades<1))
          	{cout<<"noventa "; }
          	else 
          	if((decenas=90)&&(unidades>=1))
          	{cout<<"noventa y "; } break;
}
switch(unidades){
	
	case 1: if((unidades=1)&& (decenas==10))
          	{cout<<""; }
          	else 
          	if((unidades=1) && (decenas!=10))
          	{cout<<"uno"; }break;
    
	case 2: if((unidades=2)&& (decenas==10))
          	{cout<<""; }
          	else 
          	if((unidades=2) && (decenas!=10))
          	{cout<<"dos"; } break;
    
	case 3: if((unidades=3)&& (decenas==10))
          	{cout<<""; }
          	else 
          	if((unidades=3) && (decenas!=10))
          	{cout<<"tres"; }break;
   
    case 4: if((unidades=4)&& (decenas==10))
          	{cout<<""; }
          	else 
          	if((unidades=4) && (decenas!=10))
          	{cout<<"cuatro"; } break;
   
    case 5: if((unidades=5)&& (decenas==10))
          	{cout<<""; }
          	else 
          	if((unidades=5) && (decenas!=10))
          	{cout<<"cinco"; }break;
   
    case 6: cout<<"seis"; break;
    case 7: cout<<"siete"; break;
    case 8: cout<<"ocho"; break;
    case 9: cout<<"nueve "; break;
}
cout<<""<<endl;
cout<<""<<endl;
cout<<"desea ingresar otros datos[s/n]", cin>>resp;
		  }while(resp=='s');
	
	getch();	
}
void numerldec(){
	int numero,unidades,decenas,centenas,millar;
    char resp='s';
	do {
          system("cls");
	cout<<"digite un numero entero [1 a 10999]"<<endl;
	cin>>numero;

	
	unidades = numero%10; numero/=10;
	decenas = numero%10; numero/=10;
	centenas = numero%10; numero/=10;
	millar = numero%10; numero/=10;
	
	switch(millar){
	
	case 1: cout<<"mil "; break;
	case 2: cout<<"dos mil "; break;
	case 3: cout<<"tres mil "; break;
	case 4: cout<<"cuatro mil "; break;
	case 5: cout<<"cinco mil "; break;
	case 6: cout<<"seis mil "; break;
	case 7: cout<<"siete mil "; break;
	case 8: cout<<"ocho mil "; break;
	case 9: cout<<"nueve mil "; break;
	case 10: cout<<"diez mil "; break;
	
}

switch(centenas){
	
	case 1: if((centenas=100) && (unidades<1))
          	{cout<<"cien"; }
          	else 
          	if((centenas=100)&&(unidades>=1))
          	{cout<<"ciento "; }break;
    case 2: cout<<"docientos "; break;
    case 3: cout<<"trecientos "; break;
    case 4: cout<<"cuatrocientos "; break;
    case 5: cout<<"quinientos "; break;
    case 6: cout<<"seicientos "; break;
    case 7: cout<<"setecintos "; break;
    case 8: cout<<"ochocientos "; break;
    case 9: cout<<"novecientos "; break;
}
switch(decenas){
	
	case 1: if((decenas=10) && (unidades<1))
          	{cout<<"diez"; }
          	else 
          	if((decenas=10)&&(unidades==1))
          	{cout<<"once"; } 
			else
			if((decenas=10)&&(unidades==2))
          	{cout<<"doce"; }
          	else
          	if((decenas=10)&&(unidades==3))
          	{cout<<"trece"; }
          	else
			  if((decenas=10)&&(unidades==4))
          	{cout<<"catorce"; }
          	else
          		if((decenas=10)&&(unidades==5))
          	{cout<<"quince"; }
			  else 
			  	if((decenas=10)&&(unidades>=6))
          	{cout<<"dieci"; }
			  
			  break;
			  
          	
   
    case 2: if((decenas=20) && (unidades<1))
          	{cout<<"veinte"; }
          	else 
          	if((decenas=20)&&(unidades>=1))
          	{cout<<"veinti"; }
	break;
    
	case 3: if((decenas=30) && (unidades<1))
          	{cout<<"treinta "; }
          	else 
          	if((decenas=30)&&(unidades>=1))
          	{cout<<"treinta y "; } break;
    
	case 4: if((decenas=40) && (unidades<1))
          	{cout<<"cuarenta"; }
          	else 
          	if((decenas=40)&&(unidades>=1))
          	{cout<<"cuarenta y "; } break;
   
    case 5: if((decenas=50) && (unidades<1))
          	{cout<<"cincuenta"; }
          	else 
          	if((decenas=50)&&(unidades>=1))
          	{cout<<"cincuenta y "; } break;
   
    case 6: if((decenas=60) && (unidades<1))
          	{cout<<"sesenta"; }
          	else 
          	if((decenas=60)&&(unidades>=1))
          	{cout<<"sesenta y "; } break;
   
    case 7: if((decenas=70) && (unidades<1))
          	{cout<<"setenta"; }
          	else 
          	if((decenas=70)&&(unidades>=1))
          	{cout<<"setenta y "; } break;
   
    case 8: if((decenas=80) && (unidades<1))
          	{cout<<"ochenta"; }
          	else 
          	if((decenas=20)&&(unidades>=1))
          	{cout<<"ochenta y "; } break;
   
    case 9: if((decenas=90) && (unidades<1))
          	{cout<<"noventa "; }
          	else 
          	if((decenas=90)&&(unidades>=1))
          	{cout<<"noventa y "; } break;
}
switch(unidades){
	
	case 1: if((unidades=1)&& (decenas==10))
          	{cout<<""; }
          	else 
          	if((unidades=1) && (decenas!=10))
          	{cout<<"uno"; }break;
    
	case 2: if((unidades=2)&& (decenas==10))
          	{cout<<""; }
          	else 
          	if((unidades=2) && (decenas!=10))
          	{cout<<"dos"; } break;
    
	case 3: if((unidades=3)&& (decenas==10))
          	{cout<<""; }
          	else 
          	if((unidades=3) && (decenas!=10))
          	{cout<<"tres"; }break;
   
    case 4: if((unidades=4)&& (decenas==10))
          	{cout<<""; }
          	else 
          	if((unidades=4) && (decenas!=10))
          	{cout<<"cuatro"; } break;
   
    case 5: if((unidades=5)&& (decenas==10))
          	{cout<<""; }
          	else 
          	if((unidades=5) && (decenas!=10))
          	{cout<<"cinco"; }break;
   
    case 6: cout<<"seis"; break;
    case 7: cout<<"siete"; break;
    case 8: cout<<"ocho"; break;
    case 9: cout<<"nueve "; break;
}
cout<<""<<endl;
cout<<""<<endl;
cout<<"desea ingresar otros datos[s/n]", cin>>resp;
		  }while(resp=='s');
	
	getch();	
}

void tabla()
{

	int t,r;
	char resp='s';
	do {
          system("cls");
	cout<<"ingrese el numero de la tabla de multiplicar: ",	cin>>t;
	cout<<""<<endl;
	for(int i=1;i<=10;i++)
	{
		r=t*i;
		Sleep(200);
		cout<<t<<"x"<<i<<"="<<r<<endl;
	}
    cout<<""<<endl;
	cout<<"desea ingresar otros datos[s/n]", cin>>resp;
	}while(resp=='s');
	getch();
}

void tablas()
{

int u=1,d=2,t=3,c=4,ci=5,s=6,si=7,o=8,n=9,di=10;
int r1,r2,r3,r4,r5,r6,r7,r8,r9,r10;
	
int i3;	
          
	
	system("COLOR 09");
system("cls");	
	for (i3=10; i3<=50; i3++)
{gotoxy(i3,1);cout<<"=-------TABLAS DE MULTIPLICAR---------="<<endl;
Sleep(20);}
for (i3=50; i3>=10; i3--)
{gotoxy(i3,1);cout<<"=-------TABLAS DE MULTIPLICAR---------="<<endl;
     Sleep(20);}
    
	
	for(int i=1,j=3;i<=10||j<i;i++,j++)
	{
		r1=u*i;
		r2=d*i;
		r3=t*i;
		r4=c*i;
		r5=ci*i;
	gotoxy(15,j);	cout<<u<<"x"<<i<<"="<<r1<<endl;
	gotoxy(30,j);	cout<<d<<"x"<<i<<"="<<r2<<endl;
	gotoxy(45,j);	cout<<t<<"x"<<i<<"="<<r3<<endl;
	gotoxy(60,j);	cout<<c<<"x"<<i<<"="<<r4<<endl;
	gotoxy(75,j);	cout<<ci<<"x"<<i<<"="<<r5<<endl;

Sleep(300);
	}
	
	for(int i1=1,j1=16;i1<=10||j1<i1;i1++,j1++)
	{
		r6=s*i1;
		r7=si*i1;
		r8=o*i1;
		r9=n*i1;
		r10=di*i1;
	gotoxy(15,j1);	cout<<s<<"x"<<i1<<"="<<r6<<endl;
	gotoxy(30,j1);	cout<<si<<"x"<<i1<<"="<<r7<<endl;
	gotoxy(45,j1);	cout<<o<<"x"<<i1<<"="<<r8<<endl;
	gotoxy(60,j1);	cout<<n<<"x"<<i1<<"="<<r9<<endl;
	gotoxy(75,j1);	cout<<di<<"x"<<i1<<"="<<r10<<endl;

Sleep(300);
}
	for(int i1=25,j1=i1;i1>=1||j1>16;i1--,j1--)
	{
	
	gotoxy(15,j1);	cout<<"                       "<<endl;
	gotoxy(30,j1);	cout<<"                       "<<endl;
	gotoxy(45,j1);	cout<<"                       "<<endl;
	gotoxy(60,j1);	cout<<"                       "<<endl;
	gotoxy(75,j1);	cout<<"                       "<<endl;

Sleep(100);
	}	
	
	for(int i=1,j=3;i<=10||j<i;i++,j++)
	{
		r1=u*i;
		r2=d*i;
		r3=t*i;
		r4=c*i;
		r5=ci*i;
	gotoxy(15,j);	cout<<u<<"x"<<i<<"="<<r1<<endl;
	gotoxy(30,j);	cout<<d<<"x"<<i<<"="<<r2<<endl;
	gotoxy(45,j);	cout<<t<<"x"<<i<<"="<<r3<<endl;
	gotoxy(60,j);	cout<<c<<"x"<<i<<"="<<r4<<endl;
	gotoxy(75,j);	cout<<ci<<"x"<<i<<"="<<r5<<endl;

Sleep(300);
	}
	
	for(int i1=1,j1=16;i1<=10||j1<i1;i1++,j1++)
	{
		r6=s*i1;
		r7=si*i1;
		r8=o*i1;
		r9=n*i1;
		r10=di*i1;
	gotoxy(15,j1);	cout<<s<<"x"<<i1<<"="<<r6<<endl;
	gotoxy(30,j1);	cout<<si<<"x"<<i1<<"="<<r7<<endl;
	gotoxy(45,j1);	cout<<o<<"x"<<i1<<"="<<r8<<endl;
	gotoxy(60,j1);	cout<<n<<"x"<<i1<<"="<<r9<<endl;
	gotoxy(75,j1);	cout<<di<<"x"<<i1<<"="<<r10<<endl;

Sleep(300);
}
  
	getch();
}


void mult(){


int a,b,r,c,d,l,m,res,res1;
int uni,dec,uni1,dec1,uni2,dec2,uni3,dec3;
char resp='s';
do{

	system("cls");
	gotoxy(25,2);cout<<("Multiplicacion   ");
gotoxy(25,12);cout<<("X");
gotoxy(24,13);cout<<("___________");
gotoxy(28,10);cout<<("");
cin>>a;
gotoxy(28,12);cout<<("");
cin>>b;
 r=a*b;


	uni = a%10; a /= 10;
	dec = a%10; a /= 10;
    uni1 = b%10; b /= 10;
	dec1 = b%10; b /= 10;

c=uni1*uni;
	uni2 = c%10; c /= 10;
	dec2 = c%10; c /= 10;
	res= c%10; c /= 10;
	
d=uni1*dec+dec2;
gotoxy(28,15);cout<<d<<uni2;

l=dec1*uni;
	uni3 = l%10; l /= 10;
	dec3 = l%10; l /= 10;
	
	res1 = l%10; l /= 10;
	
m=dec1*dec+dec3;
gotoxy(26,16);cout<<m<<uni3;
gotoxy(25,17);cout<<("____________");

gotoxy(26,18);cout<<r;
gotoxy(25,23);cout<<"desea ingresar otros datos[s/n]", cin>>resp;
		  }while(resp=='s');
getch();
}

void convertir(int numero, string &numeros, string aux){
	while(numero>0){
		if(numero%2==0){
			numeros=numeros+"0";
			}else {numeros=numeros+"1";
			}
			numero=numero/2;
		}
		for(int i=numeros.length()-1;i>0;i--){
			aux =aux + numeros.at(i);	
				}
	numeros=aux;
	}
	

void decimal (){
	int numero;
	char resp='s';
	string numeros=" ", aux;
	do{
	system("cls");
	cout<<"ingresar el numero decimal :",cin>>numero;
	convertir(numero,numeros,aux);
	istringstream(numeros)>>numero;
	cout<<"numero binario:"<<numero;
	cout<<""<<endl;
	cout<<"desea ingresar otro numero[s/n]", cin>>resp;
		  }while(resp=='s');
	
	
	getch();
}

void decahexa(int n){
	
	if(n<16){
		switch(n){
			case 10:
				cout<<"a";
				break;
				
				case 11:
				cout<<"b";
				break;
				case 12:
				cout<<"c";
				break;
				case 13:
				cout<<"d";
				break;
				case 14:
				cout<<"e";
				break;
				case 15:
				cout<<"f";
				break;
	default:
		cout<<n;
		break;
		
		}
	}else {
		decahexa(n/16);
		decahexa(n%16);
		
	}
}


void hexa(){
	int n;
	char resp='s';
	do{
	system("cls");	
	cout<<"ingrese un numero:",cin>>n;
	decahexa(n);
	cout<<""<<endl;
	cout<<"desea ingresar otro numero[s/n]", cin>>resp;
		  }while(resp=='s');
	getch();
	
}



void figurag(){
	int op;
	char resp='s';
	do{
	system("cls");
	cout<<"FIGURAS GEOMETRICAS"<<endl;
	cout<<"1. CIRCULO"<<endl;
	cout<<"2. TRIANGULO"<<endl;
	cout<<"3. RECTANGULO"<<endl;
	cout<<"4. CUADRADO"<<endl;
	cout<<"5. ROMBO"<<endl;
	cout<<"INGRESE EL NUMERO DE FIGURA A MOSTRAR: ",cin>>op;
	
	switch(op){
		
		case 1:
			system("cls");
			Sleep(200);
			gotoxy(40,10);cout<<"             *****         "<<endl;Sleep(200);
		    gotoxy(40,11);cout<<"        *****     *****    "<<endl;Sleep(200);
		    gotoxy(40,12);cout<<"        *****     *****    "<<endl;Sleep(200);
		    gotoxy(40,13);cout<<"        *****     *****    "<<endl;Sleep(200);
		    gotoxy(40,14);cout<<"        *****     *****    "<<endl;Sleep(200);
		    gotoxy(40,15);cout<<"        *****     *****    "<<endl;Sleep(200);
		    gotoxy(40,16);cout<<"        *****     *****    "<<endl;Sleep(200);
		    gotoxy(40,17);cout<<"        *****     *****    "<<endl;Sleep(200);
		   	gotoxy(40,18);cout<<"             *****         "<<endl;Sleep(200);
		   	gotoxy(40,20);cout<<"            CIRCULO        "<<endl;Sleep(200);
		   	
		    
			getch();
			break;
	    
	    case 2:
	    	system("cls");
	    	Sleep(200);
			gotoxy(30, 9);cout<<"                              *         "<<endl;Sleep(200);
			gotoxy(30,10);cout<<"                            *****         "<<endl;Sleep(200);
			gotoxy(30,11);cout<<"                        *****   *****    "<<endl;Sleep(200);
			gotoxy(30,12);cout<<"                      *****       ***** "<<endl;Sleep(200);
			gotoxy(30,13);cout<<"                    *****           *****  "<<endl;Sleep(200);
			gotoxy(30,14);cout<<"                  *****               *****  "<<endl;Sleep(200);
			gotoxy(30,15);cout<<"                *****                   *****   "<<endl;Sleep(200);
			gotoxy(30,16);cout<<"              *****                       *****   "<<endl;Sleep(200);
			gotoxy(30,17);cout<<"            *****                           *****  "<<endl;Sleep(200);
			gotoxy(30,18);cout<<"          *****                               *****   "<<endl;Sleep(200);
			gotoxy(30,19);cout<<"        *********************************************       "<<endl;Sleep(200);
			gotoxy(30,21);cout<<"                         TRIANGULO                            "<<endl;Sleep(200);
			getch();
			break;
			
		case 3:
			system("cls");
	    	Sleep(200);
			gotoxy(30, 9);cout<<"         ************************************** "<<endl;Sleep(200);
			gotoxy(30,10);cout<<"         *                                    * "<<endl;Sleep(200);
			gotoxy(30,11);cout<<"         *                                    * "<<endl;Sleep(200);
			gotoxy(30,12);cout<<"         *                                    * "<<endl;Sleep(200);
			gotoxy(30,13);cout<<"         *                                    * "<<endl;Sleep(200);
			gotoxy(30,14);cout<<"         *                                    * "<<endl;Sleep(200);
			gotoxy(30,15);cout<<"         ************************************** "<<endl;Sleep(200);
			gotoxy(30,17);cout<<"                        RECTANGULO                 "<<endl;Sleep(200);
			
			getch();
			break;
		
		case 4:
			system("cls");
	    	Sleep(200);
			gotoxy(30, 9);cout<<"         ************************************** "<<endl;Sleep(200);
			gotoxy(30,10);cout<<"         *                                    * "<<endl;Sleep(200);
			gotoxy(30,11);cout<<"         *                                    * "<<endl;Sleep(200);
			gotoxy(30,12);cout<<"         *                                    * "<<endl;Sleep(200);
			gotoxy(30,13);cout<<"         *                                    * "<<endl;Sleep(200);
			gotoxy(30,14);cout<<"         *                                    * "<<endl;Sleep(200);
			gotoxy(30,15);cout<<"         *                                    * "<<endl;Sleep(200);
			gotoxy(30,16);cout<<"         *                                    * "<<endl;Sleep(200);
			gotoxy(30,17);cout<<"         *                                    * "<<endl;Sleep(200);
			gotoxy(30,18);cout<<"         *                                    * "<<endl;Sleep(200);
			gotoxy(30,19);cout<<"         ************************************** "<<endl;Sleep(200);
			gotoxy(30,21);cout<<"                        CUADRADO                 "<<endl;Sleep(200);
			
			getch();
			break;
		
		case 5:
			system("cls");
				Sleep(200);
			gotoxy(30, 5);cout<<"                              *         "<<endl;Sleep(200);
			gotoxy(30,6 );cout<<"                            *****         "<<endl;Sleep(200);
			gotoxy(30,7 );cout<<"                        *****   *****    "<<endl;Sleep(200);
			gotoxy(30,8 );cout<<"                      *****       ***** "<<endl;Sleep(200);
			gotoxy(30,9 );cout<<"                    *****           *****  "<<endl;Sleep(200);
			gotoxy(30,10);cout<<"                  *****               *****  "<<endl;Sleep(200);
			gotoxy(30,11);cout<<"                *****                   *****   "<<endl;Sleep(200);
			gotoxy(30,12);cout<<"              *****                       *****   "<<endl;Sleep(200);
			gotoxy(30,13);cout<<"            *****                           *****  "<<endl;Sleep(200);
			gotoxy(30,14);cout<<"          *****                               *****   "<<endl;Sleep(200);
			gotoxy(30,15);cout<<"         *******************************************       "<<endl;Sleep(200);
			gotoxy(30,16);cout<<"          *****                               *****       "<<endl;Sleep(200);
			gotoxy(30,17);cout<<"            *****                            *****      "<<endl;Sleep(200);
			gotoxy(30,18);cout<<"              *****                       *****    "<<endl;Sleep(200);
			gotoxy(30,19);cout<<"                *****                   ***** "<<endl;Sleep(200);
			gotoxy(30,20);cout<<"                  *****               *****  "<<endl;Sleep(200);
			gotoxy(30,21);cout<<"                    *****           *****  "<<endl;Sleep(200);
			gotoxy(30,22);cout<<"                      *****       *****   "<<endl;Sleep(200);
			gotoxy(30,23);cout<<"                        *****   *****   "<<endl;Sleep(200);
			gotoxy(30,24);cout<<"                            *****  "<<endl;Sleep(200);
			gotoxy(30,25);cout<<"                              *  "<<endl;Sleep(200);
			gotoxy(30,26);cout<<"                            ROMBO                "<<endl;Sleep(200);
			getch();
			break;			
	}
	
gotoxy(30,27);cout<<"Ver otra figura geometrica [s/n]: ",cin>>resp;
}while(resp=='s');
	
	
	
	getch();
}

void punto()
{
	while(opcion!=' ')
	{
		system("cls");
		cout<<"___________Precione Espacio para salir_________"<<endl;
		cout<<"w=arriba"<<endl;
		cout<<"s=abajo"<<endl;
		cout<<"a=izquierda"<<endl;
		cout<<"d=derecha"<<endl;
		gotoxy(x,y);cout<<"*";
	opcion=getch();
	switch(opcion)
	{
		
		case 'w': y--;break;
		case 's':y++;break;
		case 'a': x--;break;
		case 'd': x++;break;
	}
	}




}

void cajero(){
	float saldo=5000;
		float c=100;
		float d=200;
		float t=300;
		float cu=400;
		float q=500;
		float s=600;
		float se=700;
		float o=800;
		float n=900;
		float ml=1000;
	int pin=1234;
	int op,op1;
	int pin1;
	char resp='s';
	


system("cls");
	gotoxy(36,3);cout<<"CAJERO AUTOMATICO"<<endl;
	gotoxy(36,10);cout<<"PIN DE PUEBRA ES 1234"<<endl;
	gotoxy(36,20);cout<<"INTRODUZACA SU PIN: ";cin>>pin1;
	
	if(pin==pin1){

	do{
	
	system("cls");
	gotoxy(36,3);cout<<"CAJERO AUTOMATICO"<<endl;
    gotoxy(36,4);cout<<"-----------------"<<endl;
    gotoxy(10,7);cout<<"1. CONSULTA DE SALDO"<<endl;
    gotoxy(60,7);cout<<"2. RETIRO DE EFECTIVO"<<endl;
    gotoxy(30,20);cout<<"INTRODUZACA SU OPCION: ";cin>>op;
    
    switch(op){
    	case 1: 
   system("cls");
                       gotoxy(25,3);cout<<"|      BANCO ANDREILIS    |"<<endl;
					   gotoxy(25,4);cout<<"|     4TA CALLE ANTIGUA   |"<<endl;
					   gotoxy(25,5);cout<<"|     SALDO DE LA CUENTA  |"<<endl;
					   gotoxy(25,6);cout<<"|                         |"<<endl;
					   gotoxy(25,7);cout<<"|                         |"<<endl;
					   gotoxy(25,8);cout<<"|                         |"<<endl;
					   gotoxy(25,9);cout<<"|                         |"<<endl;
					  gotoxy(25,10);cout<<"|                         |"<<endl;
					  gotoxy(25,11);
					  gotoxy(25,13);cout<<"|                         |"<<endl;
					  gotoxy(25,14);cout<<"|_________________________|"<<endl;  
  
   if(op1==1){
   	    if(saldo>=c){
		saldo-=c;
	 gotoxy(25,11);	cout<<" SALDO: "<<saldo<<endl;}
	 gotoxy(25,11);	cout<<" SALDO: "<<saldo<<endl;
		}else if(op1==2){
    	 if(saldo>=d){
		saldo-=d;
	 gotoxy(25,11);	cout<<" SALDO: "<<saldo<<endl;}
	 gotoxy(25,11);	cout<<" SALDO: "<<saldo<<endl;
    }else if(op1==3){
    	if(saldo>=t){
    	saldo-=t;
	 gotoxy(25,11);	cout<<" SALDO: "<<saldo<<endl;}
	 gotoxy(25,11);	cout<<" SALDO: "<<saldo<<endl;
		}else if(op1==4){
			if(saldo>=cu){
    	saldo-=cu;
	 gotoxy(25,11);	cout<<" SALDO: "<<saldo<<endl;}
	 gotoxy(25,11);	cout<<" SALDO: "<<saldo<<endl;
    }else if(op1==5){
    	if(saldo>=q){
    	saldo-=q;
	 gotoxy(25,11);	cout<<" SALDO: "<<saldo<<endl;}
	 gotoxy(25,11);	cout<<" SALDO: "<<saldo<<endl;
		}else if(op1==6){
			if(saldo>=s){
    	saldo-=s;
	 gotoxy(25,11);	cout<<" SALDO: "<<saldo<<endl;}
	 gotoxy(25,11);	cout<<" SALDO: "<<saldo<<endl;
    }else if(op1==7){
    	if(saldo>=se){
    	saldo-=se;
	 gotoxy(25,11);	cout<<" SALDO: "<<saldo<<endl;}
	 gotoxy(25,11);	cout<<" SALDO: "<<saldo<<endl;
		}else if(op1==8){
			if(saldo>=0){
    	saldo-=o;
	 gotoxy(25,11);	cout<<" SALDO: "<<saldo<<endl;}
	 gotoxy(25,11);	cout<<" SALDO: "<<saldo<<endl;
    }else if(op1==9){
    	if(saldo>=n){
    	saldo-=n;
	 gotoxy(25,11);	cout<<" SALDO: "<<saldo<<endl;}
	 gotoxy(25,11);	cout<<" SALDO: "<<saldo<<endl;
		}else if(op1==10){
			if(saldo>=ml){
    	saldo-=ml;
	 gotoxy(25,11);	cout<<" SALDO: "<<saldo<<endl;}
	 gotoxy(25,11);	cout<<" SALDO: "<<saldo<<endl;
    }else {
     gotoxy(25,11);	cout<<" SALDO: "<<saldo<<endl;
	}
    	getch();
    	break;
    	
    	
    	case 2: 
    	system("cls");
        
	
		gotoxy(10,4);cout<<"1) Q100"<<endl;
		gotoxy(10,8);cout<<"2) Q200"<<endl;
        gotoxy(10,12);cout<<"3) Q300"<<endl;
        gotoxy(10,16);cout<<"4) Q400"<<endl;
        gotoxy(10,20);cout<<"5) Q500"<<endl;
        gotoxy(70,4);cout<<"6) Q600"<<endl;
        gotoxy(70,8);cout<<"7) Q700"<<endl;
        gotoxy(70,12);cout<<"8) Q800"<<endl;
        gotoxy(70,16);cout<<"9) Q900"<<endl;
        gotoxy(70,20);cout<<"10) Q1000"<<endl;
        gotoxy(35,20);cout<<"INGRESE SU OPCION: ";cin>>op1;
        switch(op1){
        		   	
					   case 1:
        		   		system("cls");
        		   		
						   if(saldo>=c){
						   
        		   		Sleep(300);
        		   	gotoxy(35,15);cout<<"RETIRANDO"<<endl;
        		   	Sleep(400);
        		   	gotoxy(44,15);cout<<"."<<endl;
        		   	Sleep(600);
        		   	gotoxy(45,15);cout<<"."<<endl;
        		   	Sleep(800);
        		   	gotoxy(46,15);cout<<"."<<endl;
        		   	Sleep(900);
        		   	gotoxy(47,15);cout<<"."<<endl;
        		   	Sleep(1000);
        		   	gotoxy(48,15);cout<<"."<<endl;
        		   	system("cls");
        		   	Sleep(300);
					gotoxy(35,15);cout<<"EFECTIVO RETIRADO CON EXITO"<<endl;
        		   	Sleep(1000);
					   system("cls");
					    gotoxy(25,2);cout<<"_________________________"<<endl;
					   gotoxy(25,3);cout<<"|      BANCO ANDREILIS    |"<<endl;
					   gotoxy(25,4);cout<<"|     4TA CALLE ANTIGUA   |"<<endl;
					   gotoxy(25,5);cout<<"|     RESIVO DE EFECTIVO  |"<<endl;
					   gotoxy(25,6);cout<<"|                         |"<<endl;
					   gotoxy(25,7);cout<<"|                         |"<<endl;
					   gotoxy(25,8);cout<<"|                         |"<<endl;
					   gotoxy(25,9);cout<<"|                         |"<<endl;
					  gotoxy(25,10);cout<<"|                         |"<<endl;
					  gotoxy(25,11);cout<<"|Efectivo retirado: "<<c<<"   |"<<endl;
					  gotoxy(25,13);cout<<"|                         |"<<endl;
					  gotoxy(25,14);cout<<"|_________________________|"<<endl; 
					  }else {gotoxy(25,11);cout<<"SALDO ES MENOR A LA TRANSACCION"<<endl;}    		   	
       		getch();
        		break;
        		   	case 2:
        		   		system("cls");
        		   		if(saldo>=d){
        		   		Sleep(300);
        		   	gotoxy(35,15);cout<<"RETIRANDO"<<endl;
        		   	Sleep(400);
        		   	gotoxy(44,15);cout<<"."<<endl;
        		   	Sleep(600);
        		   	gotoxy(45,15);cout<<"."<<endl;
        		   	Sleep(800);
        		   	gotoxy(46,15);cout<<"."<<endl;
        		   	Sleep(900);
        		   	gotoxy(47,15);cout<<"."<<endl;
        		   	Sleep(1000);
        		   	gotoxy(48,15);cout<<"."<<endl;
        		   	system("cls");
        		   	Sleep(300);
					gotoxy(35,15);cout<<"EFECTIVO RETIRADO CON EXITO"<<endl;
        		   	Sleep(1000);
					   system("cls");
					    gotoxy(25,2);cout<<"_________________________"<<endl;
					   gotoxy(25,3);cout<<"|      BANCO ANDREILIS    |"<<endl;
					   gotoxy(25,4);cout<<"|     4TA CALLE ANTIGUA   |"<<endl;
					   gotoxy(25,5);cout<<"|     RESIVO DE EFECTIVO  |"<<endl;
					   gotoxy(25,6);cout<<"|                         |"<<endl;
					   gotoxy(25,7);cout<<"|                         |"<<endl;
					   gotoxy(25,8);cout<<"|                         |"<<endl;
					   gotoxy(25,9);cout<<"|                         |"<<endl;
					  gotoxy(25,10);cout<<"|                         |"<<endl;
					  gotoxy(25,11);cout<<"|Efectivo retirado: "<<d<<"   |"<<endl;
					  gotoxy(25,13);cout<<"|                         |"<<endl;
					  gotoxy(25,14);cout<<"|_________________________|"<<endl;  
					  }else {gotoxy(25,11);cout<<"SALDO ES MENOR A LA TRANSACCION"<<endl;}  
        		   	
        		getch();
        		break;
        		   	case 3:
        		   		system("cls");
        		   		
        		   		if(saldo>=t){
        		   		Sleep(300);
        		   	gotoxy(35,15);cout<<"RETIRANDO"<<endl;
        		   	Sleep(400);
        		   	gotoxy(44,15);cout<<"."<<endl;
        		   	Sleep(600);
        		   	gotoxy(45,15);cout<<"."<<endl;
        		   	Sleep(800);
        		   	gotoxy(46,15);cout<<"."<<endl;
        		   	Sleep(900);
        		   	gotoxy(47,15);cout<<"."<<endl;
        		   	Sleep(1000);
        		   	gotoxy(48,15);cout<<"."<<endl;
        		   	system("cls");
        		   	Sleep(300);
					gotoxy(35,15);cout<<"EFECTIVO RETIRADO CON EXITO"<<endl;
        		   	Sleep(1000);
					   system("cls");
					    gotoxy(25,2);cout<<"_________________________"<<endl;
					   gotoxy(25,3);cout<<"|      BANCO ANDREILIS    |"<<endl;
					   gotoxy(25,4);cout<<"|     4TA CALLE ANTIGUA   |"<<endl;
					   gotoxy(25,5);cout<<"|     RESIVO DE EFECTIVO  |"<<endl;
					   gotoxy(25,6);cout<<"|                         |"<<endl;
					   gotoxy(25,7);cout<<"|                         |"<<endl;
					   gotoxy(25,8);cout<<"|                         |"<<endl;
					   gotoxy(25,9);cout<<"|                         |"<<endl;
					  gotoxy(25,10);cout<<"|                         |"<<endl;
					  gotoxy(25,11);cout<<"|Efectivo retirado: "<<t<<"   |"<<endl;
					  gotoxy(25,13);cout<<"|                         |"<<endl;
					  gotoxy(25,14);cout<<"|_________________________|"<<endl;
					  }else {gotoxy(25,11);cout<<"SALDO ES MENOR A LA TRANSACCION"<<endl;}  
        		   		
        		getch();
        		break;
        		   	case 4:
        		   		system("cls");
        		   		if(saldo>=cu){
        		   		Sleep(300);
        		   	gotoxy(35,15);cout<<"RETIRANDO"<<endl;
        		   	Sleep(400);
        		   	gotoxy(44,15);cout<<"."<<endl;
        		   	Sleep(600);
        		   	gotoxy(45,15);cout<<"."<<endl;
        		   	Sleep(800);
        		   	gotoxy(46,15);cout<<"."<<endl;
        		   	Sleep(900);
        		   	gotoxy(47,15);cout<<"."<<endl;
        		   	Sleep(1000);
        		   	gotoxy(48,15);cout<<"."<<endl;
        		   	system("cls");
        		   	Sleep(300);
					gotoxy(35,15);cout<<"EFECTIVO RETIRADO CON EXITO"<<endl;
        		   	Sleep(1000);
					   system("cls");
					    gotoxy(25,2);cout<<"_________________________"<<endl;
					   gotoxy(25,3);cout<<"|      BANCO ANDREILIS    |"<<endl;
					   gotoxy(25,4);cout<<"|     4TA CALLE ANTIGUA   |"<<endl;
					   gotoxy(25,5);cout<<"|     RESIVO DE EFECTIVO  |"<<endl;
					   gotoxy(25,6);cout<<"|                         |"<<endl;
					   gotoxy(25,7);cout<<"|                         |"<<endl;
					   gotoxy(25,8);cout<<"|                         |"<<endl;
					   gotoxy(25,9);cout<<"|                         |"<<endl;
					  gotoxy(25,10);cout<<"|                         |"<<endl;
					  gotoxy(25,11);cout<<"|Efectivo retirado: "<<cu<<"   |"<<endl;
					  gotoxy(25,13);cout<<"|                         |"<<endl;
					  gotoxy(25,14);cout<<"|_________________________|"<<endl;
					  }else {gotoxy(25,11);cout<<"SALDO ES MENOR A LA TRANSACCION"<<endl;}
        		getch();
        		break;
        		   	case 5:
        		   		system("cls");
        		   		if(saldo>=q){
        		   		Sleep(300);
        		   	gotoxy(35,15);cout<<"RETIRANDO"<<endl;
        		   	Sleep(400);
        		   	gotoxy(44,15);cout<<"."<<endl;
        		   	Sleep(600);
        		   	gotoxy(45,15);cout<<"."<<endl;
        		   	Sleep(800);
        		   	gotoxy(46,15);cout<<"."<<endl;
        		   	Sleep(900);
        		   	gotoxy(47,15);cout<<"."<<endl;
        		   	Sleep(1000);
        		   	gotoxy(48,15);cout<<"."<<endl;
        		   	system("cls");
        		   	Sleep(300);
					gotoxy(35,15);cout<<"EFECTIVO RETIRADO CON EXITO"<<endl;
        		   	Sleep(1000);
					   system("cls");
					    gotoxy(25,2);cout<<"_________________________"<<endl;
					   gotoxy(25,3);cout<<"|      BANCO ANDREILIS    |"<<endl;
					   gotoxy(25,4);cout<<"|     4TA CALLE ANTIGUA   |"<<endl;
					   gotoxy(25,5);cout<<"|     RESIVO DE EFECTIVO  |"<<endl;
					   gotoxy(25,6);cout<<"|                         |"<<endl;
					   gotoxy(25,7);cout<<"|                         |"<<endl;
					   gotoxy(25,8);cout<<"|                         |"<<endl;
					   gotoxy(25,9);cout<<"|                         |"<<endl;
					  gotoxy(25,10);cout<<"|                         |"<<endl;
					  gotoxy(25,11);cout<<"|Efectivo retirado: "<<q<<"   |"<<endl;
					  gotoxy(25,13);cout<<"|                         |"<<endl;
					  gotoxy(25,14);cout<<"|_________________________|"<<endl;
					  }else {gotoxy(25,11);cout<<"SALDO ES MENOR A LA TRANSACCION"<<endl;}
        		getch();
        		break;
        		   	case 6:
        		   		system("cls");
        		   		if(saldo>=s){
        		   		Sleep(300);
        		   	gotoxy(35,15);cout<<"RETIRANDO"<<endl;
        		   	Sleep(400);
        		   	gotoxy(44,15);cout<<"."<<endl;
        		   	Sleep(600);
        		   	gotoxy(45,15);cout<<"."<<endl;
        		   	Sleep(800);
        		   	gotoxy(46,15);cout<<"."<<endl;
        		   	Sleep(900);
        		   	gotoxy(47,15);cout<<"."<<endl;
        		   	Sleep(1000);
        		   	gotoxy(48,15);cout<<"."<<endl;
        		   	system("cls");
        		   	Sleep(300);
					gotoxy(35,15);cout<<"EFECTIVO RETIRADO CON EXITO"<<endl;
        		   	Sleep(1000);
					   system("cls");
					    gotoxy(25,2);cout<<"_________________________"<<endl;
					   gotoxy(25,3);cout<<"|      BANCO ANDREILIS    |"<<endl;
					   gotoxy(25,4);cout<<"|     4TA CALLE ANTIGUA   |"<<endl;
					   gotoxy(25,5);cout<<"|     RESIVO DE EFECTIVO  |"<<endl;
					   gotoxy(25,6);cout<<"|                         |"<<endl;
					   gotoxy(25,7);cout<<"|                         |"<<endl;
					   gotoxy(25,8);cout<<"|                         |"<<endl;
					   gotoxy(25,9);cout<<"|                         |"<<endl;
					  gotoxy(25,10);cout<<"|                         |"<<endl;
					  gotoxy(25,11);cout<<"|Efectivo retirado: "<<s<<"   |"<<endl;
					  gotoxy(25,13);cout<<"|                         |"<<endl;
					  gotoxy(25,14);cout<<"|_________________________|"<<endl;
					  }else {gotoxy(25,11);cout<<"SALDO ES MENOR A LA TRANSACCION"<<endl;}
        		getch();
        		break;
        		   	case 7:
        		   		system("cls");
        		   	if(saldo>=se){	
        		   		Sleep(300);
        		   	gotoxy(35,15);cout<<"RETIRANDO"<<endl;
        		   	Sleep(400);
        		   	gotoxy(44,15);cout<<"."<<endl;
        		   	Sleep(600);
        		   	gotoxy(45,15);cout<<"."<<endl;
        		   	Sleep(800);
        		   	gotoxy(46,15);cout<<"."<<endl;
        		   	Sleep(900);
        		   	gotoxy(47,15);cout<<"."<<endl;
        		   	Sleep(1000);
        		   	gotoxy(48,15);cout<<"."<<endl;
        		   	system("cls");
        		   	Sleep(300);
					gotoxy(35,15);cout<<"EFECTIVO RETIRADO CON EXITO"<<endl;
        		   	Sleep(1000);
					   system("cls");
					    gotoxy(25,2);cout<<"_________________________"<<endl;
					   gotoxy(25,3);cout<<"|      BANCO ANDREILIS    |"<<endl;
					   gotoxy(25,4);cout<<"|     4TA CALLE ANTIGUA   |"<<endl;
					   gotoxy(25,5);cout<<"|     RESIVO DE EFECTIVO  |"<<endl;
					   gotoxy(25,6);cout<<"|                         |"<<endl;
					   gotoxy(25,7);cout<<"|                         |"<<endl;
					   gotoxy(25,8);cout<<"|                         |"<<endl;
					   gotoxy(25,9);cout<<"|                         |"<<endl;
					  gotoxy(25,10);cout<<"|                         |"<<endl;
					  gotoxy(25,11);cout<<"|Efectivo retirado: "<<se<<"   |"<<endl;
					  gotoxy(25,13);cout<<"|                         |"<<endl;
					  gotoxy(25,14);cout<<"|_________________________|"<<endl;
					  }else {gotoxy(25,11);cout<<"SALDO ES MENOR A LA TRANSACCION"<<endl;}
        		getch();
        		break;
        		   	case 8:
        		   		system("cls");
        		   		if(saldo>=o){
        		   		Sleep(300);
        		   	gotoxy(35,15);cout<<"RETIRANDO"<<endl;
        		   	Sleep(400);
        		   	gotoxy(44,15);cout<<"."<<endl;
        		   	Sleep(600);
        		   	gotoxy(45,15);cout<<"."<<endl;
        		   	Sleep(800);
        		   	gotoxy(46,15);cout<<"."<<endl;
        		   	Sleep(900);
        		   	gotoxy(47,15);cout<<"."<<endl;
        		   	Sleep(1000);
        		   	gotoxy(48,15);cout<<"."<<endl;
        		   	system("cls");
        		   	Sleep(300);
					gotoxy(35,15);cout<<"EFECTIVO RETIRADO CON EXITO"<<endl;
        		   	Sleep(1000);
					   system("cls");
					    gotoxy(25,2);cout<<"_________________________"<<endl;
					   gotoxy(25,3);cout<<"|      BANCO ANDREILIS    |"<<endl;
					   gotoxy(25,4);cout<<"|     4TA CALLE ANTIGUA   |"<<endl;
					   gotoxy(25,5);cout<<"|     RESIVO DE EFECTIVO  |"<<endl;
					   gotoxy(25,6);cout<<"|                         |"<<endl;
					   gotoxy(25,7);cout<<"|                         |"<<endl;
					   gotoxy(25,8);cout<<"|                         |"<<endl;
					   gotoxy(25,9);cout<<"|                         |"<<endl;
					  gotoxy(25,10);cout<<"|                         |"<<endl;
					  gotoxy(25,11);cout<<"|Efectivo retirado: "<<o<<"   |"<<endl;
					  gotoxy(25,13);cout<<"|                         |"<<endl;
					  gotoxy(25,14);cout<<"|_________________________|"<<endl;
					  }else {gotoxy(25,11);cout<<"SALDO ES MENOR A LA TRANSACCION"<<endl;}
        		getch();
        		break;
        		   	case 9:
        		   		system("cls");
        		   		if(saldo>=n){
        		   		Sleep(300);
        		   	gotoxy(35,15);cout<<"RETIRANDO"<<endl;
        		   	Sleep(400);
        		   	gotoxy(44,15);cout<<"."<<endl;
        		   	Sleep(600);
        		   	gotoxy(45,15);cout<<"."<<endl;
        		   	Sleep(800);
        		   	gotoxy(46,15);cout<<"."<<endl;
        		   	Sleep(900);
        		   	gotoxy(47,15);cout<<"."<<endl;
        		   	Sleep(1000);
        		   	gotoxy(48,15);cout<<"."<<endl;
        		   	system("cls");
        		   	Sleep(300);
					gotoxy(35,15);cout<<"EFECTIVO RETIRADO CON EXITO"<<endl;
        		   	Sleep(1000);
					   system("cls");
					    gotoxy(25,2);cout<<"_________________________"<<endl;
					   gotoxy(25,3);cout<<"|      BANCO ANDREILIS    |"<<endl;
					   gotoxy(25,4);cout<<"|     4TA CALLE ANTIGUA   |"<<endl;
					   gotoxy(25,5);cout<<"|     RESIVO DE EFECTIVO  |"<<endl;
					   gotoxy(25,6);cout<<"|                         |"<<endl;
					   gotoxy(25,7);cout<<"|                         |"<<endl;
					   gotoxy(25,8);cout<<"|                         |"<<endl;
					   gotoxy(25,9);cout<<"|                         |"<<endl;
					  gotoxy(25,10);cout<<"|                         |"<<endl;
					  gotoxy(25,11);cout<<"|Efectivo retirado: "<<n<<"   |"<<endl;
					  gotoxy(25,13);cout<<"|                         |"<<endl;
					  gotoxy(25,14);cout<<"|_________________________|"<<endl;
					  }else {gotoxy(25,11);cout<<"SALDO ES MENOR A LA TRANSACCION"<<endl;}
        		getch();
        		break;
        		case 10:
        			system("cls");
        		   		if(saldo>=ml){
        		   		Sleep(300);
        		   	gotoxy(35,15);cout<<"RETIRANDO"<<endl;
        		   	Sleep(400);
        		   	gotoxy(44,15);cout<<"."<<endl;
        		   	Sleep(600);
        		   	gotoxy(45,15);cout<<"."<<endl;
        		   	Sleep(800);
        		   	gotoxy(46,15);cout<<"."<<endl;
        		   	Sleep(900);
        		   	gotoxy(47,15);cout<<"."<<endl;
        		   	Sleep(1000);
        		   	gotoxy(48,15);cout<<"."<<endl;
        		   	system("cls");
        		   	Sleep(300);
					gotoxy(35,15);cout<<"EFECTIVO RETIRADO CON EXITO"<<endl;
        		   	Sleep(1000);
					   system("cls");
					    gotoxy(25,2);cout<<"_________________________"<<endl;
					   gotoxy(25,3);cout<<"|      BANCO ANDREILIS    |"<<endl;
					   gotoxy(25,4);cout<<"|     4TA CALLE ANTIGUA   |"<<endl;
					   gotoxy(25,5);cout<<"|     RESIVO DE EFECTIVO  |"<<endl;
					   gotoxy(25,6);cout<<"|                         |"<<endl;
					   gotoxy(25,7);cout<<"|                         |"<<endl;
					   gotoxy(25,8);cout<<"|                         |"<<endl;
					   gotoxy(25,9);cout<<"|                         |"<<endl;
					  gotoxy(25,10);cout<<"|                         |"<<endl;
					  gotoxy(25,11);cout<<"|Efectivo retirado: "<<ml<<"   |"<<endl;
					  gotoxy(25,13);cout<<"|                         |"<<endl;
					  gotoxy(25,14);cout<<"|_________________________|"<<endl;
					  }else {gotoxy(25,11);cout<<"SALDO ES MENOR A LA TRANSACCION"<<endl;}
        		getch();
        		break;
		}
           	
    	getch();
    	break;
	}
	gotoxy(25,20);cout<<"DESEA REALIZAR OTRA CONSULTA [s/n]: ",cin>>resp;
	}while(resp=='s');

	
}else{
gotoxy(34,22);cout<<"PIN INCORRECTO "<<endl;

}	
	
getch();	
	
}


void hipotenusa()
{
	
	float cat1, cat2,h;
	char resp='s';
	do{
	system("cls");
	cout<<"            -------calcular la hipotenusa--------"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
	cout<<"                         *                     "<<endl;
    cout<<"                         *  *                    "<<endl;
    cout<<"                         *    *                   "<<endl;
    cout<<"                         *      *               "<<endl;
    cout<<"                         *        *              "<<endl;
    cout<<"                         *          *            "<<endl;
    cout<<"                         *            *           "<<endl;
    cout<<"                         *              *        "<<endl;
    cout<<"                         *                *      "<<endl;
    cout<<"                         *                  *   "<<endl;
    cout<<"                         * * * * * * * * * * * "<<endl;
    
    
    
gotoxy(1,8);cout<<"ingrese el cateto 1: ",cin>>cat1;
gotoxy(20,15);cout<<"ingrese el cateto 2: ",cin>>cat2;
	h=sqrt(pow(cat1,2)+pow(cat2,2));
	
gotoxy(40,8);cout<<"la Hipotenusa es: "<<h<<endl;
cout<<endl;
Sleep(500);
gotoxy(1,20);	cout<<"desea ingresar otro numero[s/n]", cin>>resp;
}while(resp=='s');

getch();	
}


void sopa()

{

struct tipo_registro
{
 char nom[30];
 int pt;
};
const int LONG=100;
tipo_registro cons[LONG];
int cont=-1;

 int op, puntos, oportunidades;
 int pal1=0,pal2=0,pal3=0,pal4=0,pal5=0,pal6=0,pal7=0,pal8=0,pal9=0,pal10=0;
 char s[20];
 int aux;



 do{
    system("cls");
    system("color F3");
    gotoxy(35,6); printf("sopa de letras\n\n\n\n");
    gotoxy(20,8); printf("1. jugar");
    gotoxy(20,10); printf("2. instrucciones\n\n");
    gotoxy(20,12); printf("3. puntos\n\n");
    gotoxy(20,14); printf("4. salir\n\n");
    gotoxy(18,18); printf("presiones una teclas para seguir \n\n");
    gotoxy(57,18); do{scanf("%i", & op);}while(op<0||op>4);
    switch(op){


    case 1:
    int op1,i1,j2;
    system("cls");
    oportunidades=10;
    puntos=0;
    pal1=0;pal2=0;pal3=0;pal4=0;pal5=0;pal6=0;pal7=0;pal8=0;pal9=0;pal10=0;
   ++cont;


   gotoxy(20,20);cout<<"NOMBRE DEL JUGADOR: ";cin>>(cons[cont].nom);
   system("pause");

    do{
     system("cls");



      system("color B0");
     gotoxy(40,7);cout<<"SOPA DE LETRAS"<<endl;
     gotoxy(60,6);printf("puntaje: %i\n", puntos);
     gotoxy(20,6);printf("intentos restntes: %i\n", oportunidades);
               gotoxy(20,9); printf("| - - - - - - - - - - - - - - - - - - - - - - - - - -| \n");
               gotoxy(20,10);printf("| p a m u o m b m i k y o b r e b k n p a f t k u t r| \n");
               gotoxy(20,11);printf("| h e t o m o c a m a r o n y s q t i g r e e n m r t| \n");
               gotoxy(20,12);printf("| g u r a t l l e n y h j y f r d s k k b g t r y v u| \n");
               gotoxy(20,13);printf("| n m t r d t b y c d r o o a o j u b a j k l h k a i| \n");
               gotoxy(20,14);printf("| o o w j o r a l c a m e m v j u n l c b r y u i c p| \n");
               gotoxy(20,15);printf("| m n o f c o n e j o t y o i n n l e o n g s w r a u| \n");
               gotoxy(20,16);printf("| a r f s g s n y a d r w n g a b u m o n e w q s j o| \n");
               gotoxy(20,17);printf("| t g o m a m o n s e a n g e c a m e l l o i o a q z| \n");
               gotoxy(20,18);printf("| a u b d t e r v l o b o i e a r t i c u n o r t y u| \n");
               gotoxy(20,19);printf("| g a t m o n h w e r g a r u r u m p u m a t s e q d| \n");
               gotoxy(20,20);printf("| _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _| \n");
               gotoxy(20,21);printf("BUSCAR EL ANIMAL...");
               scanf("%s", & s);
               if(strcmp(s,"gato")==0&&pal1==0){
               gotoxy(20,22);printf("nombre del animal encontrado 1 punto \n");
               puntos =puntos+1;
               oportunidades=oportunidades-1;
               pal1=1;

               system("pause");
               }else if(strcmp(s,"perro")==0&&pal2==0){
               gotoxy(20,22);printf("nombre del animal encontrado 1 punto \n");
               puntos =puntos+1;
               oportunidades=oportunidades-1;
               pal2=1;
               system("pause");
               } else if(strcmp(s,"conejo")==0&&pal3==0){
               gotoxy(20,22);printf("nombre del animal encontrado 1 punto \n");
               puntos =puntos+1;
               oportunidades=oportunidades-1;
               pal3=1;
               system("pause");
               }else
               if(strcmp(s,"lobo")==0&&pal4==0){
               gotoxy(20,22);printf("nombre del animal encontrado 1 punto \n");
               puntos =puntos+1;
               oportunidades=oportunidades-1;
               pal4=1;
               system("pause");
               }else
               if(strcmp(s,"tigre")==0&&pal5==0){
               gotoxy(20,22);printf("nombre del animal encontrado 1 punto \n");
               puntos =puntos+1;
               oportunidades=oportunidades-1;
               pal5=1;
               system("pause");
               }else
               if(strcmp(s,"vaca")==0&&pal6==0){
               gotoxy(20,22);printf("nombre del animal encontrado 1 punto \n");
               puntos =puntos+1;
               oportunidades=oportunidades-1;
               pal6=1;
               system("pause");
               }else
               if(strcmp(s,"puma")==0&&pal7==0){
               gotoxy(20,22);printf("nombre del animal encontrado 1 punto \n");
               puntos =puntos+1;
               oportunidades=oportunidades-1;
               pal7=1;
               system("pause");
               }else
               if(strcmp(s,"tortuga")==0&&pal8==0){
               gotoxy(20,22);printf("nombre del animal encontrado 1 punto \n");
               puntos =puntos+1;
               oportunidades=oportunidades-1;
               pal8=1;
               system("pause");
               }else
               if(strcmp(s,"camello")==0&&pal9==0){
               gotoxy(20,22);printf("nombre del animal encontrado 1 punto \n");
               puntos =puntos+1;
               oportunidades=oportunidades-1;
               pal9=1;
               system("pause");
               }else
               if(strcmp(s,"leon")==0&&pal10==0){
               gotoxy(20,22);printf("nombre del animal encontrado 1 punto \n");
               puntos =puntos+1;
               oportunidades=oportunidades-1;
               pal10=1;
               system("pause");
               }else {
                   gotoxy(20,22);printf("\n\nIncorrecto. Vuelve a intentarlo!\n");
                   oportunidades=oportunidades-1;
                   system("pause");
                   }
                   }while(oportunidades >0);
                   system("cls");




                    gotoxy(35,19);printf("FIN DEL JUEGO");


                   gotoxy(35,20);printf("su puntaje es: %i\n", puntos);
                   cons[cont].pt=puntos;
                   gotoxy(25,12);system("pause");


                   break;

      case 2:
      system("cls");
      system("color E0");
      gotoxy(35,4); printf("instrucciones\n");
      gotoxy(10,6); printf("1.- Encutre los nombres de los animales . \n");
      gotoxy(10,8); printf("2.- Se sumaran 1 punto por cada palabra correcta,");
      gotoxy(12,9); printf("    de lo contrrio se restar los intentos");
      gotoxy(10,11);printf("3.- 10 nombres de animales en total");
      gotoxy(14,12);printf("     los cuales debe buscar.");
      gotoxy(10,14);printf("4.- cuando se acaben los intentos el juego finanlizara");
      gotoxy(10,15);printf( "   y obtendra el puntaje final.");
      gotoxy(10,18);system("pause");
      gotoxy(10,20);break;



case 3:
int i,j,j1;
system("cls");
system ("color D0");
gotoxy(35,4); printf("puntaje maximo es 10 \n");

for(i=0;i<cont;i++)
 {
  for(j=0;j<cont;j++)
  {
   if(cons[j].pt > cons[j+1].pt){
    aux=cons[j].pt;

    cons[j].pt=cons[j+1].pt;


    cons[j+1].pt=aux;

   }
  }
 }
    
    gotoxy(68,6);cout<<"JUEGOS RECIENTES"<<endl;
    gotoxy(60,8);cout<<"POSICION"<<endl;
    gotoxy(75,8);cout<<"PUNTEO"<<endl;
    gotoxy(85,8);cout<<"NOMBRE"<<endl;
for(i=0,j=10;i<=cont||j<=i;i++,j++)
{ j1=j-9;
gotoxy(63,j);cout<<j1<<"."<<endl;;}


 for(i=cont,j=10;i>=0||j<=i;i--,j++){
  

gotoxy(77,j);cout<<cons[i].pt<<endl;
gotoxy(85,j);cout<<cons[i].nom<<endl;


 }




gotoxy(10,18);system("pause");

gotoxy(10,20);break;
}
}while(op!=4);
}

void protector(){


int i;
int LS;
char p[100];
char resp='s';


system("COLOR 0E");
do{

system("cls");
cout<<"ingrese una palabra"<<endl;
cin>>p;

system("cls");




system("COLOR 09");
for (i=50; i>=10; i--)       //1
{gotoxy(i,1);cout<<p<<endl;
     Sleep(20); }

system("COLOR 04");
for (i=2; i<=29; i++)        //2
{gotoxy(10,i);cout<<p<<endl;
		Sleep(20);}

system("COLOR 02");
for (i=10; i<=50; i++)       //1
{gotoxy(i,29);cout<<p;
     Sleep(20);}

system("COLOR 0C");
for (i=29; i>=2; i--)      //2
{gotoxy(50,i);cout<<p<<endl;
		Sleep(20);}

system("COLOR 0F");
for (i=49; i>=10; i--)      //1
{gotoxy(i,2);cout<<p<<endl;
		Sleep(20);}

system("COLOR 0F");
for (i=11; i<=49; i++)      //1-
{gotoxy(i,2);cout<<"                 "<<endl;
		Sleep(20);}

system("COLOR 0C");
for (i=2; i<=29; i++)      //2-
{gotoxy(50,i);cout<<"               "<<endl;
		Sleep(20);}

system("COLOR 02");
for (i=50; i>=10; i--)       //1-
{gotoxy(i,29);cout<<"              "<<endl;
     Sleep(20);}

system("COLOR 04");
for (i=29; i>=2; i--)        //2-
{gotoxy(10,i);cout<<"             "<<endl;
		Sleep(20);}

system("COLOR 09");
for (i=10; i<=50; i++)       //1
{gotoxy(i,1);cout<<"              "<<endl;
     Sleep(20); }


system("cls");

      //TRES
system("COLOR 0B");
for (i=1; i<=30; i++)
{gotoxy(31,i);cout<<p<<"                   "<<p<<"                   "<<p<<endl;
		Sleep(20);}

for (i=30; i>=1; i--)
{gotoxy(31,i);cout<<"                                                            "<<endl;
		Sleep(20);}
      system("cls");
for (i=1; i<=30; i++)
{gotoxy(31,i);cout<<p<<"                   "<<p<<"                   "<<p<<endl;
		Sleep(20);}

for (i=30; i>=1; i--)
{gotoxy(31,i);cout<<"                                                            "<<endl;
		Sleep(20);}

      system("cls");


system("COLOR 02");      //CINCO
for (i=10; i<=50; i++)
{system("cls");gotoxy(i,12);cout<<p<<"=----------------="<<p<<endl;

     Sleep(20);}

      system("cls");

      //SEIS
system("COLOR 04");
for (i=50; i>=10; i--)
{system("cls");gotoxy(i,12);cout<<p<<"=----------------="<<p<<endl;
     Sleep(20);}

      system("cls");
       //SIETE
system("COLOR 0E");
for (i=2; i<=15; i++)        //2
{gotoxy(50,i);cout<<p<<endl;
		Sleep(20);}

for (i=15; i<=32; i++)
{gotoxy(i,15);cout<<p<<endl;
     Sleep(20);}

for (i=80; i>=65; i--)
{gotoxy(i,15);cout<<p<<endl;
     Sleep(20);}

for (i=33; i>=20; i--)        //2
{gotoxy(50,i);cout<<p<<endl;
		Sleep(20);}
      system("cls");

system("COLOR 01");
for (i=20; i<=33; i++)        //2
{gotoxy(50,i);cout<<p<<endl;
		Sleep(20);}

system("COLOR 02");
for (i=32; i>=15; i--)
{gotoxy(i,15);cout<<p<<endl;
     Sleep(20);}

system("COLOR 04");
for (i=65; i<=80; i++)
{gotoxy(i,15);cout<<p<<endl;
     Sleep(20);}

system("COLOR 0A");
for (i=15; i>=2; i--)        //2
{gotoxy(50,i);cout<<p<<endl;
		Sleep(20);}
      system("COLOR 0A");
for (i=2; i<=15; i++)        //2
{gotoxy(50,i);cout<<"       "<<endl;
		Sleep(20);}

                system("cls");

 LS++;

gotoxy(25,23);cout<<"desea ingresar otra palabra[s/n]", cin>>resp;
		

}while(resp=='s');
getch();
    
    }
void determinante(){
char resp='s';
int op;
int a,b,c,d,e,f,g,h,i,x,y,z,total;
do{
system("cls");
cout<<"CALCULAR EL DETERMINANTE"<<endl;
cout<<"1. DETERMINANTE 2X2"<<endl;
cout<<"2. DETERMINANTE 3X3"<<endl;
cout<<"INGRESE SU OPCION: ",cin>>op;

switch(op){
case 1:
	do{
	
	system("cls");
gotoxy(50,1);cout<<"DETERMINANTE DE 2X2"<<endl;
cout<<"  2X2  "<<endl;
cout<<"|a b |" <<endl;
cout<<"|c d |" <<endl;

gotoxy(8,6);cout<<"INGRESE LOS VALORES:"<<endl;
gotoxy(8,8);cout<<"a: ",cin>>a;
gotoxy(45,5);cout<<a<<endl;

gotoxy(8,9);cout<<"b: ",cin>>b;
gotoxy(50,5);cout<<b<<endl;

gotoxy(8,10);cout<<"c: ",cin>>c;
gotoxy(45,7);cout<<c<<endl;

gotoxy(8,11);cout<<"d: ",cin>>d;
gotoxy(50,7);cout<<d<<endl;


total=a*d-b*c;



if(total!=0)
{  gotoxy(45,15); cout<<"Determinante: "<<total;}
else{
  gotoxy(45,15);  cout<<"Error el det. da 0";
}

cout<<"\n";
gotoxy(35,17);cout<<"desea ingresar otros datos [s/n]: ",cin>>resp;
}while(resp=='s');
	
	break;

case 2:
do{
system("cls");
gotoxy(50,1);cout<<"DETERMINANTE DE 3X3"<<endl;
cout<<"  3X3  "<<endl;
cout<<"|a b c|" <<endl;
cout<<"|d e f|" <<endl;
cout<<"|g h i|" <<endl;
gotoxy(8,6);cout<<"INGRESE LOS VALORES:"<<endl;
gotoxy(8,8);cout<<"a: ",cin>>a;
gotoxy(45,5);cout<<a<<endl;

gotoxy(8,9);cout<<"b: ",cin>>b;
gotoxy(50,5);cout<<b<<endl;

gotoxy(8,10);cout<<"c: ",cin>>c;
gotoxy(55,5);cout<<c<<endl;

gotoxy(8,11);cout<<"d: ",cin>>d;
gotoxy(45,7);cout<<d<<endl;

gotoxy(8,12);cout<<"e: ",cin>>e;
gotoxy(50,7);cout<<e<<endl;

gotoxy(8,13);cout<<"f: ",cin>>f;
gotoxy(55,7);cout<<f<<endl;

gotoxy(8,14);cout<<"g: ",cin>>g;
gotoxy(45,9);cout<<g<<endl;

gotoxy(8,15);cout<<"h: ",cin>>h;
gotoxy(50,9);cout<<h<<endl;

gotoxy(8,16);cout<<"i: ",cin>>i;
gotoxy(55,9);cout<<i<<endl;

x=((e*i)-(h*f));
y=((d*i)-(g*f));
z=((d*h)-(g*e));

total=(+a*(x)-b*(y)+c*(z));

if(total!=0)
{  gotoxy(45,15); cout<<"Determinante: "<<total;}
else{
  gotoxy(45,15);  cout<<"Error el det. da 0";
}

cout<<"\n";
gotoxy(35,17);cout<<"desea ingresar otros datos [s/n]: ",cin>>resp;
}while(resp=='s');
break;

}
system("cls");
gotoxy(35,17);cout<<"regreserar al menu de los determinantes [s/n]: ",cin>>resp;
}while(resp=='s');
}

void ecuacion(){
char resp='s';
int op;
float  a,b,c,d,e,f,x,y,z,total;
float r1,r2,a1,b1,aux;

	do{
	
	system("cls");
gotoxy(50,1);cout<<"ECUACION DE 2 INCOGNITAS"<<endl;
cout<<"  2X2  "<<endl;
cout<<"|x+y=z |" <<endl;
cout<<"|x1+y1=z1|" <<endl;

gotoxy(8,6);cout<<"INGRESE LOS VALORES:"<<endl;
gotoxy(8,8);cout<<"x: ",cin>>a;
gotoxy(45,5);cout<<a<<"x"<<endl;

gotoxy(8,9);cout<<"y: ",cin>>b;
gotoxy(50,5);cout<<b<<"y"<<endl;

gotoxy(8,10);cout<<"z: ",cin>>c;
gotoxy(55,5);cout<<"="<<c<<endl;

gotoxy(8,11);cout<<"x1: ",cin>>d;
gotoxy(45,7);cout<<d<<"x"<<endl;

gotoxy(8,12);cout<<"y1: ",cin>>e;
gotoxy(50,7);cout<<e<<"y"<<endl;

gotoxy(8,13);cout<<"z1: ",cin>>f;
gotoxy(55,7);cout<<"="<<f<<endl;

z=((a*e)-(d*b));
y=((c*e)-(f*b));
x=((a*f)-(d*c));
r1=y/z;
r2=x/z;

 
  gotoxy(50,15);cout<<"x ="<<r1<<endl;
    gotoxy(50,16);cout<<"y ="<<r2<<endl;


cout<<"\n";
gotoxy(35,17);cout<<"desea ingresar otros datos [s/n]: ",cin>>resp;
}while(resp=='s');
}




int main()
{
int op;
do
{
	system("cls");
	system("color 07");
cout<<"            PROGRAMAS "<<endl;
cout<<"1. SUMA DIVISION RESTA Y MULTIPLICACION"<<endl;
cout<<"2. NUMERO PAR E IMPAR"<<endl;
cout<<"3. CONVERRSION DE LONGITUDES"<<endl;
cout<<"4. PALINDROMO"<<endl;
cout<<"5. NUMERO ARABIGOS A ROMANOS"<<endl;
cout<<"6. NUMEROS A LETRAS"<<endl;
cout<<"7. NUMEROS A LETRAS CON DECIMALES"<<endl;
cout<<"8. TABLA DE MULTIPLICAR"<<endl;
cout<<"9. TODAS LAS TABLAS DE MULTIPLICAR"<<endl;
cout<<"10. MULTIPLICACION DE FORMA GRAFICA"<<endl;
cout<<"11. NUMEROS DECIMALES A BINARIOS"<<endl;
cout<<"12. NUMEROS DECIMALES A HEXADECIMALES"<<endl;
cout<<"13. FIGURAS GEOMETRICAS"<<endl;
cout<<"14. PUNTO EN LA PANTALLA"<<endl;
cout<<"15. CAJERO AUTOMATICO"<<endl;
cout<<"16. HIPOTENUSA"<<endl;
cout<<"17. SOPA DE LETRAS"<<endl;
cout<<"18. PROTECTOR"<<endl;
cout<<"19. DETERMINATE  2X2 O 3X3"<<endl;
cout<<"20. ECUACION DE 2 INCOGNITAS"<<endl;
cout<<"21. SALIR"<<endl;
cout<<"ingrese su opcion"<<endl;
cin>>op;

switch(op)
{
 case 1:
 	suma();
 getch();
 break;

 case 2:
 	par();
 	
 getch();
 break;
 
 case 3:
 	conversion();
 getch();
 break;
 
 case 4:	
 palindromo();
 getch();
 break;
 
 case 5:
 	romanos();
 getch();
 break;
 
 case 6:
 	NumL();
 getch();
 break;
 
 case 7:
 	numerldec();
 getch();
 break;
 
 case 8:
 	tabla();
 getch();
 break;
 
 case 9:
 tablas();	
 getch();
 break;
 
 
 case 10:
 	mult();
 getch();
 break;
 
 case 11:
 decimal();
 getch();
 break;
 
 case 12:
 	hexa();
 getch();
 break;
 
 case 13:
 	figurag();
 getch();
 break;
 
 case 14:
 	punto();
 getch();
 break;
 
 case 15:
 	cajero();
 getch();
 break;
 
 case 16:
 	hipotenusa();
 getch();
 break;
 
 case 17:
 	sopa();
 getch();
 break;
 
 case 18:
 	protector();
 getch();
 break;
 
 case 19:
 	determinante();
 getch();
 break;
 
 case 20:
 	ecuacion();
 getch();
 break;
  
}

}while(op<=20);
getch();
}
