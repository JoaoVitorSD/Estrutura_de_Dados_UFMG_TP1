#include "cell.h"

class ListaEncadeada
{
public:
    ListaEncadeada();
    ~ListaEncadeada();
    void SetItem(Player item, int pos);
    void InsereInicio(Player *item);
    void InsereFinal(Player *item);
    void InsereOrdenado(Player *item);
    int compareString(std::string a, std::string b);
    Player * Pesquisa(Player *c);
    void Imprime();
    void Limpa();
    int tamanho;
    TurnCell *primeiro;
    TurnCell *ultimo;
    TurnCell *Posiciona(int pos, bool antes);
};