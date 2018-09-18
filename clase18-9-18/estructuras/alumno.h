typedef struct
{
    int legajo;
    char nombre[50];
    float altura;
    int nota;
    int estado;
} eAlumno;

void cargarListadoDeAlumnos(eAlumno[], int);
void mostrarListadoDeAlumnos(eAlumno[], int);
void ordenarPorNombre(eAlumno[], int);
void alumnoNombreConP(eAlumno[], int);
int buscarLibre(int, int,int);
void modificarListadoDeAlumnos(eAlumno[], int);

void mostrarAlumno(eAlumno);
eAlumno cargarAlumno();


