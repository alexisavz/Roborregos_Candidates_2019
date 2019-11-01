void zona_B(){
  int aR=500;
  int aG=500;
  int aB=500;
  int bR=500;
  int bG=500;
  int bB=500;

    checa_color_frente(aR, aG, aB);
    checa_color_atras(bR, bG, bB);

   
    checa_color_frente(aR, aG, aB);
    checa_color_atras(bR, bG, bB);
    /*
    if(aR>100 && bR>100){
      analogWrite(llanta1F, 150);
      analogWrite(llanta1B, 0);
      analogWrite(llanta2F, 150);
      analogWrite(llanta2B, 0);
      analogWrite(llanta3F, 150);
      analogWrite(llanta3B, 0);
      analogWrite(llanta4F, 150);
      analogWrite(llanta4B, 0);
      delay(70);
      analogWrite(llanta1F, 0);
      analogWrite(llanta1B, 0);
      analogWrite(llanta2F, 0);
      analogWrite(llanta2B, 0);
      analogWrite(llanta3F, 0);
      analogWrite(llanta3B, 0);
      analogWrite(llanta4F, 0);
      analogWrite(llanta4B, 0);
      delay(10);
      }
    //GIRA IZQUIERDA, SENSOR DELANTERO DETECTA BLANCO  
      else if(aR<100 && bR>100){
        analogWrite(llanta1F, 100);
        analogWrite(llanta1B, 0);
        analogWrite(llanta2F, 100);
        analogWrite(llanta2B, 0);
        analogWrite(llanta3F, 255);
        analogWrite(llanta3B, 0);
        analogWrite(llanta4F, 255);
        analogWrite(llanta4B, 0);
      
        delay(70);
      
        analogWrite(llanta1F, 0);
        analogWrite(llanta1B, 0);
        analogWrite(llanta2F, 0);
        analogWrite(llanta2B, 0);
        analogWrite(llanta3F, 0);
        analogWrite(llanta3B, 0);
        analogWrite(llanta4F, 0);
        analogWrite(llanta4B, 0);
      
        delay(50);
      
    }
    //GIRA DERECHA SENSOR TRASERO DETECTA BLANCO
    else if(bR<100 && aR>100){
        analogWrite(llanta1F, 255);
        analogWrite(llanta1B, 0);
        analogWrite(llanta2F, 255);
        analogWrite(llanta2B, 0);
        analogWrite(llanta3F, 100);
        analogWrite(llanta3B, 0);
        analogWrite(llanta4F, 100);
        analogWrite(llanta4B, 0);
      
        delay(70);
      
        analogWrite(llanta1F, 0);
        analogWrite(llanta1B, 0);
        analogWrite(llanta2F, 0);
        analogWrite(llanta2B, 0);
        analogWrite(llanta3F, 0);
        analogWrite(llanta3B, 0);
        analogWrite(llanta4F, 0);
        analogWrite(llanta4B, 0);
      
        delay(50);
    } 
    else if(aR<100 && bR<100){
        analogWrite(llanta1F, 150);
        analogWrite(llanta1B, 0);
        analogWrite(llanta2F, 150);
        analogWrite(llanta2B, 0);
        analogWrite(llanta3F, 150);
        analogWrite(llanta3B, 0);
        analogWrite(llanta4F, 150);
        analogWrite(llanta4B, 0);
      
        delay(70);
      
        analogWrite(llanta1F, 0);
        analogWrite(llanta1B, 0);
        analogWrite(llanta2F, 0);
        analogWrite(llanta2B, 0);
        analogWrite(llanta3F, 0);
        analogWrite(llanta3B, 0);
        analogWrite(llanta4F, 0);
        analogWrite(llanta4B, 0);
      
        delay(50);
    }*/
    if(aR>100 && bR>100){
      analogWrite(llanta1F, 255);
      analogWrite(llanta1B, 0);
      analogWrite(llanta2F, 255);
      analogWrite(llanta2B, 0);
      analogWrite(llanta3F, 255);
      analogWrite(llanta3B, 0);
      analogWrite(llanta4F, 255);
      analogWrite(llanta4B, 0);
      delay(50);
      analogWrite(llanta1F, 0);
      analogWrite(llanta1B, 0);
      analogWrite(llanta2F, 0);
      analogWrite(llanta2B, 0);
      analogWrite(llanta3F, 0);
      analogWrite(llanta3B, 0);
      analogWrite(llanta4F, 0);
      analogWrite(llanta4B, 0);
      delay(5);
      }
    //SENSOR DELANTERO DETECTA BLANCO  
      else if(aR<100 && bR>100){
        analogWrite(llanta1F, 0);
        analogWrite(llanta1B, 255);
        analogWrite(llanta2F, 0);
        analogWrite(llanta2B, 255);
        analogWrite(llanta3F, 255);
        analogWrite(llanta3B, 0);
        analogWrite(llanta4F, 255);
        analogWrite(llanta4B, 0);
      
        delay(145);
      
        analogWrite(llanta1F, 195);
        analogWrite(llanta1B, 0);
        analogWrite(llanta2F, 195);
        analogWrite(llanta2B, 0);
        analogWrite(llanta3F, 195);
        analogWrite(llanta3B, 0);
        analogWrite(llanta4F, 195);
        analogWrite(llanta4B, 0);
      
        delay(30);

        analogWrite(llanta1F, 0);
        analogWrite(llanta1B, 0);
        analogWrite(llanta2F, 0);
        analogWrite(llanta2B, 0);
        analogWrite(llanta3F, 0);
        analogWrite(llanta3B, 0);
        analogWrite(llanta4F, 0);
        analogWrite(llanta4B, 0);
        delay(5);
      
    }
    //GIRA DERECHA SENSOR TRASERO DETECTA BLANCO
    else if(bR<100 && aR>100){
        analogWrite(llanta1F, 255);
        analogWrite(llanta1B, 0);
        analogWrite(llanta2F, 255);
        analogWrite(llanta2B, 0);
        analogWrite(llanta3F, 0);
        analogWrite(llanta3B, 255);
        analogWrite(llanta4F, 0);
        analogWrite(llanta4B, 255);
      
        delay(145);
      
        analogWrite(llanta1F, 195);
        analogWrite(llanta1B, 0);
        analogWrite(llanta2F, 195);
        analogWrite(llanta2B, 0);
        analogWrite(llanta3F, 195);
        analogWrite(llanta3B, 0);
        analogWrite(llanta4F, 195);
        analogWrite(llanta4B, 0);
      
        delay(30);

        analogWrite(llanta1F, 0);
        analogWrite(llanta1B, 0);
        analogWrite(llanta2F, 0);
        analogWrite(llanta2B, 0);
        analogWrite(llanta3F, 0);
        analogWrite(llanta3B, 0);
        analogWrite(llanta4F, 0);
        analogWrite(llanta4B, 0);
        delay(10);
    } 
    else if(aR<100 && bR<100){
      analogWrite(llanta1F, 255);
      analogWrite(llanta1B, 0);
      analogWrite(llanta2F, 255);
      analogWrite(llanta2B, 0);
      analogWrite(llanta3F, 255);
      analogWrite(llanta3B, 0);
      analogWrite(llanta4F, 255);
      analogWrite(llanta4B, 0);
      delay(30);
      analogWrite(llanta1F, 0);
      analogWrite(llanta1B, 0);
      analogWrite(llanta2F, 0);
      analogWrite(llanta2B, 0);
      analogWrite(llanta3F, 0);
      analogWrite(llanta3B, 0);
      analogWrite(llanta4F, 0);
      analogWrite(llanta4B, 0);
      delay(5);
    } 
  }
