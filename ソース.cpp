#include <stdio.h>

#include "SurfaceT.h"
#include "Vector.h"
#include "Any.h"
/** /
struct ReletionDBItem {
	Any T;
	Any M;
	Any I;
	Any D;
};

ReletionDBItem ConstructReletionDBItem() {
	ReletionDBItem R;
	R.T = ConstructAny(0);
	R.M = ConstructAny(0);
	R.I = ConstructAny(0);
	R.D = ConstructAny(0);

	return R;
}

"
struct RelationDB {
	Vector<SurfaceT<ReletionDBItem>> V;
};
/**/

struct RelationDB {
	Vector<SurfaceT<Any>> V;
};
RelationDB ConstructReletionDB() {
	RelationDB R;
	R.V = ConstructVector<SurfaceT<Any>>(16);

	return R;
}
bool Free(RelationDB& In) {
	Free(In.V);

	return true;
}
bool FreeII(RelationDB& In) {
	for (size_t i = 0; i < Size(In.V); i++) {
		if (Index(In.V, i) == NULL) { return false; }
		Free(*Index(In.V, i));
	}
	Free(In.V);

	return true;
}