package com.rpg.dk_cover;

public class Personagem{
    private String nome;
    private String categoria; //supervilão, vilão ou herói
    private int energia;
    private int vida;

    public void atacar(Personagem perAtacado){
        System.out.println(this.nome + " atacou "+perAtacado.getNome());
    }

    public String getNome(){
        return this.nome;
    }
    public void setNome(String novoNome){
        this.nome = novoNome;
    }

    public int perderVida(Personagem perPerdedor){
        //perde vida quando é atacado
        return 0;
        
    }
    public int receberVida(){
        //recebe vida do balão de vida
        return vida;
    }
    public void recolherItem(){
        //coleta de itens, bananas por exemplo
    }

}