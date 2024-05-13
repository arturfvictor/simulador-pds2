#ifndef GOHAN
#define GOHAN
#include "../core-simulador-hpp/Personagem.hpp"
class Gohan : public Personagem
{
    public:
        Gohan(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif