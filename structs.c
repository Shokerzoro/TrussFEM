/* Содержит структуру КЭ и функции для его создания
*/
/* - - - - - - - Предоставляемые функции - - - - - - - - */
extern void initialize_FEM_data(void);
extern void create_point (double x, double y);
extern void create_section (unsigned section_properties_id, double elastity, double max_stress, double square, double enertion);
extern void create_truss_FE_join (unsigned start_point_id, unsigned end_point_id, unsigned section_id);
extern void create_truss_FE_pull(unsigned start_point_id, double x, double y, unsigned section_id);
/* - - - - - - - Внешние функии - - - - - - - - - - - - - - - - - */
unsigned get_point_id(void);
unsigned get_section_properties_id(void);
unsigned get_truss_finite_element_id(void);
/* - - - - - - - - Структуры - - - - - -  - - - - - - - - - - - - - - - -*/

typedef struct point{
unsigned point_id;
double x;
double y;
} POINT;

typedef struct section{
unsigned section_id;
double elastity;
double max_stress;
double square;
double enertion;
} SECTION;

typedef struct truss_finite_element{
unsigned truss_id;
POINT* start;
POINT* end;
SECTION* section;
} TrussFE;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

struct point* points_list;
struct section* section_list;
struct truss_finite_element* trussFE_list;


