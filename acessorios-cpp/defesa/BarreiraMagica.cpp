#include "../../core-simulador-hpp/ArmaDefesa.hpp"
#include "../../acessorios-hpp/defesa/BarreiraMagica.hpp"

BarreiraMagica::BarreiraMagica(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string BarreiraMagica::getDescricaoArma() 
{
    return this->descricaoArma;
}

int BarreiraMagica::getResistencia() 
{
    return this->resistencia + 3;
}