# Trabajo Practico Numero 5

Repositorio inicial para el Trabajo Practico 5 de la asignatura de Ingeniería de Software de la carrera de Especialización en Sistemas Embebidos

## Primera Parte

1. Clonar este repositorio en su computadora y desplegar la rama _original_.

2. Agregar en el archivo `alumnos.h` la declaración de una función que serialice sus datos personales, similar a la del siguiente ejemplo:

   ```c
   bool EstebanVolentini(char * cadena, size_t espacio);
   ```

3. Agregar al archivo `alumnos.c` la implementación de la funcion que serialice sus datos personales similar a la del siguiente ejemplo:

   ```c
   bool EstebanVolentini(char * cadena, size_t espacio) {
       const struct alumno_s alumno = {
           .apellidos = "VOLENTINI",
           .nombres = "Esteban Daniel",
           .documento = "23.517.968",
       };

       return SerializarAlumno(cadena, espacio, &alumno);
   }
   ```

4. Agregar la correspondiente llamada en el programa principal para que se muestren su datos peronales, en forma similiar a la del siguiente ejemplo:

   ```c
   if (EstebanVolentini(cadena, sizeof(cadena))) {
       printf("Alumno: %s\r\n", cadena);
   } else {
       printf("No se pudo serializar el alumno\r\n");
   }
   ```

5. Compilar el programa, ejecutarlo y revisar que el mismo funcione correctamente.

6. Confirmar los cambios con un _commit_ en la rama _original_ con el texto **"Se agregan los datos del alumno APELLIDO, Nombre"** en la descipción del mismo

7. Cambiar a la rama _master_ y traer los cambios del servidor con un _pull_.

8. Mezcar la rama _original_ en la rama _master_, resolver los conflictos y confirmar los cambios con un _commit_ en la rama _master_.

9. Enviar los cambios efectuados en la rama _master_ al servidor con un _push_.

10. Si en el proceso alguien mas envió cambios a la rama master entonces el servidor rechazará el envio. En este caso deberá realizar un nuevo _pull_ de la rama master y resolver los confictos. Despues generar un neuvo _commit_ e intentar un nuevo _push_. Este paso se deberá repetir hasta que nadie efectué cambios entre el _pull_ y el _push_ y se pueda completar la actualización del servidor.
