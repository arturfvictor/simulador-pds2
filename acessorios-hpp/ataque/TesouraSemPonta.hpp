#ifndef TESOURASEMPONTA
#define TESOURASEMPONTA

#include "../../core-simulador-hpp/ArmaAtaque.hpp"
class TesouraSemPonta : public ArmaAtaque
{
    public:
        TesouraSemPonta(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif