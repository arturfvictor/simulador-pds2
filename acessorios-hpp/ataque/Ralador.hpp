#ifndef RALADOR
#define RALADOR

#include "../../core-simulador-hpp/ArmaAtaque.hpp"
class Ralador : public ArmaAtaque
{
    public:
        Ralador(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif