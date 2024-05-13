#include "../personagens-hpp/Vegeta.hpp"

Vegeta::Vegeta(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Vegeta::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque() * 1.5;
}

int Vegeta::criarDefesa()
{
    return armaDefesa->getResistencia() * 1.2;
}

string Vegeta::pegarDescricao() 
{
    return "Galic Gun!";
}