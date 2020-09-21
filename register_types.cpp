/* register_types.cpp */

#include "register_types.h"

#include "gd_unqlite.h"

void register_gd_unqlite_types() {
	ClassDB::register_class<UNQLite>();
}

void unregister_gd_unqlite_types() {
	//nothing to do here
}
