#include "../../core-simulador-hpp/ArmaDefesa.hpp"
#include "../../acessorios-hpp/defesa/MuroPortatil.hpp"

MuroPortatil::MuroPortatil(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string MuroPortatil::getDescricaoArma() 
{
    return this->descricaoArma;
}

int MuroPortatil::getResistencia() 
{
    return this->resistencia * 2 + 5;
}