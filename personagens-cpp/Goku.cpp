#include "../personagens-hpp/Goku.hpp"

Goku::Goku(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Goku::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque() * 2 + 10;
}

int Goku::criarDefesa()
{
    return armaDefesa->getResistencia() * 2 + 10;
}

string Goku::pegarDescricao() 
{
    return "Kame-Hame-Haaaa!";
}