#ifndef _jdk_internal_access_JavaObjectInputStreamReadString_h_
#define _jdk_internal_access_JavaObjectInputStreamReadString_h_
//$ interface jdk.internal.access.JavaObjectInputStreamReadString
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

class $import JavaObjectInputStreamReadString : public ::java::lang::Object {
	$interface(JavaObjectInputStreamReadString, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* readString(::java::io::ObjectInputStream* ois) {return nullptr;}
};

		} // access
	} // internal
} // jdk

#endif // _jdk_internal_access_JavaObjectInputStreamReadString_h_