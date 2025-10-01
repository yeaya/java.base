#ifndef _com_sun_crypto_provider_GCM_h_
#define _com_sun_crypto_provider_GCM_h_
//$ interface com.sun.crypto.provider.GCM
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class $export GCM : public ::java::lang::Object {
	$interface(GCM, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t doFinal($bytes* in, int32_t inOfs, int32_t inLen, $bytes* out, int32_t outOfs) {return 0;}
	virtual int32_t doFinal(::java::nio::ByteBuffer* src, ::java::nio::ByteBuffer* dst) {return 0;}
	virtual int32_t update($bytes* in, int32_t inOfs, int32_t inLen, $bytes* out, int32_t outOfs) {return 0;}
	virtual int32_t update($bytes* in, int32_t inOfs, int32_t inLen, ::java::nio::ByteBuffer* dst) {return 0;}
	virtual int32_t update(::java::nio::ByteBuffer* src, ::java::nio::ByteBuffer* dst) {return 0;}
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_GCM_h_