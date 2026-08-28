/* Lógico: */

CREATE TABLE Caminhao (
    placa varchar2(7) PRIMARY KEY,
    volumeMax number(8,3),
    pesoMax number(8,3),
    nomeMotorista varchar2(20)
);

CREATE TABLE Encomenda (
    numero number(3),
    volume number(5,3),
    data date,
    peso number(5,3),
    descricao varchar2(100),
    valor number(5,3),
    fk_Caminhao_placa varchar2(7),
    horario date,
    rota varchar2(30),
    numero_viagem int,
    fk_Loja_codLoja number(2),
    fk_Armazem_codArmazem number(1),
    PRIMARY KEY (numero, numero_viagem)
);

CREATE TABLE Loja (
    nome varchar2(20),
    fk_contato_contato_PK varchar2(7),
    codLoja number(2) PRIMARY KEY,
    endereco varchar2(40)
);

CREATE TABLE Armazem (
    endereco varchar2(40),
    fk_contato_contato_PK varchar2(15),
    capacidade number(8,3),
    codArmazem number(1) PRIMARY KEY
);

CREATE TABLE contato (
    contato_PK varchar2(7) NOT NULL PRIMARY KEY,
    contato varchar2(15)
);

CREATE TABLE contato (
    contato_PK varchar2(15) NOT NULL PRIMARY KEY,
    contato varchar2(15)
);
 
ALTER TABLE Encomenda ADD CONSTRAINT FK_Encomenda_2
    FOREIGN KEY (fk_Caminhao_placa)
    REFERENCES Caminhao (placa)
    ON DELETE RESTRICT;
 
ALTER TABLE Encomenda ADD CONSTRAINT FK_Encomenda_3
    FOREIGN KEY (fk_Loja_codLoja)
    REFERENCES Loja (codLoja)
    ON DELETE CASCADE;
 
ALTER TABLE Encomenda ADD CONSTRAINT FK_Encomenda_4
    FOREIGN KEY (fk_Armazem_codArmazem)
    REFERENCES Armazem (codArmazem)
    ON DELETE CASCADE;
 
ALTER TABLE Loja ADD CONSTRAINT FK_Loja_2
    FOREIGN KEY (fk_contato_contato_PK)
    REFERENCES contato (contato_PK)
    ON DELETE NO ACTION;
 
ALTER TABLE Armazem ADD CONSTRAINT FK_Armazem_2
    FOREIGN KEY (fk_contato_contato_PK)
    REFERENCES contato (contato_PK)
    ON DELETE NO ACTION;