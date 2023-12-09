/* Глобальный счетчик элементов.
    Обеспечивает уникальность создаваемых структур.
*/

extern unsigned get_point_id(void);
extern unsigned get_section_properties_id(void);
extern unsigned get_truss_finite_element_id(void);
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

struct point_list{
    unsigned id;
    struct node* next_node;
};

struct {
unsigned point_id_counter;
unsigned section_properties_id_counter;
unsigned truss_finite_element_id_counter;
} global_counter = {0, 0, 0};

extern unsigned get_point_id(void)
{
    global_counter.point_id_counter ++;
    return global_counter.point_id_counter;
}
extern unsigned get_section_properties_id(void)
{
    global_counter.section_properties_id_counter ++;
    return global_counter.section_properties_id_counter;
}
extern unsigned get_truss_finite_element_id(void)
{
    global_counter.truss_finite_element_id_counter ++;
    return global_counter.truss_finite_element_id_counter;
}
