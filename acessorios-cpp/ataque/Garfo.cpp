#include "../../core-simulador-hpp/ArmaAtaque.hpp"
#include "../../acessorios-hpp/ataque/Garfo.hpp"

Garfo::Garfo(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Garfo::gerarForcaAtaque()
{
    return (maxForca * maxForca)/3 + 4;
}

string Garfo::gerarRuidoAtaque()
{
    return "fsh fsh!";
}
