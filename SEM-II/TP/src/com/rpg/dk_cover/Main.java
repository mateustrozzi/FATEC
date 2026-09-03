package com.rpg.dk_cover;

public class Main {
    public static void main(String[] args) {
        Personagem p1 = new Personagem();
        p1.setNome("Kong");
        Personagem p2 = new Personagem();
        p2.setNome("Jacaré");
        p1.atacar(p2);




        Mensagem msg = new Mensagem();
        msg.exibir();
    }
}