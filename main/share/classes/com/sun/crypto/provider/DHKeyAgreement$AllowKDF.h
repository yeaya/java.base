#ifndef _com_sun_crypto_provider_DHKeyAgreement$AllowKDF_h_
#define _com_sun_crypto_provider_DHKeyAgreement$AllowKDF_h_
//$ class com.sun.crypto.provider.DHKeyAgreement$AllowKDF
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("VALUE")
#undef VALUE

namespace java {
	namespace lang {
		class Boolean;
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class DHKeyAgreement$AllowKDF : public ::java::lang::Object {
	$class(DHKeyAgreement$AllowKDF, 0, ::java::lang::Object)
public:
	DHKeyAgreement$AllowKDF();
	void init$();
	static bool getValue();
	static ::java::lang::Boolean* lambda$getValue$0();
	static bool VALUE;
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("VALUE")

#endif // _com_sun_crypto_provider_DHKeyAgreement$AllowKDF_h_