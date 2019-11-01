void zona_C(){
 int r1=0;
 int g1=0;
 int b1=0;
 int r2=0;
 int g2=0;
 int b2=0;
   
  while(sonarF.ping_cm()>23){
    checa_color_frente(r1,g1,b1);
    checa_color_atras(r2,g2,b2);
      if(r1>30 || r2>40){
        RGB_color(255,0,0);
        delay(400);
        RGB_color(0,0,0);
      }
      avanza_muy_poco();
  }

  girar_izquierda();
  
  while(sonarI.ping_cm()>25){
    checa_color_frente(r1,g1,b1);
    checa_color_atras(r2,g2,b2);
      if(r1>30 || r2>40){
        RGB_color(255,0,0);
        delay(400);
        RGB_color(0,0,0);
      }
      avanza_muy_poco();
  }
  
    if(r1<60 && g1>70){
    zona_D();
  }
  
  girar_derecha();

  while(sonarF.ping_cm()>7){
    checa_color_frente(r1,g1,b1);
    checa_color_atras(r2,g2,b2);
      if(r1>30 || r2>40){
        RGB_color(255,0,0);
        delay(400);
        RGB_color(0,0,0);
      }
      avanza_muy_poco;
  }
  
  girar_izquierda();
  
  while(sonarF.ping_cm()>7){
    checa_color_frente(r1,g1,b1);
    checa_color_atras(r2,g2,b2);
      if(r1>30 || r2>40){
        RGB_color(255,0,0);
        delay(400);
        RGB_color(0,0,0);
      }
      avanza_muy_poco();
  }
  

  if(r1<60 && g1>70){
    zona_D();
  }
  }
  
