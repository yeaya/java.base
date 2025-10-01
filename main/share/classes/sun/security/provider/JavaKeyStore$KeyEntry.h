#ifndef _sun_security_provider_JavaKeyStore$KeyEntry_h_
#define _sun_security_provider_JavaKeyStore$KeyEntry_h_
//$ class sun.security.provider.JavaKeyStore$KeyEntry
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace security {
		namespace cert {
			class Certificate;
		}
	}
}
namespace java {
	namespace util {
		class Date;
	}
}

namespace sun {
	namespace security {
		namespace provider {

class JavaKeyStore$KeyEntry : public ::java::lang::Object {
	$class(JavaKeyStore$KeyEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JavaKeyStore$KeyEntry();
	void init$();
	::java::util::Date* date = nullptr;
	$bytes* protectedPrivKey = nullptr;
	$Array<::java::security::cert::Certificate>* chain = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_JavaKeyStore$KeyEntry_h_