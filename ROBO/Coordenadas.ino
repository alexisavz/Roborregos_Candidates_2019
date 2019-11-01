int norte(char& direccion,char& coordenada,int& i,int& j){
  if (direccion=='f'){
    j=j-1;
    coordenada='n';
  }

  else if (direccion=='i'){
    i=i-1;
    coordenada='o';
  }

  else if (direccion=='d'){
    i=i+1;
    coordenada='e';
  }
  
}

int sur(char& direccion,char& coordenada, int& i, int& j){
  if (direccion=='f'){
    j=j+1;
    coordenada='s';
  }

  else if (direccion=='i'){
    i=i+1;
    coordenada='e';
  }

  else if (direccion=='d'){
    i=i-1;
    coordenada='o';
  }
  
}

int este(char& direccion,char& coordenada, int& i, int& j){
  if (direccion=='f'){
    i=i+1;
    coordenada='e';
  }

  else if (direccion=='i'){
    j=j-1;
    coordenada='n';
  }

  else if (direccion=='d'){
    j=j+1;
    coordenada=='s';
  }
  
}

int oeste(char& direccion,char& coordenada, int& i, int& j){
  if (direccion=='f'){
    i=i-1;
    coordenada='o';
  }

  else if (direccion=='i'){
    j=j+1;
    coordenada='s';
  }

  else if (direccion=='d'){
    j=j-1;
    coordenada='n';
  }
  
}
