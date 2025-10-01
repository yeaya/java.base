#ifndef _jdk_internal_access_JavaObjectInputFilterAccess_h_
#define _jdk_internal_access_JavaObjectInputFilterAccess_h_
//$ interface jdk.internal.access.JavaObjectInputFilterAccess
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class ObjectInputFilter;
	}
}

namespace jdk {
	namespace internal {
		namespace access {

class $import JavaObjectInputFilterAccess : public ::java::lang::Object {
	$interface(JavaObjectInputFilterAccess, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::io::ObjectInputFilter* createFilter2($String* pattern) {return nullptr;}
};

		} // access
	} // internal
} // jdk

#endif // _jdk_internal_access_JavaObjectInputFilterAccess_h_