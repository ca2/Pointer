#include <iostream>

#include "TextPack.h"


int main()
{

   const char * psz = "Hello World!\n";

   text_pack textpack;

   textpack.m_psz = psz;

   print(textpack);

   print(&textpack);
    
}
