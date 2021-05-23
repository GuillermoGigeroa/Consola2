#include <cstdio>
#include "dto.h"

bool persistencia::Guardar(){
    FILE *archivo;
    archivo = fopen("datos.gag025","wb");
    if(archivo == NULL){
        return false;
    }
    fwrite(this,sizeof(int),1,archivo);
    fclose(archivo);
    return true;
}

bool persistencia::Cargar(){
    FILE *archivo;
    archivo = fopen("datos.gag025","rb");
    if(archivo == NULL){
        return false;
    }
    fread(this,sizeof(int),1,archivo);
    fclose(archivo);
    return true;
}

