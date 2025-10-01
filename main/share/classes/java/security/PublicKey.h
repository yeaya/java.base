#ifndef _java_security_PublicKey_h_
#define _java_security_PublicKey_h_
//$ interface java.security.PublicKey
//$ extends java.security.Key

#include <java/security/Key.h>

namespace java {
	namespace security {

class $export PublicKey : public ::java::security::Key {
	$interface(PublicKey, $NO_CLASS_INIT, ::java::security::Key)
public:
	static const int64_t serialVersionUID = (int64_t)0x63BEBF5F40C219E0;
};

	} // security
} // java

#endif // _java_security_PublicKey_h_