#ifndef _java_io_ObjectStreamClass$EntryFuture_h_
#define _java_io_ObjectStreamClass$EntryFuture_h_
//$ class java.io.ObjectStreamClass$EntryFuture
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Thread;
	}
}

namespace java {
	namespace io {

class ObjectStreamClass$EntryFuture : public ::java::lang::Object {
	$class(ObjectStreamClass$EntryFuture, 0, ::java::lang::Object)
public:
	ObjectStreamClass$EntryFuture();
	void init$();
	virtual $Object* get();
	virtual $Thread* getOwner();
	virtual bool set(Object$* entry);
	static $Object* unset;
	$Thread* owner = nullptr;
	$Object* entry = nullptr;
};

	} // io
} // java

#endif // _java_io_ObjectStreamClass$EntryFuture_h_