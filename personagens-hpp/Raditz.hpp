#ifndef RADITZ
#define RADITZ
#include "../core-simulador-hpp/Personagem.hpp"
class Raditz : public Personagem
{
    public:
        Raditz(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif