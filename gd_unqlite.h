/* gd_unqlite.h */
#ifndef GD_UNQLITE_H
#define GD_UNQLITE_H

#include "core/reference.h"
#include "core/ustring.h"
#include "core/map.h"

class UNQLite : public Reference {
	GDCLASS(UNQLite, Reference);

protected:
	static void _bind_methods();

public:
	UNQLite();

private:
};

#endif // GD_UNQLITE_H
