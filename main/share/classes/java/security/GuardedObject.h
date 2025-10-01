#ifndef _java_security_GuardedObject_h_
#define _java_security_GuardedObject_h_
//$ class java.security.GuardedObject
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace io {
		class ObjectOutputStream;
	}
}
namespace java {
	namespace security {
		class Guard;
	}
}

namespace java {
	namespace security {

class $export GuardedObject : public ::java::io::Serializable {
	$class(GuardedObject, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	GuardedObject();
	void init$(Object$* object, ::java::security::Guard* guard);
	virtual $Object* getObject();
	void writeObject(::java::io::ObjectOutputStream* oos);
	static const int64_t serialVersionUID = (int64_t)0xB7462E670F2DA63C;
	$Object* object = nullptr;
	::java::security::Guard* guard = nullptr;
};

	} // security
} // java

#endif // _java_security_GuardedObject_h_