#ifndef _java_io_ObjectInputStream$1_h_
#define _java_io_ObjectInputStream$1_h_
//$ class java.io.ObjectInputStream$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace io {

class ObjectInputStream$1 : public ::java::security::PrivilegedAction {
	$class(ObjectInputStream$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ObjectInputStream$1();
	void init$($Class* val$subcl);
	virtual $Object* run() override;
	$Class* val$subcl = nullptr;
};

	} // io
} // java

#endif // _java_io_ObjectInputStream$1_h_