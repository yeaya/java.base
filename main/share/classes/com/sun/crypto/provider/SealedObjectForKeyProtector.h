#ifndef _com_sun_crypto_provider_SealedObjectForKeyProtector_h_
#define _com_sun_crypto_provider_SealedObjectForKeyProtector_h_
//$ class com.sun.crypto.provider.SealedObjectForKeyProtector
//$ extends javax.crypto.SealedObject

#include <javax/crypto/SealedObject.h>

#pragma push_macro("KEY_SERIAL_FILTER")
#undef KEY_SERIAL_FILTER

namespace java {
	namespace io {
		class ObjectInputStream;
		class Serializable;
	}
}
namespace java {
	namespace lang {
		class Void;
	}
}
namespace java {
	namespace security {
		class AlgorithmParameters;
		class Key;
	}
}
namespace javax {
	namespace crypto {
		class Cipher;
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class SealedObjectForKeyProtector : public ::javax::crypto::SealedObject {
	$class(SealedObjectForKeyProtector, 0, ::javax::crypto::SealedObject)
public:
	SealedObjectForKeyProtector();
	void init$(::java::io::Serializable* object, ::javax::crypto::Cipher* c);
	void init$(::javax::crypto::SealedObject* so);
	::java::security::Key* getKey(::javax::crypto::Cipher* c, int32_t maxLength);
	::java::security::AlgorithmParameters* getParameters();
	static ::java::lang::Void* lambda$getKey$0(::java::io::ObjectInputStream* ois, int32_t maxLength);
	static const int64_t serialVersionUID = (int64_t)0xCD57CA59E730BB53;
	static $String* KEY_SERIAL_FILTER;
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("KEY_SERIAL_FILTER")

#endif // _com_sun_crypto_provider_SealedObjectForKeyProtector_h_