#ifndef DISCIPLINA_H_INCLUDED
#define DISCIPLINA_H_INCLUDED

#include "aluno.h"
#include <vector>
#include <string>

using namespace std;

class Disciplina{
    public:
        Disciplina(string, vector<double>, vector<double>, vector<double>, vector<double>, vector<double>, vector<double>, vector<double>, vector<double>, vector<double>, vector<double>, vector<double>, vector<double>);
        string getNomeDisciplina();
        double getMedia2023_2();
        double getMedia2023_1();
        double getMedia2022_2();
        double getMedia2022_1();
        double computeMediaDoPeriodo(vector<double>);
        double getMediaMovel_A();
        double getMediaMovel_A_Menos_Um();
        double getMelhoria();
        double getMediaDasMedias();

    private:
        string nomeDisciplina;
        vector <double> notas2023_2;
        vector <double> notas2023_1;
        vector <double> notas2022_2;
        vector <double> notas2022_1;
        double media2023_2;
        double media2023_1;
        double media2022_2;
        double media2022_1;
        double mediaMovel_A;
        double mediaMovel_A_Menos_Um;
        double melhoria;
        double mediaDasMedias;
};


#endif // DISCIPLINA_H_INCLUDED
