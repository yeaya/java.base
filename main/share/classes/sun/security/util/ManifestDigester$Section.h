#ifndef _sun_security_util_ManifestDigester$Section_h_
#define _sun_security_util_ManifestDigester$Section_h_
//$ class sun.security.util.ManifestDigester$Section
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace security {
		class MessageDigest;
	}
}

namespace sun {
	namespace security {
		namespace util {

class ManifestDigester$Section : public ::java::lang::Object {
	$class(ManifestDigester$Section, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ManifestDigester$Section();
	void init$(int32_t offset, int32_t length, int32_t lengthWithBlankLine, $bytes* rawBytes);
	static void doOldStyle(::java::security::MessageDigest* md, $bytes* bytes, int32_t offset, int32_t length);
	bool isProperlySectionDelimited();
	int32_t offset = 0;
	int32_t length = 0;
	int32_t lengthWithBlankLine = 0;
	$bytes* rawBytes = nullptr;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_ManifestDigester$Section_h_