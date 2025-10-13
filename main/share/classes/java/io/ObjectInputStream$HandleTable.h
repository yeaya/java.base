#ifndef _java_io_ObjectInputStream$HandleTable_h_
#define _java_io_ObjectInputStream$HandleTable_h_
//$ class java.io.ObjectInputStream$HandleTable
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("STATUS_EXCEPTION")
#undef STATUS_EXCEPTION
#pragma push_macro("STATUS_OK")
#undef STATUS_OK
#pragma push_macro("STATUS_UNKNOWN")
#undef STATUS_UNKNOWN

namespace java {
	namespace io {
		class ObjectInputStream$HandleTable$HandleList;
	}
}
namespace java {
	namespace lang {
		class ClassNotFoundException;
	}
}

namespace java {
	namespace io {

class ObjectInputStream$HandleTable : public ::java::lang::Object {
	$class(ObjectInputStream$HandleTable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ObjectInputStream$HandleTable();
	void init$(int32_t initialCapacity);
	virtual int32_t assign(Object$* obj);
	virtual void clear();
	virtual void finish(int32_t handle);
	void grow();
	virtual ::java::lang::ClassNotFoundException* lookupException(int32_t handle);
	virtual $Object* lookupObject(int32_t handle);
	virtual void markDependency(int32_t dependent, int32_t target);
	virtual void markException(int32_t handle, ::java::lang::ClassNotFoundException* ex);
	virtual void setObject(int32_t handle, Object$* obj);
	virtual int32_t size();
	static const int8_t STATUS_OK = 1;
	static const int8_t STATUS_UNKNOWN = 2;
	static const int8_t STATUS_EXCEPTION = 3;
	$bytes* status = nullptr;
	$ObjectArray* entries = nullptr;
	$Array<::java::io::ObjectInputStream$HandleTable$HandleList>* deps = nullptr;
	int32_t lowDep = 0;
	int32_t size$ = 0;
};

	} // io
} // java

#pragma pop_macro("STATUS_EXCEPTION")
#pragma pop_macro("STATUS_OK")
#pragma pop_macro("STATUS_UNKNOWN")

#endif // _java_io_ObjectInputStream$HandleTable_h_