#ifndef _sun_security_util_FilePaths_h_
#define _sun_security_util_FilePaths_h_
//$ class sun.security.util.FilePaths
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace util {

class $import FilePaths : public ::java::lang::Object {
	$class(FilePaths, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FilePaths();
	void init$();
	static $String* cacerts();
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_FilePaths_h_