
typedef struct
{
    int idSerie;
    char nombre[50];
    char genero[20];
    int cantidadTemporadas;
    int estado;
}eSerie;

void inicializarSeriesEstado(eSerie[], int);
void inicializarSeriesHardCode(eSerie[]);
void mostrarListaSeries(eSerie[], int);
void mostrarSerie(eSerie);
int retornarIndiceSerie(eSerie[], int, eSerie);
int retornarIndiceSerieInt(eSerie[], int, int);

