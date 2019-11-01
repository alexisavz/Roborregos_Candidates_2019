void RGB_color(int red_pin_value, int green_pin_value, int blue_pin_value) {
  analogWrite(red_pin, red_pin_value);
  analogWrite(green_pin, green_pin_value);
  analogWrite(blue_pin, blue_pin_value);
}





void llena_matriz(int i, int j, char laberinto[4][3]){
  int r=0, g=0, b=0;
  prendeFoco();
  delay(75);
  checa_color_frente(r,g,b);
  if(r<30 && b<30 && g<30){
    laberinto[i][j]='w';  
  }
  else if(r<g && r<b){
    laberinto[i][j]='r';  
  }
  else if(g<r && g<b){
    laberinto[i][j]='g';  
  }
  else if (b<r && b<g){
    laberinto[i][j]='b';  
  }
}





void color_faltante(char laberinto[4][3]) {
  int R = 0;
  int G = 0;
  int B = 0;
  int r = 0;
  int g = 0;
  int b = 0;
  int z = 0;
  char cF='z';
  for(int i=0; i<4; i++){
    for(int j=0; j<3; j++){
      if(laberinto[i][j]=='z'){
        z++;
        }
      }
    }
  if(z==0){
    for(int i=0; i<4; i++){
      for(int j=0; j<3; j++){
        if(laberinto[i][j]=='r'){
          r++;
        }
        else if(laberinto[i][j]=='g'){
          g++;
        }
        else if(laberinto[i][j]=='b'){
          b++;
        }
      }  
    }
   if(g==4 && b==4 && r==3){
     cF='r';
   }
   if(g==4 && b==3 && r==4){
     cF='b';
   }
   if(g==3 && b==4 && r==4){
     cF='g';
   }
  }
  checa_color_frente(R,G,B);
  if(R<30 && G<30 && B<30){
    if(cF=='r'){
      RGB_color(255,0,0);
      delay(500);
      RGB_color(0,0,0);
    }
    if(cF=='g'){
      RGB_color(0,255,0);  
      delay(500);
      RGB_color(0,0,0);
    }  
    if(cF=='b'){
      RGB_color(0,0,255);
      delay(500);  
      RGB_color(0,0,0);
    }
  }
}





void prendeFoco(){
  int r=0;
  int g=0; 
  int b=0;

  checa_color_frente(r, g, b);
  /*if (r<30 && g<30 && b<30){
    RGB_color(255,0,255);
    delay(500);
    RGB_color(0,0,0);
    delay(500);  
  }  else*/ 
    if (r<30 && b<30 && g<30) {
    RGB_color(255,0,255);
    delay(500);
    RGB_color(0,0,0);
    delay(500);
    }
    else  if (r<g && r<b) {
    RGB_color(255, 0, 0);
    delay(500);
    RGB_color(0,0,0);
    delay(500);
  }
    else if (b<g && b<r) {
    RGB_color(0, 0, 255);
    delay(500);
    RGB_color(0,0,0);
    delay(500);
  }
   else{
    RGB_color(0,255,0);
    delay(500);
    RGB_color(0,0,0);
    delay(500); 
  }
  Serial.print("R: ");
  Serial.print(r);
  Serial.print("    G: ");
  Serial.print(g);
  Serial.print("    B: ");
  Serial.println(b);
  
}





void checa_color_frente(int& r, int& g, int& b) {
  digitalWrite(as2, LOW);
  digitalWrite(as3, LOW);
  r = pulseIn(aso, LOW);
  delay(10);

  digitalWrite(as2, HIGH);
  digitalWrite(as3, HIGH);
  g =  pulseIn(aso, LOW);
  delay(10);

  digitalWrite(as2, LOW);
  digitalWrite(as3, HIGH);
  b = pulseIn(aso, LOW);
  delay(10);

}





void checa_color_atras(int& r, int& g, int& b) {
  digitalWrite(bs2, LOW);
  digitalWrite(bs3, LOW);
  r = pulseIn(bso, LOW);
  delay(10);

  digitalWrite(bs2, HIGH);
  digitalWrite(bs3, HIGH);
  g =  pulseIn(bso, LOW);
  delay(10);

  digitalWrite(bs2, LOW);
  digitalWrite(bs3, HIGH);
  b = pulseIn(bso, LOW);
  delay(10);
}

void imprime_RGB(){
     int aR=0;
    int aG=0;
    int aB=0;
    int bR=0;
    int bG=0;
    int bB=0;
    checa_color_atras(bR, bG, bB);
    checa_color_frente(aR, aG, aB);
    Serial.print("Red1: ");
    Serial.print(aR);
    Serial.print("  Green1: ");
    Serial.print(aG);
    Serial.print("  Blue1: ");
    Serial.print(aB);
    Serial.print("      Red2: ");
    Serial.print(bR);
    Serial.print("  Green2: ");
    Serial.print(bG);
    Serial.print("  Blue2: ");
    Serial.println(bB);
}
