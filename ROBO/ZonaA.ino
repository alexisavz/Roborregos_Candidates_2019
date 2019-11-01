void zona_A(){
  
  bool blanco=false;
  
  delay(1000);
  avanzar();
  
  //Crear laberinto
  char laberinto[4][3];
  for(int i=0; i<4; i++){
    for(int j=0;j<3;j++){
      laberinto[i][j]='z';
      }
    }
    
  int i=3;
  int j=0;
  char coordenada='o';
  
  Serial.print(i);
  Serial.print(j);
  Serial.println(""); 
  Serial.print(coordenada);
  Serial.println(""); 
  delay(500);

  //Primer ciclo
  while(i!=0 || j!=2){
    llena_matriz(i,j,laberinto);
    char direccion =checa_direccion();
    if(direccion!='d'){
      ubicacion(direccion, coordenada, i, j);
      Serial.print(i);
      Serial.print(j);
      Serial.println(""); 
    }
    else{
      if(coordenada=='o'){
        coordenada='n';
      }
      else if(coordenada=='e'){
        coordenada='s';
      }
      else if(coordenada=='n'){
        coordenada='e';
      }
      else if(coordenada=='s'){
        coordenada='o';
      }
    }
    Serial.print(coordenada);
    Serial.println();
    delay(500);
  }
  delay(2000);
  
  llena_matriz(i,j,laberinto);
  
  //caso dificil
  if(laberinto[1][2]=='z'){
    girar_izquierda();
    avanzar();
    i=1;
    j=2;
    coordenada='e';
    while(i!=0 || j!=2){
    llena_matriz(i,j,laberinto);
    char direccion =checa_direccion();
    if(direccion!='d'){
      ubicacion(direccion, coordenada, i, j);
      Serial.print(i);
      Serial.print(j);
      Serial.println(""); 
    }
    else{
      if(coordenada=='o'){
        coordenada='n';
      }
      else if(coordenada=='e'){
        coordenada='s';
      }
      else if(coordenada=='n'){
        coordenada='e';
      }
      else if(coordenada=='s'){
        coordenada='o';
      }
    }
    Serial.print(coordenada);
    Serial.println();
    delay(500);
  }      
  }


  if (coordenada=='o'){
    girar_derecha();
    coordenada='n';
  }
  else if(coordenada=='s'){
    girar_derecha();
    girar_derecha();
    coordenada='n';
  }
  i=0;
  j=2;


  //Segundo ciclo
  while(i!=3 || j!=0){
    llena_matriz(i,j,laberinto);
    char direccion =checa_direccion();
    if(direccion!='d'){
      ubicacion(direccion, coordenada, i, j);
      Serial.println(""); 
    }
    else{
      if(coordenada=='o'){
        coordenada='n';
      }
      else if(coordenada=='e'){
        coordenada='s';
      }
      else if(coordenada=='n'){
        coordenada='e';
      }
      else if(coordenada=='s'){
        coordenada='o';
      }
    }
    
    delay(500);
    
  }


  
  //Conteo_z
  int num_z=0;
  for(int i=0; i<4; i++){
    for(int j=0;j<3;j++){
      if (laberinto[i][j]=='z'){
        num_z=num_z+1;
        Serial.print(laberinto[i][j]);
      }
      }
    }


    
  if (num_z>0){
    //Casos especiales
    if(sonarF.ping_cm()<5){
     girar_izquierda();
     avanzar();
     girar_derecha();
     avanzar();
     llena_matriz(2,1, laberinto);
     avanzar();
     llena_matriz(1,1, laberinto);
     girar_derecha();
     girar_derecha();
     color_faltante(laberinto);
     avanzar();
     color_faltante(laberinto);
     avanzar();
     girar_izquierda();
     avanzar();
     girar_izquierda();  
    }else{
     avanzar();
     girar_izquierda();
     avanzar();
     llena_matriz(2,1, laberinto);
     girar_derecha();
     avanzar();
     llena_matriz(1,1 ,laberinto);
     girar_izquierda();
     girar_izquierda();
     color_faltante(laberinto);
     avanzar();
     color_faltante(laberinto);
     girar_izquierda();
     avanzar();
     girar_derecha();
     avanzar();
     girar_derecha();
     girar_derecha();  
    }
  }
  else{//Ciclo 3
    if(coordenada=='e'){
      girar_derecha();
      girar_derecha();
      coordenada='o';
    }
    if(coordenada=='n'){
      girar_izquierda();
    }
    while(i!=0 || j!=2){
    char direccion =checa_direccion();
    if(direccion!='d'){
      ubicacion(direccion, coordenada, i, j);
      Serial.println(""); 
    }
    else{
      if(coordenada=='o'){
        coordenada='n';
      }
      else if(coordenada=='e'){
        coordenada='s';
      }
      else if(coordenada=='n'){
        coordenada='e';
      }
      else if(coordenada=='s'){
        coordenada='o';
      }
    }
    if(laberinto[i][j]=='w'){
      color_faltante(laberinto);
      blanco=true;
    }
    delay(500);
  }
  if (blanco==true){
    //Salir, ya está listo
    if(coordenada=='s'){
      avanzar();
    }
    else{
      girar_izquierda();
    }
  }
  else {//Ciclo 4
    while(i!=3 || j!=0){    
    char direccion =checa_direccion();
    if(direccion!='d'){
      ubicacion(direccion, coordenada, i, j);
      Serial.println(""); 
    }
    else{
      if(coordenada=='o'){
        coordenada='n';
      }
      else if(coordenada=='e'){
        coordenada='s';
      }
      else if(coordenada=='n'){
        coordenada='e';
      }
      else if(coordenada=='s'){
        coordenada='o';
      }
    }
    if(laberinto[i][j]=='w'){
      color_faltante(laberinto);
      blanco=true;
    }
    delay(500);
  }
  //Ciclo5
  while(i!=0 || j!=2){
    char direccion =checa_direccion();
    if(direccion!='d'){
      ubicacion(direccion, coordenada, i, j);
      Serial.println(""); 
    }
    else{
      if(coordenada=='o'){
        coordenada='n';
      }
      else if(coordenada=='e'){
        coordenada='s';
      }
      else if(coordenada=='n'){
        coordenada='e';
      }
      else if(coordenada=='s'){
        coordenada='o';
      }
    }
    delay(500);
  }
  if(coordenada=='s'){
    avanzar();
  }
  else{
    girar_izquierda();
    avanzar();
  }
  }
}
zona_B();
}
