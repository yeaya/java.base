#ifndef _sun_security_util_FilePermCompat_h_
#define _sun_security_util_FilePermCompat_h_
//$ class sun.security.util.FilePermCompat
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		class Permission;
	}
}

namespace sun {
	namespace security {
		namespace util {

class $export FilePermCompat : public ::java::lang::Object {
	$class(FilePermCompat, 0, ::java::lang::Object)
public:
	FilePermCompat();
	void init$();
	static ::java::security::Permission* newPermPlusAltPath(::java::security::Permission* input);
	static ::java::security::Permission* newPermUsingAltPath(::java::security::Permission* input);
	static bool nb;
	static bool compat;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_FilePermCompat_h_