#ifndef _sun_security_jca_JCAUtil_h_
#define _sun_security_jca_JCAUtil_h_
//$ class sun.security.jca.JCAUtil
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ARRAY_SIZE")
#undef ARRAY_SIZE

namespace java {
	namespace security {
		class SecureRandom;
	}
}

namespace sun {
	namespace security {
		namespace jca {

class $import JCAUtil : public ::java::lang::Object {
	$class(JCAUtil, 0, ::java::lang::Object)
public:
	JCAUtil();
	void init$();
	static void clearDefSecureRandom();
	static ::java::security::SecureRandom* getDefSecureRandom();
	static ::java::security::SecureRandom* getSecureRandom();
	static int32_t getTempArraySize(int32_t totalSize);
	static const int32_t ARRAY_SIZE = 4096;
	static $volatile(::java::security::SecureRandom*) def;
};

		} // jca
	} // security
} // sun

#pragma pop_macro("ARRAY_SIZE")

#endif // _sun_security_jca_JCAUtil_h_