#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main () {
int kiekisstudentu, n;
  int studentai[99], pazymiai[99], suma[99];
  double vid[99], galutinis[99], egz[99], med[99];
  string vardas[99], pavarde[99];
  cout<<"Iveskite studentu skaiciu: ";
  cin>>kiekisstudentu;

  for(int i=0; i<kiekisstudentu; i++)
  {
    suma[i]=0;
  }
  for(int i=0; i<kiekisstudentu; i++)
  { cout<<"Vardas ir pavarde: ";
    cin>> vardas[i]>>pavarde[i];
    cout<<"Iveskite studento atliktu namu darbu skaiciu: ";
    cin>>n;
    for(int j=0; j<n; j++)
    { for (int k=0; k<10; k++)
      pazymiai[j]=rand()%10;
      suma[i]=suma[i]+pazymiai[j];
      if(pazymiai[j]>10 || pazymiai[j]<1|| pazymiai[j]!='A')
      {
        cout<<"Klaida"<<endl;
        break;
      }
    }
    for(int l=0; l<=1; l++)
    egz[i]=rand()%10;
    vid[i]=double(suma[i])/double(n);
    med[i]=double(vid[i])/2;
    galutinis[i]=0.4*vid[i]+0.6*egz[i];
  }

  cout<<setw(8)<<left<<"Vardas"<<'\t'<<setw(8)<<left<<"Pavarde"<<'\t'<<setw(10)<<left<<"Galutinis (Vid.)/Galutinis (Med.)"<<endl;
cout.fill('-');

cout.width(65);

cout<<"";

cout.fill(' ');

 cout<<" "<<endl;
  for(int i=0; i<kiekisstudentu; i++)
  {
    cout<<setw(8)<<right<<vardas[i]<<'\t'<<setw(7)<<right<<pavarde[i]<<'\t'<<setw(16)<<right<<setprecision(2)<<fixed<<galutinis[i]<<setw(16)<<right<<setprecision(2)<<fixed<<med[i]<<endl;
  }
  return 0;
}
