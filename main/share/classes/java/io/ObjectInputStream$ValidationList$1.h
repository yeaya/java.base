#ifndef _java_io_ObjectInputStream$ValidationList$1_h_
#define _java_io_ObjectInputStream$ValidationList$1_h_
//$ class java.io.ObjectInputStream$ValidationList$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace io {
		class ObjectInputStream$ValidationList;
	}
}

namespace java {
	namespace io {

class ObjectInputStream$ValidationList$1 : public ::java::security::PrivilegedExceptionAction {
	$class(ObjectInputStream$ValidationList$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	ObjectInputStream$ValidationList$1();
	void init$(::java::io::ObjectInputStream$ValidationList* this$0);
	virtual $Object* run() override;
	::java::io::ObjectInputStream$ValidationList* this$0 = nullptr;
};

	} // io
} // java

#endif // _java_io_ObjectInputStream$ValidationList$1_h_