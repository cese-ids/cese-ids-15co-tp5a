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

bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno) {
    int resultado;
    const char FORMATO[] = "{"
        "\"documento\":\"%s\","
        "\"apellidos\":\"%s\","
        "\"nombres\":\"%s\""
    "}";

    resultado = snprintf(cadena, espacio, FORMATO, 
             alumno->documento, alumno->apellidos, alumno->nombres);

    return (resultado >= 0);
}

bool AlejandroPermingeat(char* cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "PERMINGEAT",
        .nombres = "Alejandro",
        .documento = "99.999.999",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool EstebanVolentini(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "VOLENTINI",
        .nombres = "Esteban Daniel",
        .documento = "23.517.968",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool LeandroArrieta(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "ARRIETA",
        .nombres = "Leandro Ezequiel",
        .documento = "29.747.571",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool JuniorMonroy(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "MONROY",
        .nombres = "Junior Daniel",
        .documento = "95.888.327",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool CarlosMaffrand(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "MAFFRAND",
        .nombres = "Carlos",
        .documento = "30.840.267",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool GonzaloVaca(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "VACA",
        .nombres = "Gonzalo Nahuel",
        .documento = "31765068",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool MartinRios(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "RIOS",
        .nombres = "Martin Julian",
        .documento = "31.542.162",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool LucasZalazar(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "ZALAZAR",
        .nombres = "Lucas Emiliano",
        .documento = "35.506.506",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool JonathanCagua(char* cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "CAGUA",
        .nombres = "Jonathan",
        .documento = "34.868.666",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

 bool HernanGomezMolino(char * cadena, size_t espacio) {
       const struct alumno_s alumno = {
           .apellidos = "GOMEZ MOLINO",
           .nombres = "Hernan",
           .documento = "23.468.816",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool FernandoProkopiuk(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "PROKOPIUK",
        .nombres = "Fernando Andres",
        .documento = "34.868.467",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool MarcosDominguez(char* cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "DOMINGUEZ SHOCRON",
        .nombres = "Marcos Raul",
        .documento = "35.219.567",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}        

bool PabloMorzan(char* cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "MORZAN",
        .nombres = "Pablo Javier",
        .documento = "31.136.818",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool ArmandoSuhuan(char* cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "SUHUAN",
        .nombres = "Armando",
        .documento = "45577355",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

/*=====[Implementations of private functions]================================*/

/*=====[Implementations of private functions]================================*/
