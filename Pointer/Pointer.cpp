#include <iostream>

#include "TextPack.h"


int main()
{

   const char * psz = "Hello World!\n";

   text_pack pacote_de_texto;

   pacote_de_texto.m_psz = psz;

   print(pacote_de_texto);

   print(&pacote_de_texto);
    
}
