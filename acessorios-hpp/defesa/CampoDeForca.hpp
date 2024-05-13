#ifndef CAMPODEFORCA
#define CAMPODEFORCA

#include "../../core-simulador-hpp/ArmaAtaque.hpp"
#include "../../core-simulador-hpp/ArmaDefesa.hpp"
class CampoDeForca : public ArmaDefesa
{
    public:
        CampoDeForca(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif