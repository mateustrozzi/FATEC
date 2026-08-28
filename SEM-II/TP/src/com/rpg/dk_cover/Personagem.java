package com.rpg.dk_cover;

public class Personagem{
    private String nome;
    private String categoria; //vilão ou herói
    private String energia;
    private int vida;

    public void atacar(Personagem perAtacado){
        atacar(perAtacado);
    }
    public void perderVida(Personagem perPerdedor){
        //perde vida quando é atacado
    }
    public void receberVida(){
        //recebe vida do balão de vida
    }
    public void recolherItem(){
        //coleta de itens, bananas por exemplo
    }
}