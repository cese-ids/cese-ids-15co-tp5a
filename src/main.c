/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/06/21
 */

/*=====[Inclusion of own header]=============================================*/

#include "alumnos.h"
#include <stdio.h>

/*=====[Inclusions of private function dependencies]=========================*/

/*=====[Definition macros of private constants]==============================*/

/*=====[Private function-like macros]========================================*/

/*=====[Definitions of private data types]===================================*/

/*=====[Definitions of external public global variables]=====================*/

/*=====[Definitions of public global variables]==============================*/

/*=====[Definitions of private global variables]=============================*/

/*=====[Prototypes (declarations) of private functions]======================*/

/*=====[Implementations of public functions]=================================*/

/*=====[Implementations of interrupt functions]==============================*/

/*=====[Implementations of private functions]================================*/

int main(int argc, char *argv[]) {
    char cadena[128];

    if (AlejandroPermingeat(cadena, sizeof(cadena))) {
        printf("Alumno: %s\r\n", cadena);
    } else {
        printf("No se pudo serializar el alumno\r\n");
    }

    if (EstebanVolentini(cadena, sizeof(cadena))) {
        printf("Alumno: %s\r\n", cadena);
    } else {
        printf("No se pudo serializar el alumno\r\n");
    }

    if (LeandroArrieta(cadena, sizeof(cadena))) {
            printf("Alumno: %s\r\n", cadena);
    } else {
        printf("No se pudo serializar el alumno\r\n");
    }
    
    if (JuniorMonroy(cadena, sizeof(cadena))) {
        printf("Alumno: %s\r\n", cadena);
    } else {
        printf("No se pudo serializar el alumno\r\n");
    }
    
    if (CarlosMaffrand(cadena, sizeof(cadena))) {
        printf("Alumno: %s\r\n", cadena);
    } else {
        printf("No se pudo serializar el alumno\r\n");
    }

    if (GonzaloVaca(cadena, sizeof(cadena))) {
        printf("Alumno: %s\r\n", cadena);
    } else {
        printf("No se pudo serializar el alumno\r\n");
    }

    if (MartinRios(cadena, sizeof(cadena))) {
        printf("Alumno: %s\r\n", cadena);
    } else {
        printf("No se pudo serializar el alumno\r\n");
    } 
    
    if (LucasZalazar(cadena, sizeof(cadena))) {
        printf("Alumno: %s\r\n", cadena);
    } else {
        printf("No se pudo serializar el alumno\r\n");
    }

    if (JonathanCagua(cadena, sizeof(cadena))) {
        printf("Alumno: %s\r\n", cadena);
    } else {
        printf("No se pudo serializar el alumno\r\n");
    }

    if (HernanGomezMolino(cadena, sizeof(cadena))) {
        printf("Alumno: %s\r\n", cadena);
    } else {
        printf("No se pudo serializar el alumno\r\n");
    }

    if (FernandoProkopiuk(cadena, sizeof(cadena))) {
        printf("Alumno: %s\r\n", cadena);
    } else {
        printf("No se pudo serializar el alumno\r\n");
    }
    
    if (PabloMorzan(cadena, sizeof(cadena))) {
        printf("Alumno: %s\r\n", cadena);
    } else {
        printf("No se pudo serializar el alumno\r\n");
    }

    if (MarcosDominguez(cadena, sizeof(cadena))) {
        printf("Alumno: %s\r\n", cadena);
    } else {
        printf("No se pudo serializar el alumno\r\n");
    }

    if (ArmandoSuhuan(cadena, sizeof(cadena))) {
        printf("Alumno: %s\r\n", cadena);
    } else {
        printf("No se pudo serializar el alumno\r\n");
    }
    return 0;
}
