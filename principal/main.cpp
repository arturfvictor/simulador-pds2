#include <iostream>
#include <string>

// Armas de ataque
#include "../acessorios-hpp/ataque/Rosa.hpp"
#include "../acessorios-hpp/ataque/Colher.hpp"
#include "../acessorios-hpp/ataque/ChaveDeRoda.hpp"
#include "../acessorios-hpp/ataque/Faca.hpp"
#include "../acessorios-hpp/ataque/Garfo.hpp"
#include "../acessorios-hpp/ataque/Ralador.hpp"
#include "../acessorios-hpp/ataque/TesouraSemPonta.hpp"

// Armas de defesa
#include "../acessorios-hpp/defesa/Escudo.hpp"
#include "../acessorios-hpp/defesa/Armadura.hpp"
#include "../acessorios-hpp/defesa/BarreiraMagica.hpp"
#include "../acessorios-hpp/defesa/CampoDeForca.hpp"
#include "../acessorios-hpp/defesa/MuroPortatil.hpp"
#include "../acessorios-hpp/defesa/TampaDePanela.hpp"

// Personagens
#include "../personagens-hpp/Chaves.hpp"
#include "../personagens-hpp/Goku.hpp"
#include "../personagens-hpp/Gohan.hpp"
#include "../personagens-hpp/Piccolo.hpp"
#include "../personagens-hpp/Raditz.hpp"
#include "../personagens-hpp/Vegeta.hpp"

// Core
#include "../core-simulador-hpp/Simulador.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* rosa  = new Rosa("Super Rosa Amarela",0,10);
    ArmaAtaque* colher = new Colher("Colher de Pata",0,50);
    ArmaAtaque* chaveDeRoda = new ChaveDeRoda("Chave de Roda Enferrujada",0,55);
    ArmaAtaque* faca = new Faca("Faca de pão",0,65);
    ArmaAtaque* garfo = new Garfo("Garfo sem dente",0,15);
    ArmaAtaque* ralador = new Ralador("Ralador grande",0,35);
    ArmaAtaque* tesouraSemPonta = new TesouraSemPonta("Tesoura sem ponta",0,10);

    ArmaDefesa* escudo = new Escudo("Latão", 1);
    ArmaDefesa* armadura = new Armadura("Armadura mole", 3);
    ArmaDefesa* barreiraMagica = new BarreiraMagica("Barreira Mágica", 10);
    ArmaDefesa* campoDeForca = new CampoDeForca("Campo de Força", 15);
    ArmaDefesa* muroPortatil = new MuroPortatil("Muro Portatil", 12);
    ArmaDefesa* tampaDePanela = new TampaDePanela("Tampa de Panela", 6);

    Personagem* chaves = new Chaves(1, "Chaves", 150, ralador, escudo);
    Personagem* goku = new Goku(2, "Goku", 350, colher, muroPortatil);
    Personagem* gohan = new Gohan(1, "Gohan", 200, chaveDeRoda, campoDeForca);
    Personagem* piccolo = new Piccolo(2, "Piccolo", 250, faca, barreiraMagica);
    Personagem* raditz = new Raditz(2, "Raditz", 300, garfo, tampaDePanela);
    Personagem* vegeta = new Vegeta(2, "Vegeta", 325, tesouraSemPonta, armadura);

    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(chaves, 1);
    simulador->adicionarPersonagem(goku, 2);
    simulador->adicionarPersonagem(gohan, 1);
    simulador->adicionarPersonagem(piccolo, 2);
    simulador->adicionarPersonagem(raditz, 1);
    simulador->adicionarPersonagem(vegeta, 2);
    
    simulador->iniciarSimulacao();

    return 0;
}