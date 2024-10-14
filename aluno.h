#ifndef ALUNO_H_INCLUDED
#define ALUNO_H_INCLUDED

#include <vector>
#include <string>

using namespace std;

class Aluno{
    public:
        Aluno(vector<vector<double>>, string);
        vector<vector<double>> getNotas();
        string getNomeDoAluno();
        double getMelhoria();
        double getMediaAluno2023_2();

    private:
        vector<vector<double>> notas;
        string nomeDoAluno;
        double mediaAluno2023_2;
        double mediaAluno2023_1;
        double mediaAluno2022_2;
        double mediaAluno2022_1;
        double melhoria;
};

#endif // ALUNO_H_INCLUDED
