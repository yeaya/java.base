#ifndef _com_sun_crypto_provider_Poly1305_h_
#define _com_sun_crypto_provider_Poly1305_h_
//$ class com.sun.crypto.provider.Poly1305
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BLOCK_LENGTH")
#undef BLOCK_LENGTH
#pragma push_macro("TAG_LENGTH")
#undef TAG_LENGTH
#pragma push_macro("KEY_LENGTH")
#undef KEY_LENGTH
#pragma push_macro("RS_LENGTH")
#undef RS_LENGTH

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
namespace sun {
	namespace security {
		namespace util {
			namespace math {
				class IntegerFieldModuloP;
				class IntegerModuloP;
				class MutableIntegerModuloP;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class Poly1305 : public ::java::lang::Object {
	$class(Poly1305, 0, ::java::lang::Object)
public:
	Poly1305();
	void init$();
	$bytes* engineDoFinal();
	int32_t engineGetMacLength();
	void engineInit(::java::security::Key* newKey, ::java::security::spec::AlgorithmParameterSpec* params);
	void engineReset();
	void engineUpdate(::java::nio::ByteBuffer* buf);
	void engineUpdate($bytes* input, int32_t offset, int32_t len);
	void engineUpdate(int8_t input);
	void processBlock(::java::nio::ByteBuffer* buf, int32_t len);
	void processBlock($bytes* block, int32_t offset, int32_t length);
	void setRSVals();
	static bool $assertionsDisabled;
	static const int32_t KEY_LENGTH = 32;
	static const int32_t RS_LENGTH = 16; // KEY_LENGTH / 2
	static const int32_t BLOCK_LENGTH = 16;
	static const int32_t TAG_LENGTH = 16;
	static ::sun::security::util::math::IntegerFieldModuloP* ipl1305;
	$bytes* keyBytes = nullptr;
	$bytes* block = nullptr;
	int32_t blockOffset = 0;
	::sun::security::util::math::IntegerModuloP* r = nullptr;
	::sun::security::util::math::IntegerModuloP* s = nullptr;
	::sun::security::util::math::MutableIntegerModuloP* a = nullptr;
	::sun::security::util::math::MutableIntegerModuloP* n = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("BLOCK_LENGTH")
#pragma pop_macro("TAG_LENGTH")
#pragma pop_macro("KEY_LENGTH")
#pragma pop_macro("RS_LENGTH")

#endif // _com_sun_crypto_provider_Poly1305_h_