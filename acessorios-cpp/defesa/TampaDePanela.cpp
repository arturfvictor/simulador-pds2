#include "../../core-simulador-hpp/ArmaDefesa.hpp"
#include "../../acessorios-hpp/defesa/TampaDePanela.hpp"

TampaDePanela::TampaDePanela(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string TampaDePanela::getDescricaoArma() 
{
    return this->descricaoArma;
}

int TampaDePanela::getResistencia() 
{
    return this->resistencia + 1;
}