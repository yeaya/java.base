#ifndef _javax_crypto_Cipher$Transform_h_
#define _javax_crypto_Cipher$Transform_h_
//$ class javax.crypto.Cipher$Transform
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		class Provider$Service;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentMap;
		}
	}
}
namespace javax {
	namespace crypto {
		class CipherSpi;
	}
}

namespace javax {
	namespace crypto {

class Cipher$Transform : public ::java::lang::Object {
	$class(Cipher$Transform, 0, ::java::lang::Object)
public:
	Cipher$Transform();
	void init$($String* alg, $String* suffix, $String* mode, $String* pad);
	static bool matches($String* regexp, $String* str);
	virtual void setModePadding(::javax::crypto::CipherSpi* spi);
	static int32_t supports(::java::security::Provider$Service* s, $String* attrName, $String* value);
	virtual int32_t supportsMode(::java::security::Provider$Service* s);
	virtual int32_t supportsModePadding(::java::security::Provider$Service* s);
	virtual int32_t supportsPadding(::java::security::Provider$Service* s);
	$String* transform = nullptr;
	$String* suffix = nullptr;
	$String* mode = nullptr;
	$String* pad = nullptr;
	static ::java::util::concurrent::ConcurrentMap* patternCache;
};

	} // crypto
} // javax

#endif // _javax_crypto_Cipher$Transform_h_