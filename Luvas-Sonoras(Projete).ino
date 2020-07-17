//Valores Da teoria Da amostragem Do Tom1
/*DóTom1*/const byte Frq262 [39] = {128,148,169,188,206,221,234,244,251,255,255,252,245,235,223,207,190,171,150,129,108,88,68,51,35,22,11,4,0,0,3,9,19,31,46,64,83,103,124};
/*ReTom1*/const byte Frq294 [35] = {128,151,174,195,214,230,242,251,255,255,251,242,230,214,195,174,151,128,104,81,60,41,25,13,4,0,0,4,13,25,41,60,81,104,127};
/*MiTom1*/const byte Frq330 [31] = {128,154,179,202,222,238,249,255,255,250,240,225,205,183,158,132,105,80,56,36,19,8,1,0,4,13,28,47,69,93,119};
/*FáTom1*/const byte Frq349 [30] = {128,155,182,206,226,241,251,255,253,245,232,213,190,164,137,109,82,57,35,18,6,0,0,6,18,36,57,82,109,137};
/*SolTom1*/const byte Frq392 [27] = {128,159,188,214,234,248,255,254,245,230,208,181,151,120,89,60,36,17,4,0,2,13,30,53,81,111,143};
/*LáTom1*/const byte Frq440 [24] = {128,162,195,222,242,253,255,247,230,205,175,140,105,72,42,19,5,0,4,18,40,69,102,137}; 
/*SiTom1*/const byte Frq494 [21] = {128,167,202,230,249,255,250,233,206,171,132,93,57,28,8,0,4,19,45,79,118};
//Valores Da teoria Da amostragem Do Tom2
/*DóTom2*/const byte Frq523 [20] = {128,169,206,234,251,255,245,223,190,151,109,69,36,12,0,2,18,45,81,122};
/*ReTom2*/const byte Frq587 [18] = {128,174,214,242,255,251,230,195,152,105,61,26,5,0,12,40,80,126};
/*MiTom2*/const byte Frq659 [16] = {128,179,222,249,255,240,206,158,106,57,20,1,4,27,68,118};
/*FáTom2*/const byte Frq699 [15] = {128,182,226,251,253,231,190,136,81,35,6,0,19,58,110}; 
/*SolTom2*/const byte Frq784 [14] = {128,188,234,255,245,208,151,89,36,4,2,30,81,143};
/*LáTom2*/const byte Frq880 [13] = {128,195,242,255,230,175,105,42,5,4,40,102,172}; 
/*SiTom2*/const byte Frq988 [11] = {128,202,249,250,206,132,57,8,4,45,118};
//Nomeação Dos pinos 2 a 9, para Botões
#define Do 2
#define Re 3
#define Mi 4
#define Fa 5
#define Sol 6
#define La 7
#define Si 8
#define Agudo 9
//Nomeação Dos Pinos 30 a 37, para leds
#define LedDo 30
#define LedRe 31
#define LedMi 32
#define LedFa 33
#define LedSol 34
#define LedLa 35
#define LedSi 36
#define LedTom 37
void setup() {
 //Pinos Do PORT A
 pinMode(22, OUTPUT);
 pinMode(23, OUTPUT);
 pinMode(24, OUTPUT);
 pinMode(25, OUTPUT);
 pinMode(26, OUTPUT);
 pinMode(27, OUTPUT);
 pinMode(28, OUTPUT);
 pinMode(29, OUTPUT);
 //Especificando Botões com entrada
 pinMode(Do,INPUT_PULLUP);
 pinMode(Re,INPUT_PULLUP);
 pinMode(Mi,INPUT_PULLUP);
 pinMode(Fa,INPUT_PULLUP);
 pinMode(Sol,INPUT_PULLUP);
 pinMode(La,INPUT_PULLUP);
 pinMode(Si,INPUT_PULLUP);
 pinMode(Agudo,INPUT_PULLUP);
}
//Alteração De Tons
int NTom = 1;
//Índice
int i = 0;
void loop() {
  //i = a índice, que Ganha +1 Infinitamente até alguma condição faze-lo retorna a "x" ou para-la
  i++;
if(digitalRead(Agudo) == 0){
  NTom = 2;
}
else{
  NTom = 1;
}
  //Frequências Mais Graves estão Dentro Deste NTom
  if(NTom == 1){
  //Se Botão Do Dó For pressionado, a frequência De 262 Vai ser Reproduzida no fone e led que indica a nota Dó vai acender
  if(digitalRead(Do) == 0){
    PORTA = Frq262 [i];
    digitalWrite(LedDo,HIGH);
  //Se índice utrapassar ou chegar à 38, índice vai voltar a zero
  if( i >= 38){
    i = 0;
  }
  }
  //Se Botão Do Re For pressionado, a frequência De 294 Vai ser Reproduzida no fone e led que indica a nota Re vai acender
  if(digitalRead(Re) == 0){
    PORTA = Frq294 [i];
    digitalWrite(LedRe,HIGH);
  //Se índice utrapassar ou chegar à 34, índice vai voltar a zero
  if( i >= 34){
    i = 0;
  }
  }
  //Se Botão Do Mi For pressionado, a frequência De 330 Vai ser Reproduzida no fone e led que indica a nota Mi vai acender
  if(digitalRead(Mi) == 0){
    PORTA = Frq330 [i];
    digitalWrite(LedMi,HIGH);
  //Se índice utrapassar ou chegar à 30, índice vai voltar a zero
  if( i >= 30){
    i = 0;
  }
  }
  //Se Botão Do Fa For pressionado, a frequência De 349 Vai ser Reproduzida no fone e led que indica a nota Fa vai acender
  if(digitalRead(Fa) == 0){
    PORTA = Frq349 [i];
    digitalWrite(LedFa,HIGH);
  //Se índice utrapassar ou chegar à 29, índice vai voltar a zero 
  if( i >= 29){
    i = 0;
  }
  }
  //Se Botão Do Sol For pressionado, a frequência De 392 Vai ser Reproduzida no fone e led que indica a nota Sol vai acender
  if(digitalRead(Sol) == 0){
    PORTA = Frq392 [i];
    digitalWrite(LedSol,HIGH);
  //Se índice utrapassar ou chegar à 26, índice vai voltar a zero 
  if( i >= 26){
    i = 0;
  }
  }
  //Se Botão Do Lá For pressionado, a frequência De 442 Vai ser Reproduzida no fone e led que indica a nota Lá vai acender
  if(digitalRead(La) == 0){
    PORTA = Frq440 [i];
    delayMicroseconds(42);
  //Se índice utrapassar ou chegar à 23, índice vai voltar a zero 
  if( i >= 23){
    i = 0;
  }
  }
  //Se Botão Do Si For pressionado, a frequência De 494 Vai ser Reproduzida no fone e led que indica a nota Si vai acender
  if(digitalRead(Si) == 0){
    PORTA = Frq494 [i];
    delayMicroseconds(42);
    //Se índice utrapassar ou chegar à 20, índice vai voltar a zero 
  if( i >= 20){
    i = 0;
  }
  }
  } 
  //Frequências Mais Agudas estão Dentro Deste NTom
  if(NTom == 2){
  //Se Botão Do Dó For pressionado, a frequência De 523 Vai ser Reproduzida no fone e led que indica a nota Dó vai acender
  if(digitalRead(Do) == 0){
    PORTA = Frq523 [i];
    delayMicroseconds(42);
  //Se índice utrapassar ou chegar à 19, índice vai voltar a zero 
  if( i >= 19){
    i = 0;
  }
  }
  //Se Botão Do Re For pressionado, a frequência De 587 Vai ser Reproduzida no fone e led que indica a nota Re vai acender
  if(digitalRead(Re) == 0){
    PORTA = Frq587 [i];
    delayMicroseconds(42);
  //Se índice utrapassar ou chegar à 17, índice vai voltar a zero
  if( i >= 17){
    i = 0;
  }
  }
  //Se Botão Do Mi For pressionado, a frequência De 659 Vai ser Reproduzida no fone e led que indica a nota Mi vai acender
  if(digitalRead(Mi) == 0){
    PORTA = Frq659 [i];
    delayMicroseconds(42);
  //Se índice utrapassar ou chegar à 15, índice vai voltar a zero
  if( i >= 15){
    i = 0;
  }
  }
  //Se Botão Do Fa For pressionado, a frequência De 699 Vai ser Reproduzida no fone e led que indica a nota Fa vai acender
  if(digitalRead(Fa) == 0){
    PORTA = Frq699 [i];
    delayMicroseconds(42);
  //Se índice utrapassar ou chegar à 14, índice vai voltar a zero
  if( i >= 14){
    i = 0;
  }
  }
  //Se Botão Do Sol For pressionado, a frequência De 784 Vai ser Reproduzida no fone e led que indica a nota Sol vai acender
  if(digitalRead(Sol) == 0){
    PORTA = Frq784 [i];
    delayMicroseconds(42);
  //Se índice utrapassar ou chegar à 13, índice vai voltar a zero
  if( i >= 13){
    i = 0;
  }
  }
  //Se Botão Do Lá For pressionado, a frequência De 880 Vai ser Reproduzida no fone e led que indica a nota Lá vai acender
  if(digitalRead(La) == 0){
    PORTA = Frq880 [i];
    delayMicroseconds(42);
  //Se índice utrapassar ou chegar à 12, índice vai voltar a zero
  if( i >= 12){
    i = 0;
  }
  }
  //Se Botão Do Si For pressionado, à frequência De 988 Vai ser Reproduzida no fone e led que indica a nota Si vai acender
  if(digitalRead(Si) == 0){
    PORTA = Frq988 [i];
    delayMicroseconds(42);
    PORTA = Frq988 [i];
   //Se índice utrapassar ou chegar à 10, índice vai voltar a zero
  if( i >= 10){
    i = 0;
  }
  }
  }
