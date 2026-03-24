#!/bin/bash

echo "Renomeie o texto que contenha os links para conversa.txt"
echo "Será criada uma pasta com o nome 'baixadas'"
read -p "Pressione [ENTER] para iniciar:"

if [ ! -f "conversa.txt" ];then
    echo "Erro! Arquivo 'conversa.txt' não encontrado!"
    exit 1
fi

echo "Limpando o texto e extraindo links..."
#sed 's/.*: //' conversa.txt > links.txt
grep -o 'https\?://[^ ]*' conversa.txt > links.txt

echo "Criando o container para download..."
mkdir baixadas

echo "Iniciando o download de $(wc -l < links.txt) links..."

#comando yt-dlp
# -x --> para download
# --audio-format mp3 --> para conversão em mp3
# --audio-quality --> taxa de bits da música
# -o "%(title)s.%(ext)s" --> para deixar o título do vídeo como título da música, descartando o ID
# -P baixadas --> nome da pasta container
# --ignore-errors --> o nome já diz, pode ser usado o -i
# -a --> para usar a lista de links
yt-dlp -x --audio-format mp3 --audio-quality 128K -o "%(title)s.%(ext)s" -P baixadas --ignore-errors -a links.txt
clear
rm links.txt
read -p "Processo finalizado! Pressione [ENTER] para terminar:"

