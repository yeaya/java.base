#ifndef _java_io_ObjectOutputStream$HandleTable_h_
#define _java_io_ObjectOutputStream$HandleTable_h_
//$ class java.io.ObjectOutputStream$HandleTable
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {

class ObjectOutputStream$HandleTable : public ::java::lang::Object {
	$class(ObjectOutputStream$HandleTable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ObjectOutputStream$HandleTable();
	void init$(int32_t initialCapacity, float loadFactor);
	virtual int32_t assign(Object$* obj);
	virtual void clear();
	void growEntries();
	void growSpine();
	int32_t hash(Object$* obj);
	void insert(Object$* obj, int32_t handle);
	virtual int32_t lookup(Object$* obj);
	virtual int32_t size();
	int32_t size$ = 0;
	int32_t threshold = 0;
	float loadFactor = 0.0;
	$ints* spine = nullptr;
	$ints* next = nullptr;
	$ObjectArray* objs = nullptr;
};

	} // io
} // java

#endif // _java_io_ObjectOutputStream$HandleTable_h_