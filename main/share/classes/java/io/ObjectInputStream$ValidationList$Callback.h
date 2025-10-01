#ifndef _java_io_ObjectInputStream$ValidationList$Callback_h_
#define _java_io_ObjectInputStream$ValidationList$Callback_h_
//$ class java.io.ObjectInputStream$ValidationList$Callback
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class ObjectInputValidation;
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
	}
}

namespace java {
	namespace io {

class ObjectInputStream$ValidationList$Callback : public ::java::lang::Object {
	$class(ObjectInputStream$ValidationList$Callback, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ObjectInputStream$ValidationList$Callback();
	void init$(::java::io::ObjectInputValidation* obj, int32_t priority, ::java::io::ObjectInputStream$ValidationList$Callback* next, ::java::security::AccessControlContext* acc);
	::java::io::ObjectInputValidation* obj = nullptr;
	int32_t priority = 0;
	::java::io::ObjectInputStream$ValidationList$Callback* next = nullptr;
	::java::security::AccessControlContext* acc = nullptr;
};

	} // io
} // java

#endif // _java_io_ObjectInputStream$ValidationList$Callback_h_