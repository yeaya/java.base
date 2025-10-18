#ifndef _apple_security_KeychainStore$KeyEntry_h_
#define _apple_security_KeychainStore$KeyEntry_h_
//$ class apple.security.KeychainStore$KeyEntry
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

namespace apple {
	namespace security {

class KeychainStore$KeyEntry : public ::java::lang::Object {
	$class(KeychainStore$KeyEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	KeychainStore$KeyEntry();
	void init$();
	::java::util::Date* date = nullptr;
	$bytes* protectedPrivKey = nullptr;
	$chars* password = nullptr;
	int64_t keyRef = 0;
	$Array<::java::security::cert::Certificate>* chain = nullptr;
	$longs* chainRefs = nullptr;
};

	} // security
} // apple

#endif // _apple_security_KeychainStore$KeyEntry_h_