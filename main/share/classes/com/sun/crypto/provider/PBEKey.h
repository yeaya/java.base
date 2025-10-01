#ifndef _com_sun_crypto_provider_PBEKey_h_
#define _com_sun_crypto_provider_PBEKey_h_
//$ class com.sun.crypto.provider.PBEKey
//$ extends javax.crypto.SecretKey

#include <java/lang/Array.h>
#include <javax/crypto/SecretKey.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace javax {
	namespace crypto {
		namespace spec {
			class PBEKeySpec;
		}
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class PBEKey : public ::javax::crypto::SecretKey {
	$class(PBEKey, $NO_CLASS_INIT, ::javax::crypto::SecretKey)
public:
	PBEKey();
	void init$(::javax::crypto::spec::PBEKeySpec* keySpec, $String* keytype, bool useCleaner);
	virtual void destroy() override;
	virtual bool equals(Object$* obj) override;
	virtual $String* getAlgorithm() override;
	virtual $bytes* getEncoded() override;
	virtual $String* getFormat() override;
	virtual int32_t hashCode() override;
	static void lambda$new$0($bytes* k);
	void readObject(::java::io::ObjectInputStream* s);
	$Object* writeReplace();
	static const int64_t serialVersionUID = (int64_t)0xE0FC818458927930;
	$bytes* key = nullptr;
	$String* type = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_PBEKey_h_