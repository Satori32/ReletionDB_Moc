#pragma once
#include <stdio.h>

#include "SurfaceT.h"
#include "Vector.h"
#include "Any.h"

struct RelationDB {
	Vector<SurfaceT<Any>> V;
};

RelationDB ConstructReletionDB();
bool Free(RelationDB& In);
bool FreeII(RelationDB& In);