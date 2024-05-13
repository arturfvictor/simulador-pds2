#include "../../core-simulador-hpp/ArmaDefesa.hpp"
#include "../../acessorios-hpp/defesa/CampoDeForca.hpp"

CampoDeForca::CampoDeForca(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string CampoDeForca::getDescricaoArma() 
{
    return this->descricaoArma;
}

int CampoDeForca::getResistencia() 
{
    return this->resistencia * 3 - 4;
}