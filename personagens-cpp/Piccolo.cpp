#include "../personagens-hpp/Piccolo.hpp"

Piccolo::Piccolo(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Piccolo::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque() * 1.2 + 4;
}

int Piccolo::criarDefesa()
{
    return armaDefesa->getResistencia() * 1.2 + 3;
}

string Piccolo::pegarDescricao() 
{
    return "Makankosappoooo!";
}