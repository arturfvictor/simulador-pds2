#include "../../core-simulador-hpp/ArmaAtaque.hpp"
#include "../../acessorios-hpp/ataque/TesouraSemPonta.hpp"

TesouraSemPonta::TesouraSemPonta(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int TesouraSemPonta::gerarForcaAtaque()
{
    return minForca;
}

string TesouraSemPonta::gerarRuidoAtaque()
{
    return "shin shin!";
}
