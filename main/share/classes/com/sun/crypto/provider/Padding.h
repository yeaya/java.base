#ifndef _com_sun_crypto_provider_Padding_h_
#define _com_sun_crypto_provider_Padding_h_
//$ interface com.sun.crypto.provider.Padding
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class Padding : public ::java::lang::Object {
	$interface(Padding, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t padLength(int32_t len) {return 0;}
	virtual void padWithLen($bytes* in, int32_t off, int32_t len) {}
	virtual int32_t unpad($bytes* in, int32_t off, int32_t len) {return 0;}
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_Padding_h_