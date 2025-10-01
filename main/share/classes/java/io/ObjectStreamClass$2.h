#ifndef _java_io_ObjectStreamClass$2_h_
#define _java_io_ObjectStreamClass$2_h_
//$ class java.io.ObjectStreamClass$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace io {
		class ObjectStreamClass;
	}
}

namespace java {
	namespace io {

class ObjectStreamClass$2 : public ::java::security::PrivilegedAction {
	$class(ObjectStreamClass$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ObjectStreamClass$2();
	void init$(::java::io::ObjectStreamClass* this$0, $Class* val$cl);
	virtual $Object* run() override;
	::java::io::ObjectStreamClass* this$0 = nullptr;
	$Class* val$cl = nullptr;
};

	} // io
} // java

#endif // _java_io_ObjectStreamClass$2_h_