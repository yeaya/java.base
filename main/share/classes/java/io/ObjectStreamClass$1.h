#ifndef _java_io_ObjectStreamClass$1_h_
#define _java_io_ObjectStreamClass$1_h_
//$ class java.io.ObjectStreamClass$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace io {
		class ObjectStreamClass;
	}
}

namespace java {
	namespace io {

class ObjectStreamClass$1 : public ::java::security::PrivilegedAction {
	$class(ObjectStreamClass$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ObjectStreamClass$1();
	void init$(::java::io::ObjectStreamClass* this$0);
	virtual $Object* run() override;
	::java::io::ObjectStreamClass* this$0 = nullptr;
};

	} // io
} // java

#endif // _java_io_ObjectStreamClass$1_h_