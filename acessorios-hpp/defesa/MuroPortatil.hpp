#ifndef MUROPORTATIL
#define MUROPORTATIL

#include "../../core-simulador-hpp/ArmaAtaque.hpp"
#include "../../core-simulador-hpp/ArmaDefesa.hpp"
class MuroPortatil : public ArmaDefesa
{
    public:
        MuroPortatil(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif