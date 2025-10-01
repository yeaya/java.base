#ifndef _java_io_ObjectOutputStream$ReplaceTable_h_
#define _java_io_ObjectOutputStream$ReplaceTable_h_
//$ class java.io.ObjectOutputStream$ReplaceTable
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class ObjectOutputStream$HandleTable;
	}
}

namespace java {
	namespace io {

class ObjectOutputStream$ReplaceTable : public ::java::lang::Object {
	$class(ObjectOutputStream$ReplaceTable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ObjectOutputStream$ReplaceTable();
	void init$(int32_t initialCapacity, float loadFactor);
	virtual void assign(Object$* obj, Object$* rep);
	virtual void clear();
	void grow();
	virtual $Object* lookup(Object$* obj);
	virtual int32_t size();
	::java::io::ObjectOutputStream$HandleTable* htab = nullptr;
	$ObjectArray* reps = nullptr;
};

	} // io
} // java

#endif // _java_io_ObjectOutputStream$ReplaceTable_h_