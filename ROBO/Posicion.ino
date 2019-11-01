void ubicacion(char& direccion,char& coordenada,int& i,int& j){
  if (coordenada=='n'){
    norte(direccion,coordenada,i,j);
  }
  else if(coordenada=='s'){
    sur(direccion,coordenada,i,j);
  }
  else if(coordenada=='e'){
    este(direccion,coordenada,i,j);
  }
  else if(coordenada=='o'){
    oeste(direccion,coordenada,i,j);
  }
}
