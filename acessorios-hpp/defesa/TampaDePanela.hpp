#ifndef TAMPADEPANELA
#define TAMPADEPANELA

#include "../../core-simulador-hpp/ArmaAtaque.hpp"
#include "../../core-simulador-hpp/ArmaDefesa.hpp"
class TampaDePanela : public ArmaDefesa
{
    public:
        TampaDePanela(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif