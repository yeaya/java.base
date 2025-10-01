#ifndef _java_io_ObjectInputStream$ValidationList_h_
#define _java_io_ObjectInputStream$ValidationList_h_
//$ class java.io.ObjectInputStream$ValidationList
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class ObjectInputStream$ValidationList$Callback;
		class ObjectInputValidation;
	}
}

namespace java {
	namespace io {

class ObjectInputStream$ValidationList : public ::java::lang::Object {
	$class(ObjectInputStream$ValidationList, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ObjectInputStream$ValidationList();
	void init$();
	virtual void clear();
	virtual void doCallbacks();
	virtual void register$(::java::io::ObjectInputValidation* obj, int32_t priority);
	::java::io::ObjectInputStream$ValidationList$Callback* list = nullptr;
};

	} // io
} // java

#endif // _java_io_ObjectInputStream$ValidationList_h_