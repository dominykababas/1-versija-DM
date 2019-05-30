#include "3pradzia.h"

void programa(){
     cout.fill('-');
     cout.width(71);
     cout<<" ";
     cout.fill(' ');
     cout<<" "<<endl;
     cout<<setw(8)<<right<<"Vardas"<<'\t'<<setw(8)<<left<<"Pavarde"<<'\t'<<setw(20)<<left<<"Galutinis (Vid.)"<<setw(10)<<left<<"Galutinis (Med.)"<<endl;
     cout.fill('-');
     cout.width(68);
     cout<<" ";
     cout.fill(' ');
     cout<<" "<<endl;

    string eilute;
    string pradzia;

    vector<studentas> studentai;
    ifstream file("kursiokai.txt"); //skaitysime duomenis iğ failo
    vector<string> vardas;

    getline(file, pradzia);

    while (getline(file, eilute))
    {
        istringstream iss(eilute); //panaudoju iss, kad faile esancias eilutes galeciau skaidyti dalimis

        studentas *naujasStudentas = new studentas();
        vector<int> pazymiai;
        int pazymys;

        iss >> naujasStudentas->vardas >> naujasStudentas->pavarde;    //nusiskaitau pradzia

        while (!iss.eof())
        {
            iss >> pazymys;                                            //pabaigiu skaityti likusius pazymius
            pazymiai.push_back(pazymys);
        }

        naujasStudentas->pazymiai = pazymiai;
        studentai.push_back(*naujasStudentas);
    };

while(!file.eof())
	{
		string line;
		getline(file, line);
		vardas.push_back(line);
	}
	sort(vardas.begin(), vardas.end());
    vector<string>::iterator iterator = vardas.begin();
	for(; iterator != vardas.end(); ++iterator)
         cout << *iterator <<endl; //iğruğiuojame pagal vardus

    for( vector<studentas>::const_iterator i = studentai.begin(); i != studentai.end(); ++i ){

        cout<<setw(8)<<right<<i->vardas<<'\t'<<setw(4)<<right<<i->pavarde;
        skaiciuoti(i->pazymiai);
        cout << endl; //issivedame tai kas buvo suskaiciuota ir iğruğiuota.
    }
     cout.fill('-');
     cout.width(68);
     cout<<" ";
     cout.fill(' ');
     cout<<" "<<endl;
     cout<<setw(20)<<left<<""<<"Studentu saraso pabaiga"<<endl;

    file.close();

    }
