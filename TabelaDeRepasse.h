#ifndef TABELADEREPASSE_H
#define TABELADEREPASSE_H


class TabelaDeRepasse
{
    public:
        TabelaDeRepasse();
        ~TabelaDeRepasse();
        bool mapear(int endereco, Roteador* adjacente);
        Roteador** getAdjacentes();
        int getQuantidadeDeAdjacentes();
        void setPadrao(Roteador* padrao);
        Roteador* getDestino(int endereco);
        void imprimir();

    protected:

    private:
};

#endif // TABELADEREPASSE_H
