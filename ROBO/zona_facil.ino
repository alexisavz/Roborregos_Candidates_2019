/*void zona_facil(){
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
  delay(1000);

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
    delay(1000);
  }
  delay(5000);

  //Salir
  if(coordenada=='s'){
    avanzar();
  }
  else{
    girar_izquierda();
    avanzar();
  }
}*/
