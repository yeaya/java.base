#ifndef _java_io_ObjectInputStream$HandleTable$HandleList_h_
#define _java_io_ObjectInputStream$HandleTable$HandleList_h_
//$ class java.io.ObjectInputStream$HandleTable$HandleList
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {

class ObjectInputStream$HandleTable$HandleList : public ::java::lang::Object {
	$class(ObjectInputStream$HandleTable$HandleList, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ObjectInputStream$HandleTable$HandleList();
	void init$();
	virtual void add(int32_t handle);
	virtual int32_t get(int32_t index);
	virtual int32_t size();
	$ints* list = nullptr;
	int32_t size$ = 0;
};

	} // io
} // java

#endif // _java_io_ObjectInputStream$HandleTable$HandleList_h_