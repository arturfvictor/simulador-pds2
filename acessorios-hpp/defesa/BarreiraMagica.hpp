#ifndef BARREIRAMAGICA
#define BARREIRAMAGICA

#include "../../core-simulador-hpp/ArmaAtaque.hpp"
#include "../../core-simulador-hpp/ArmaDefesa.hpp"
class BarreiraMagica : public ArmaDefesa
{
    public:
        BarreiraMagica(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif