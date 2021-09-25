#include "TextPack.h"
#include <stdio.h>


void print(text_pack * ppack)
{

   printf("%s,%s,%s,a complex function you want to reuse", 
      ppack->m_psz,
      ppack->m_psz,
      ppack->m_psz);

}


void print(text_pack & pack)
{

   print(&pack);

}