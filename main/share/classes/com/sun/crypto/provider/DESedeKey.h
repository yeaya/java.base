#ifndef _com_sun_crypto_provider_DESedeKey_h_
#define _com_sun_crypto_provider_DESedeKey_h_
//$ class com.sun.crypto.provider.DESedeKey
//$ extends javax.crypto.SecretKey

#include <java/lang/Array.h>
#include <javax/crypto/SecretKey.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class DESedeKey : public ::javax::crypto::SecretKey {
	$class(DESedeKey, $NO_CLASS_INIT, ::javax::crypto::SecretKey)
public:
	DESedeKey();
	void init$($bytes* key);
	void init$($bytes* key, int32_t offset);
	virtual bool equals(Object$* obj) override;
	virtual $String* getAlgorithm() override;
	virtual $bytes* getEncoded() override;
	virtual $String* getFormat() override;
	virtual int32_t hashCode() override;
	static void lambda$new$0($bytes* k);
	void readObject(::java::io::ObjectInputStream* s);
	$Object* writeReplace();
	static const int64_t serialVersionUID = (int64_t)0x2231D6BA0F43F5DA;
	$bytes* key = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_DESedeKey_h_