#include "../personagens-hpp/Raditz.hpp"

Raditz::Raditz(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Raditz::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque() * 0.8;
}

int Raditz::criarDefesa()
{
    return armaDefesa->getResistencia() * 0.8;
}

string Raditz::pegarDescricao() 
{
    return "Poder sem nomee!";
}