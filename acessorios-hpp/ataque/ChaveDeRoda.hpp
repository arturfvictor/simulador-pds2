#ifndef CHAVEDERODA
#define CHAVEDERODA

#include "../../core-simulador-hpp/ArmaAtaque.hpp"
class ChaveDeRoda : public ArmaAtaque
{
    public:
        ChaveDeRoda(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif