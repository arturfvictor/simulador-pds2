#ifndef GOKU
#define GOKU
#include "../core-simulador-hpp/Personagem.hpp"
class Goku : public Personagem
{
    public:
        Goku(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif