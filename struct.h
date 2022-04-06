
typedef struct Alumno
{

    char Matricula[6];
    char Nombre[25];
    char ApellidoP[50];
    char ApellidoM[50];
    int Edad;
    char Carrera[10];
    short status;
} Alumno;

typedef struct ArrAlumno
{

    Alumno arrDatos1[100];
} ArrAlumno;
