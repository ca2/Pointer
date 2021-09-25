#pragma once



class static_text_pack_1024
{
public:

   char   sz[1024];

};

class text_pack
{
public:

   const char * m_psz;

};

void print(text_pack * ppack);
void print(text_pack & pack);