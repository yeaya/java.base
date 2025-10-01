#ifndef _sun_security_util_IOUtils_h_
#define _sun_security_util_IOUtils_h_
//$ class sun.security.util.IOUtils
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
	}
}

namespace sun {
	namespace security {
		namespace util {

class $export IOUtils : public ::java::lang::Object {
	$class(IOUtils, $NO_CLASS_INIT, ::java::lang::Object)
public:
	IOUtils();
	void init$();
	static $bytes* readExactlyNBytes(::java::io::InputStream* is, int32_t length);
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_IOUtils_h_