#ifndef _sun_security_util_ManifestDigester$Position_h_
#define _sun_security_util_ManifestDigester$Position_h_
//$ class sun.security.util.ManifestDigester$Position
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace util {

class $import ManifestDigester$Position : public ::java::lang::Object {
	$class(ManifestDigester$Position, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ManifestDigester$Position();
	void init$();
	int32_t endOfFirstLine = 0;
	int32_t endOfSection = 0;
	int32_t startOfNext = 0;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_ManifestDigester$Position_h_