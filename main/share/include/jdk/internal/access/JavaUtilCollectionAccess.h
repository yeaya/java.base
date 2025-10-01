#ifndef _jdk_internal_access_JavaUtilCollectionAccess_h_
#define _jdk_internal_access_JavaUtilCollectionAccess_h_
//$ interface jdk.internal.access.JavaUtilCollectionAccess
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace jdk {
	namespace internal {
		namespace access {

class $import JavaUtilCollectionAccess : public ::java::lang::Object {
	$interface(JavaUtilCollectionAccess, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::List* listFromTrustedArray($ObjectArray* array) {return nullptr;}
	virtual ::java::util::List* listFromTrustedArrayNullsAllowed($ObjectArray* array) {return nullptr;}
};

		} // access
	} // internal
} // jdk

#endif // _jdk_internal_access_JavaUtilCollectionAccess_h_