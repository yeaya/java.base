#ifndef _javax_crypto_interfaces_DHKey_h_
#define _javax_crypto_interfaces_DHKey_h_
//$ interface javax.crypto.interfaces.DHKey
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace crypto {
		namespace spec {
			class DHParameterSpec;
		}
	}
}

namespace javax {
	namespace crypto {
		namespace interfaces {

class $export DHKey : public ::java::lang::Object {
	$interface(DHKey, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::crypto::spec::DHParameterSpec* getParams() {return nullptr;}
};

		} // interfaces
	} // crypto
} // javax

#endif // _javax_crypto_interfaces_DHKey_h_