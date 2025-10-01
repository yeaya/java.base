#ifndef _jdk_internal_access_JavaIOFilePermissionAccess_h_
#define _jdk_internal_access_JavaIOFilePermissionAccess_h_
//$ interface jdk.internal.access.JavaIOFilePermissionAccess
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class FilePermission;
	}
}

namespace jdk {
	namespace internal {
		namespace access {

class $export JavaIOFilePermissionAccess : public ::java::lang::Object {
	$interface(JavaIOFilePermissionAccess, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::io::FilePermission* newPermPlusAltPath(::java::io::FilePermission* input) {return nullptr;}
	virtual ::java::io::FilePermission* newPermUsingAltPath(::java::io::FilePermission* input) {return nullptr;}
};

		} // access
	} // internal
} // jdk

#endif // _jdk_internal_access_JavaIOFilePermissionAccess_h_