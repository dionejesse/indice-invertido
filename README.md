# indice-invertido
TP2 para disciplina Programação e Desenvolvimento de software 2, 2018/2.

Documentação TP2:

Introdução:

    O trabalho trata-se de um índice invertido composto por um Map e um set. 
    Para cada valor “Key” do map é atribuído os respectivos nomes dos arquivos. 
    Ou seja, associa-se à uma palavra os nomes dos arquivos que a contém. 
    Para a resolução do problema optamos por criar um laço para que os arquivos sejam passados não via parâmetro argc e argv, mas sim como uma variável filename. Sendo assim facilita a obtenção dos nomes dos arquivos – que serão usados no índice.

Funcionamento:

    A função OpenFile tem por objetivo abrir os arquivos de acordo com a variável filename que é passada como argumento. Após isto todas as   palavras vão sendo inseridas no set o que garante que não haverá palavras repetidas e, que estarão ordenadas. 

    No laço while para cada arquivo, lemos todas as palavras em seguida as inserimos em um set. Para então, com um laço e um iterator do tipo set, inserimos palavra por palavra no Map.  Sendo assim para cada palavra o valor da chave será o nome do arquivo que está dentro do laço naquele momento. Por fim limpamos o set para que documentos não tenham palavras que não deveriam ter.

    No final adicionamos uma pesquisa simples que apenas imprime na tela o nome dos arquivos referentes à palavra pesquisada.

Conclusão:

    Certo de que o tp não abarca todo o conteúdo abrangível pelo tema, focamos na parte do algoritmo e estruturas de dados. Desta maneira podemos ter uma visão mais ampla daquilo que se pode fazer com a STL.
