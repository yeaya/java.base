#ifndef _java_io_SerialCallbackContext_h_
#define _java_io_SerialCallbackContext_h_
//$ class java.io.SerialCallbackContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class ObjectStreamClass;
	}
}
namespace java {
	namespace lang {
		class Thread;
	}
}

namespace java {
	namespace io {

class SerialCallbackContext : public ::java::lang::Object {
	$class(SerialCallbackContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SerialCallbackContext();
	void init$(Object$* obj, ::java::io::ObjectStreamClass* desc);
	void check();
	void checkAndSetUsed();
	::java::io::ObjectStreamClass* getDesc();
	$Object* getObj();
	void setUsed();
	$Object* obj = nullptr;
	::java::io::ObjectStreamClass* desc = nullptr;
	$Thread* thread = nullptr;
};

	} // io
} // java

#endif // _java_io_SerialCallbackContext_h_