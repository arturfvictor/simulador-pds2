#include "../../core-simulador-hpp/ArmaAtaque.hpp"
#include "../../acessorios-hpp/ataque/Ralador.hpp"

Ralador::Ralador(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Ralador::gerarForcaAtaque()
{
    return (maxForca * minForca)/2 + 5;
}

string Ralador::gerarRuidoAtaque()
{
    return "rala meu fi!";
}
