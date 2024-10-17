#include "ReletionDB.h"

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
