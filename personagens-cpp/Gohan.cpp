#include "../personagens-hpp/Gohan.hpp"

Gohan::Gohan(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Gohan::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque() * 3 - 1;
}

int Gohan::criarDefesa()
{
    return armaDefesa->getResistencia() * 3 - 2;
}

string Gohan::pegarDescricao() 
{
    return "Masenkoo!";
}