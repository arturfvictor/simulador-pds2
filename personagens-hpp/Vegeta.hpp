#ifndef VEGETA
#define VEGETA
#include "../core-simulador-hpp/Personagem.hpp"
class Vegeta : public Personagem
{
    public:
        Vegeta(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif