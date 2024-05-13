#include "../../core-simulador-hpp/ArmaAtaque.hpp"
#include "../../acessorios-hpp/ataque/ChaveDeRoda.hpp"

ChaveDeRoda::ChaveDeRoda(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int ChaveDeRoda::gerarForcaAtaque()
{
    return (maxForca * 2) - (minForca + 1);
}

string ChaveDeRoda::gerarRuidoAtaque()
{
    return "pa pa!";
}
