#include "../../core-simulador-hpp/ArmaAtaque.hpp"
#include "../../acessorios-hpp/ataque/Faca.hpp"

Faca::Faca(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Faca::gerarForcaAtaque()
{
    return (maxForca * maxForca)/2;
}

string Faca::gerarRuidoAtaque()
{
    return "catchim catchim!";
}
