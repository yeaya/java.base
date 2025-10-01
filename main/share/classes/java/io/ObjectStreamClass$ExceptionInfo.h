#ifndef _java_io_ObjectStreamClass$ExceptionInfo_h_
#define _java_io_ObjectStreamClass$ExceptionInfo_h_
//$ class java.io.ObjectStreamClass$ExceptionInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class InvalidClassException;
	}
}

namespace java {
	namespace io {

class ObjectStreamClass$ExceptionInfo : public ::java::lang::Object {
	$class(ObjectStreamClass$ExceptionInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ObjectStreamClass$ExceptionInfo();
	void init$($String* cn, $String* msg);
	virtual ::java::io::InvalidClassException* newInvalidClassException();
	$String* className = nullptr;
	$String* message = nullptr;
};

	} // io
} // java

#endif // _java_io_ObjectStreamClass$ExceptionInfo_h_