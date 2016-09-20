
#include <iostream>
#include <string>
using namespace std;


const double moms = 1.25;

class Vare{
public:
  Vare(const string &varenavn, const int &varenr, double pris);
  string finnNavn() const;
  int finnVarenr() const;
  double finnPrisPrEnhet () const;
  void settPris(double nyPris);
  double finnPrisUtenMoms(int antall) const;
  double finnPrisMedMoms(int antall) const;
  
private:
  string varenavn;
  int varenr;
  double pris;  
};



//Implementasjon av klassen Vare

Vare::Vare(const string &startVareNavn, const int &startVarenrn, double startPris) :
  varenavn(startVareNavn), varenr(startVarenrn), pris(startPris){}


string Vare::finnNavn() const {
  return varenavn;
}

int Vare::finnVarenr() const{
  return varenr;
}

double Vare::finnPrisPrEnhet() const{
  return pris;
}

void Vare::settPris(double nyPris){
  pris = nyPris;  
}

double Vare::finnPrisUtenMoms(int antall) const{
  return pris * antall;
}

double Vare::finnPrisMedMoms(int antall) const{
  return pris * antall * moms;
}
