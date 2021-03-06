/* Autogenerated with DRAKON Editor 1.23 */
#ifndef OWNPAW_H59587
#define OWNPAW_H59587

#include "lib.h"

typedef struct ownpaw ownpaw;
typedef struct employee employee;
typedef int (*employee_fun)(employee* item, void* user_data /* null */);
typedef struct department department;
typedef int (*department_fun)(department* item, void* user_data /* null */);


ownpaw* /* own */
ownpaw_create(void);


void
ownpaw_destroy(ownpaw* me /* own. null */);


int
ownpaw_error(const ownpaw* db);


int
employee_id(const employee* me);


employee* /* null */
ownpaw_get_employee(ownpaw* db,
    int rec_id);


const string8* /* null */
employee_cget_name(const employee* me);


int
ownpaw_set_employee_department(ownpaw* db,
    employee* _record_,
    department* new_value /* null */);


employee* /* null */
ownpaw_insert_employee(ownpaw* db,
    string8* name /* own. null */,
    department* department /* null */);


int
ownpaw_delete_employee(ownpaw* db,
    employee* record /* null */);


int
ownpaw_employee_count(const ownpaw* db);


int
ownpaw_foreach_employee(ownpaw* db,
    employee_fun visitor,
    void* user_data /* null */);


employee* /* null */
ownpaw_employee_by_department_name(ownpaw* db,
    const department* department /* null */,
    const string8* name /* null */);


int
department_id(const department* me);


department* /* null */
ownpaw_get_department(ownpaw* db,
    int rec_id);


int
department_employees_count(const department* record);


employee*
department_employees(department* record,
    int index);


department* /* null */
ownpaw_insert_department(ownpaw* db,
    string8* title /* own. null */);


int
ownpaw_delete_department(ownpaw* db,
    department* record /* null */);


int
ownpaw_department_count(const ownpaw* db);


int
ownpaw_foreach_department(ownpaw* db,
    department_fun visitor,
    void* user_data /* null */);


department* /* null */
ownpaw_department_by_title(ownpaw* db,
    const string8* title /* null */);






int main(
    int argc,
    char** argv
);


#endif

