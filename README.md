
## Estendendo o [Python](https://www.python.org/doc/)

[![Codacy Badge](https://api.codacy.com/project/badge/Grade/f70050bbe97744c0ac5e798800e9d010)](https://www.codacy.com/app/Sphinxs/Extension?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=Sphinxs/Extension&amp;utm_campaign=Badge_Grade)

Um [modulo](http://turing.com.br/pydoc/2.7/tutorial/modules.html) ( [Lib](https://pt.wikipedia.org/wiki/Biblioteca_(computa%C3%A7%C3%A3o)) ) de *Hello, World !* em **C** estendido para Python :four_leaf_clover:


#### Execução

Para executar você pode estar rodando o script **build** ( Que constrói a App + Logs ), como mostrado abaixo :

`sudo su`

`./build.sh`

Ou pelo arquivo **setup** diretamente com o seguinte comando :

`python setup.py install`

Seja qual opção tenha escolhio, escolha uma opção de importação :

`from module import hey`

`import module`

`from module import *` # Não recomendada

#### Erro

Para tratar o erro de permissão na execução do script que gera toda a App, forneça
a permissão de execução rodando em seu terminal `chmod +x build.sh` ( Esteja no diretório do mesmo ).

### Alternativas

[Boost C ++](http://www.boost.org/doc/libs/1_39_0/libs/python/doc/index.html)

[C Python](http://cython.org/)

### Aprendizado

[Arquivo So e Dll](http://bit.ly/2sf6GME) ( Pt - Br )

[Extending Python with C or C ++](https://docs.python.org/2/extending/extending.html) ( En )

[Estendendo Python com C ++](https://imasters.com.br/linguagens/py/estendendo-python-com-c/?trace=1519021197&source=single) ( Pt - Br )

[Python modules in C](http://dan.iel.fm/posts/python-c-extensions/) ( En )

[Estendendo Python com C usando Boost](http://www.revistabw.com.br/revistabw/extendendo-python-com-c-usando-boost/) ( Pt - Br )

[Python extension programming with C](https://www.tutorialspoint.com/python/python_further_extensions.htm) ( En )
