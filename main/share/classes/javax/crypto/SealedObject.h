#ifndef _javax_crypto_SealedObject_h_
#define _javax_crypto_SealedObject_h_
//$ class javax.crypto.SealedObject
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace security {
		class Key;
	}
}
namespace javax {
	namespace crypto {
		class Cipher;
	}
}

namespace javax {
	namespace crypto {

class $export SealedObject : public ::java::io::Serializable {
	$class(SealedObject, 0, ::java::io::Serializable)
public:
	SealedObject();
	void init$(::java::io::Serializable* object, ::javax::crypto::Cipher* c);
	void init$(::javax::crypto::SealedObject* so);
	$String* getAlgorithm();
	::java::io::ObjectInputStream* getExtObjectInputStream(::javax::crypto::Cipher* c);
	$Object* getObject(::java::security::Key* key);
	$Object* getObject(::javax::crypto::Cipher* c);
	$Object* getObject(::java::security::Key* key, $String* provider);
	static ::java::io::ObjectInputStream* lambda$static$0(::javax::crypto::SealedObject* obj, ::javax::crypto::Cipher* c);
	void readObject(::java::io::ObjectInputStream* s);
	$Object* unseal(::java::security::Key* key, $String* provider);
	static const int64_t serialVersionUID = (int64_t)0x3E363DA6C3B75470;
	$bytes* encryptedContent = nullptr;
	$String* sealAlg = nullptr;
	$String* paramsAlg = nullptr;
	$bytes* encodedParams = nullptr;
};

	} // crypto
} // javax

#endif // _javax_crypto_SealedObject_h_