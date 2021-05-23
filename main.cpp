#include <iostream>
#include "consola/consola.h"
#include "persistencia/dto.h"

using namespace std;

int main(){
    consola c;
    c.saludo();
    persistencia p;
    p.Guardar();
    cin.get();
    return 0;
}
