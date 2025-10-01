#ifndef _javax_crypto_MacSpi_h_
#define _javax_crypto_MacSpi_h_
//$ class javax.crypto.MacSpi
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

namespace javax {
	namespace crypto {

class $import MacSpi : public ::java::lang::Object {
	$class(MacSpi, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MacSpi();
	void init$();
	virtual $Object* clone() override;
	virtual $bytes* engineDoFinal() {return nullptr;}
	virtual int32_t engineGetMacLength() {return 0;}
	virtual void engineInit(::java::security::Key* key, ::java::security::spec::AlgorithmParameterSpec* params) {}
	virtual void engineReset() {}
	virtual void engineUpdate(int8_t input) {}
	virtual void engineUpdate($bytes* input, int32_t offset, int32_t len) {}
	virtual void engineUpdate(::java::nio::ByteBuffer* input);
};

	} // crypto
} // javax

#endif // _javax_crypto_MacSpi_h_