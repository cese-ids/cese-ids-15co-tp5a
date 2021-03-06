/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/06/21
 */

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef _ALUMNOS_H_
#define _ALUMNOS_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdbool.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/

typedef struct alumno_s {
    char apellidos[30];
    char nombres[30];
    char documento[11];
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

/*=====[Prototypes (declarations) of public functions]=======================*/

bool HernanGomezMolino(char * cadena, size_t espacio);

bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);

bool AlejandroPermingeat(char * cadena, size_t espacio);

bool EstebanVolentini(char * cadena, size_t espacio);

bool LeandroArrieta(char * cadena, size_t espacio);

bool CarlosMaffrand(char * cadena, size_t espacio);

bool GonzaloVaca(char * cadena, size_t espacio);

bool MartinRios(char * cadena, size_t espacio);

bool LucasZalazar(char * cadena, size_t espacio);

bool JonathanCagua(char * cadena, size_t espacio);

bool JuniorMonroy(char * cadena, size_t espacio);

bool FernandoProkopiuk(char * cadena, size_t espacio);

bool MarcosDominguez(char * cadena, size_t espacio);

bool PabloMorzan(char * cadena, size_t espacio);

bool ArmandoSuhuan(char * cadena, size_t espacio);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
