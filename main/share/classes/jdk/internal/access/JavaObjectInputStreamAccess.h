#ifndef _jdk_internal_access_JavaObjectInputStreamAccess_h_
#define _jdk_internal_access_JavaObjectInputStreamAccess_h_
//$ interface jdk.internal.access.JavaObjectInputStreamAccess
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}

namespace jdk {
	namespace internal {
		namespace access {

class $export JavaObjectInputStreamAccess : public ::java::lang::Object {
	$interface(JavaObjectInputStreamAccess, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void checkArray(::java::io::ObjectInputStream* ois, $Class* arrayType, int32_t arrayLength) {}
};

		} // access
	} // internal
} // jdk

#endif // _jdk_internal_access_JavaObjectInputStreamAccess_h_