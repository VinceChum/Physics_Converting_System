#include <iostream>
#include <math.h>
using namespace std;
void choose();

int main (){
	char choice;
	int pchoose=0;
	int numc=0, numl=0, numa=0, numv=0, numm=0, numy=0, nump=0, nume=0, numw=0, numt=0;
	long double cm=0, in=0, ft=0, m=0, yd=0, mile=0, km=0, nmile=0, pc=0, parsec=0, parsec1=0, m2=0, acre=0, galus=0, liter=0;
	long double galuk=0, l=0, g=0, kg=0, lb=0, oz=0, f=0, c=0, hp=0, kw=0, ms=0, kmh=0, atm=0, pa=0, mmhg=0, pa1=0, kc=0;
	long double pa2=0, li=0, kpa=0, kgf=0, j=0, j1=0, cal=0; 
	system ("cls");
	cout<< "\n***********************************************";
	cout<< "\n*******WELCOME To PHYSICS UNIT CONVERTER*******";
	cout<< "\n[1] Length";
	cout<< "\n[2] Area";
	cout<< "\n[3] Volume";
	cout<< "\n[4] Mass";
	cout<< "\n***********************************************";
	cout<< "\n[5] Velocity";
	cout<< "\n[6] Pressure";
	cout<< "\n[7] Energy";
	cout<< "\n[8] Power";
	cout<< "\n***********************************************";
	cout<< "\n[9] Temperature";
	cout<< "\n***********************************************";
	cout<< "\n[10] Exit";
	cout<< "\n***********************************************";

	cout<< "\nPick any number: ";
	cin>>numc;
	
	if (numc==1){
		l:
				system ("cls");
				cout<< "\n***********************************************";
				cout<< "\n******************LENGTH***********************";
				cout<< "\nChoose Your Conversion";
				cout<< "\n***********************************************";
				cout<< "\n[1] in->cm";
				cout<< "\n[2] cm->in";
				cout<< "\n[3] ft->m";
				cout<< "\n[4] m->ft";
				cout<< "\n[5] yd->m";
				cout<< "\n[6] m-yd";
				cout<< "\n[7] mile->km";
				cout<< "\n[8] km->mile";
				cout<< "\n[9] n mile->m";
				cout<< "\n[10] m->n mile";
				cout<< "\n[11] pc->km";
				cout<< "\n[12] km->pc";
				cout<< "\n***********************************************";
				cout<< "\nPick any number: ";
				cin>> numl;	
				if (numl==1){
					cout << "Input in: "; cin>>in;
					cm=in*2.54;
					cout<< "Cm: "<<cm;
				}
				else if (numl==2){
					cout << "Input cm: ";cin>>cm;
					in=cm/2.54;
					cout<< "In: "<<in;
				}
				else if (numl==3){
					cout << "Input ft: "; cin>>ft;
					m=ft/3.281;
					cout << "M: "<< m;
				}
				else if (numl==4){
					cout<< "Input m: "; cin>>m;
					ft=m*3.281;
					cout << "ft: "<<ft;
				}
				else if (numl==5){
					cout << "Input yd: "; cin>>yd;
					m=yd/1.094;
					cout << "m: "<<m;
				}
				else if (numl==6){
					cout << "Input m: ";cin>>m;
					yd=m*1.094;
					cout<< "yd: "<<yd;
				}
				else if (numl==7){
					cout << "Input mile: "; cin >>mile;
					km=mile*1.609;
					cout << "km: "<< km;
				}
				else if (numl==8){
					cout << "Input km: "; cin>>km;
					mile=km/1.609;
					cout << "mile: "<< mile;
				}
				else if (numl==9){
					cout << "Input Nautical mile: "; cin>>nmile;
					m=nmile*1852;
					cout << "m: "<<m;
				}
				else if (numl==10){
					cout << "Input m: "; cin >>m;
					nmile=m/1852;
					cout << "n mile: "<< nmile;
				}
				else if (numl==11){
					cout << "Input pc: "; cin>>pc;
					parsec=pow(10,13);
					km= pc*(parsec*3.086);
					cout << "km: "<<km;
				}
				else if (numl==12){
					cout << "Input km: "; cin>>km;
					parsec1=pow(10,-14);
					pc=km/(parsec1*3.241);
					cout << "pc: "<<pc;
									}
				else {
				cout<<"Invalid Input!";
				}
				choose ();
				cin>>pchoose;
				if (pchoose==1){
					goto l;
				}
				else if (pchoose==2){
					return main();
				}
				else if (pchoose==3){
				return 0;
				}
				}
	else if (numc==2){
		a:
				system ("cls");
				cout<< "\n***********************************************";
				cout<< "\n********************AREA***********************";
				cout<< "\nChoose Your Conversion";
				cout<< "\n***********************************************";
				cout<< "\n[1] acre-> m2";
				cout<< "\n[2] m2->acre";
				cout<< "\n***********************************************";
				cout<< "\nPick any number: ";
				cin >> numa;
				if (numa==1){
					cout << "Input acre: "; cin>>acre;
					m2=acre*4046.856;
					cout << "m2: "<< m2;
				}
				else if (numa==2){
					cout << "Input m2: "; cin>>m2;
					acre=m2/4046.856;
					cout<< "acre: "<< acre;
				}
				else {
					cout << "\nInvalid Input!";
				}
				choose ();
				cin>>pchoose;
				if (pchoose==1){
					goto a;
				}
				else if (pchoose==2){
					return main();
				}
				else if (pchoose==3){
				return 0;
				}
					}
	else if (numc==3){
		v:
		system ("cls");
				cout<< "\n***********************************************";
				cout<< "\n********************VOLUME*********************";
				cout<< "\nChoose Your Conversion";
				cout<< "\n***********************************************";
				cout<< "\n [1] gal(US)-> L";
				cout<< "\n [2] L->gal(US)";
				cout<< "\n [3] gal(UK)->L";
				cout<< "\n [4] L->gal(UK)";
				cout<< "\n***********************************************";
				cout<< "\nPick any number: ";
				cin>>numv;
				if (numv==1){
					cout << "Input gal(US): "; cin>>galus;
					liter=galus*3.785;
					cout<< "L: "<<liter;
				}
				else if (numv==2){
					cout<< "Input L:";  cin>>liter;
					galus=liter/3.785;
					cout<< "gal (US): "<<galus;
				}
				else if (numv==3){
					cout<< "Input gal(UK): "; cin>>galuk;
					l=galuk*4.546;
					cout<< "L: "<<l;
				}
				else if (numv==4){
					cout<< "L: "; cin>>l;
					galuk=l/4.546;
					cout<< "gal (UK): "<<galuk;
				}
				else {
					cout << "\nInvalid Input!";
				}
				choose ();
				cin>>pchoose;
				if (pchoose==1){
					goto v;
				}
				else if (pchoose==2){
					return main();
				}
				else if (pchoose==3){
				return 0;
				}
				
	}
	else if (numc==4){
		m:
				system ("cls");
				cout<< "\n***********************************************";
				cout<< "\n********************MASS***********************";
				cout<< "\nChoose Your Conversion";
				cout<< "\n***********************************************";
				cout<< "\n [1] oz->g";
				cout<< "\n [2] g->oz";
				cout<< "\n [3] lb->kg";
				cout<< "\n [4] kg->lb";
				cout<< "\n***********************************************";
				cout<< "\nPick any number: ";
				cin>>numm;
				if (numm==1){
					cout << "Input oz: "; cin>>oz;
					g=oz*28.35;
					cout<< "g: "<< g;
				}
				else if (numm==2){
					cout<< "Input g: "; cin>>g;
					oz=g/28.35;
					cout<< "oz: "<<oz;
				}
				else if (numm==3){
					cout<< "Input lb: "; cin>>lb;
					kg=lb/2.205;
					cout<< "kg: "<<kg;
				}
				else if (numm==4){
					cout<< "Input kg: "; cin>> kg;
					lb=kg*2.205;
					cout<< "lb: "<< lb;
				}
				else {
					cout << "\nInvalid Input!";
				}
				choose ();
				cin>>pchoose;
				if (pchoose==1){
					goto m;
				}
				else if (pchoose==2){
					return main();
				}
				else if (pchoose==3){
				return 0;
				}
	}
	else if (numc==5){
		y:
		system ("cls");
				cout<< "\n***********************************************";
				cout<< "\n******************VELOCITY*********************";
				cout<< "\nChoose Your Conversion";
				cout<< "\n***********************************************";
				cout<<" \n[1] km/h->m/s";
				cout<<" \n[2] m/s->km/h";
				cout<< "\n***********************************************";
				cout<< "\nPick any number: ";
				cin>>numy;
				if (numy==1){
					cout<< "Input km/h: "; cin>>kmh;
					ms=kmh/3.6;
					cout<< "m/s: "<<ms;
				}	
				else if (numy==2){
					cout << "Input m/s: "; cin>>ms;
					kmh=ms*3.6;
					cout << "km/h: "<<kmh;
				}
				else {
					cout << "\n Invalid Input!";
				}
				choose ();
				cin>>pchoose;
				if (pchoose==1){
					goto y;
				}
				else if (pchoose==2){
					return main();
				}
				else if (pchoose==3){
				return 0;
				}
	}
	else if (numc==6){
	p: 
	system ("cls");
				cout<< "\n***********************************************";
				cout<< "\n******************PRESSURE*********************";
				cout<< "\nChoose Your Conversion";
				cout<< "\n***********************************************";
				cout<< "\n [1] atm-> Pa";
				cout<< "\n [2] Pa->atm";
				cout<< "\n [3] mmHg->Pa";
				cout<< "\n [4] Pa->mmHg";
				cout<< "\n [5] kgf/cm2->Pa";
				cout<< "\n [6] Pa->kgf/cm2";
				cout<< "\n [7] lbf/inc2->kPa";
				cout<< "\n [8] kPa->lbf/in2";
				cout<< "\n***********************************************";
				cout<< "\nPick any number: ";
				cin>>nump;	
				if (nump==1){
					cout<< "Input atm: "; cin>>atm;
					pa=atm*101325;
					cout<< "Pa: "<<pa;
				}
				else if (nump==2){
					cout << "Input Pa: "; cin>>pa;
					atm=pa/101325;
					cout<< "atm: "<< atm;
				}
				else if (nump==3){
					cout<< "Input mmHg: "; cin>>mmhg;
					pa1=mmhg*133.322;
					cout<< "Pa: "<<pa1;
				}
				else if (nump==4){
					cout << "Input Pa: "; cin>>pa1;
					mmhg=pa1/133.322;
					cout<< "mmHg: "<<mmhg;
				}
				else if (nump==5){
					cout << "Input kgf/cm2: "; cin>>kc;
					pa2=kc*98066.5;
					cout << "Pa: "<<pa2;	
				}
				else if (nump==6){
					cout << "Input Pa: "; cin>>pa2;
					kc=pa2/98066.5;
					cout << "kgf/cm2: "<<kc;
				}
				else if (nump==7){
					cout << "Input lbf/inch2: "; cin>>li;
					kpa=li*6.895;
					cout << "kPa: "<<kpa;
				}
				else if (nump==8){
					cout << "Input kPa: "; cin>>kpa;
					li=kpa/6.895;
					cout << "lbf/inch2: "<<li;
				}
				else {
					cout << "\nInvalid Input!";
				}
				choose ();
				cin>>pchoose;
				if (pchoose==1){
					goto p;
				}
				else if (pchoose==2){
					return main();
				}
				else if (pchoose==3){
				return 0;
				}
}
	else if (numc==7){
		e: 
		system ("cls");
				cout<< "\n***********************************************";
				cout<< "\n******************ENERGY***********************";
				cout<< "\nChoose Your Conversion";
				cout<< "\n***********************************************";
				cout<< "\n [1] kgf.m->J";
				cout<< "\n [2] J->kgf.m";
				cout<< "\n [3] J->cal";
				cout<< "\n [4] cal->J";
				cout<< "\n***********************************************";
				cout<< "\nPick any number: ";
				cin>>nume;
				if (nume==1){
					cout << "Input kgf.m: "; cin>> kgf;
					j=kgf*9.80665;
					cout << "J: "<<j;
				}	
				else if (nume==2){
					cout << "Input J: "; cin>>j;
					kgf=j/9.80665;
					cout << "kgf.m :"<<kgf;
				}
				else if (nume==3){
					cout << "Input J: "; cin>>j1;
					cal=j1/4.1858;
					cout << "cal: "<<cal;
				}
				else if (nume==4){
					cout << "Input cal: "; cin>>cal;
					j1=cal*4.1858;
					cout << "J: "<<j1;
				}
				else {
					cout << "\nInvalid Input!";
				}
				choose ();
				cin>>pchoose;
				if (pchoose==1){
					goto e;
				}
				else if (pchoose==2){
					return main();
				}
				else if (pchoose==3){
				return 0;
				}
	}
	else if (numc==8){
		w:
		system ("cls");
				cout<< "\n***********************************************";
				cout<< "\n******************POWER************************";
				cout<< "\nChoose Your Conversion";
				cout<< "\n***********************************************";
				cout<< "\n [1] hp->KW";
				cout<< "\n [2] KW->hp";
				cout<< "\n***********************************************";
				cout<< "\nPick any number: ";
				cin>>numw;
				if (numw==1){
					cout << "Input hp: "; cin>>hp;
					kw=hp/ 1.341;
					cout<< "KW: "<<kw;
				}	
				else if (numw==2){
					cout << "Input KW: "; cin>>kw;
					hp=kw*1.341;
					cout << "hp: "<<hp; 
				}
				else {
					cout << "\nInvalid Input!";
				}
					choose ();
				cin>>pchoose;
				if (pchoose==1){
					goto w;
				}
				else if (pchoose==2){
					return main();
				}
				else if (pchoose==3){
				return 0;
				}
	}
	else if (numc==9){
		t:
		system ("cls");
				cout<< "\n***********************************************";
				cout<< "\n****************TEMPERATURE********************";
				cout<< "\nChoose Your Conversion";
				cout<< "\n***********************************************";
				cout<< "\n [1] F->C";
				cout<< "\n [2] C->F";
				cout<< "\n***********************************************";
				cout<< "\nPick any number: ";
				cin>>numt;
				if (numt==1){
					cout<< "Input F: "; cin>>f;
					c=(f-32)*(5/9);
					cout<< "C: "<<c;
				}
				else if (numt==2){
					cout<< "Input C: ";  cin>>c;
					f= (c*(9/5))+32;
					cout<< "F: "<< f;
				}
				else {
					cout << "\nInvalid Input!";
				}
				choose ();
				cin>>pchoose;
				if (pchoose==1){
					goto t;
				}
				else if (pchoose==2){
					return main();
				}
				else if (pchoose==3){
				return 0;
				}
				
				
}
else if (numc==10){
	return 0;
}
else {
	cout <<"\nInvalid Input!";
	cout << "\nDo you want to continue?[Y/N]";
	cout << "\nIf Y/y it will go back to main menu, else if return 0!";
	cout << "\n=>";
	cin>>choice;
	if (choice=='Y'||choice=='y'){
		return main();
	}
	else {
		return 0;
	}
}
}
void choose(){
		cout << "\n[1] Do another sample problem but same conversion.";
		cout << "\n[2] Go back to main menu.";
		cout << "\n[3] Exit.";
		cout << "\n=> ";
			
};



