#ifndef _com_sun_crypto_provider_SslMacCore$SslMacSHA1_h_
#define _com_sun_crypto_provider_SslMacCore$SslMacSHA1_h_
//$ class com.sun.crypto.provider.SslMacCore$SslMacSHA1
//$ extends javax.crypto.MacSpi

#include <java/lang/Array.h>
#include <javax/crypto/MacSpi.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {
				class SslMacCore;
			}
		}
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace security {
		class Key;
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

class SslMacCore$SslMacSHA1 : public ::javax::crypto::MacSpi {
	$class(SslMacCore$SslMacSHA1, 0, ::javax::crypto::MacSpi)
public:
	SslMacCore$SslMacSHA1();
	void init$();
	virtual $bytes* engineDoFinal() override;
	virtual int32_t engineGetMacLength() override;
	virtual void engineInit(::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params) override;
	virtual void engineReset() override;
	virtual void engineUpdate(int8_t input) override;
	virtual void engineUpdate($bytes* input, int32_t offset, int32_t len) override;
	virtual void engineUpdate(::java::nio::ByteBuffer* input) override;
	::com::sun::crypto::provider::SslMacCore* core = nullptr;
	static $bytes* shaPad1;
	static $bytes* shaPad2;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_SslMacCore$SslMacSHA1_h_