#ifndef _com_sun_crypto_provider_HmacCore_h_
#define _com_sun_crypto_provider_HmacCore_h_
//$ class com.sun.crypto.provider.HmacCore
//$ extends javax.crypto.MacSpi
//$ implements java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <javax/crypto/MacSpi.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace security {
		class Key;
		class MessageDigest;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
		}
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class $export HmacCore : public ::javax::crypto::MacSpi, public ::java::lang::Cloneable {
	$class(HmacCore, $NO_CLASS_INIT, ::javax::crypto::MacSpi, ::java::lang::Cloneable)
public:
	HmacCore();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* digestAlgo, int32_t bl);
	virtual $Object* clone() override;
	virtual $bytes* engineDoFinal() override;
	virtual int32_t engineGetMacLength() override;
	virtual void engineInit(::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params) override;
	virtual void engineReset() override;
	virtual void engineUpdate(int8_t input) override;
	virtual void engineUpdate($bytes* input, int32_t offset, int32_t len) override;
	virtual void engineUpdate(::java::nio::ByteBuffer* input) override;
	virtual $String* toString() override;
	::java::security::MessageDigest* md = nullptr;
	$bytes* k_ipad = nullptr;
	$bytes* k_opad = nullptr;
	bool first = false;
	int32_t blockLen = 0;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_HmacCore_h_