#ifndef _com_sun_crypto_provider_GaloisCounterMode$GCTRGHASH_h_
#define _com_sun_crypto_provider_GaloisCounterMode$GCTRGHASH_h_
//$ class com.sun.crypto.provider.GaloisCounterMode$GCTRGHASH
//$ extends com.sun.crypto.provider.GCM

#include <com/sun/crypto/provider/GCM.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {
				class GCTR;
				class GHASH;
			}
		}
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class GaloisCounterMode$GCTRGHASH : public ::com::sun::crypto::provider::GCM {
	$class(GaloisCounterMode$GCTRGHASH, $NO_CLASS_INIT, ::com::sun::crypto::provider::GCM)
public:
	GaloisCounterMode$GCTRGHASH();
	void init$(::com::sun::crypto::provider::GCTR* c, ::com::sun::crypto::provider::GHASH* g);
	virtual int32_t doFinal($bytes* in, int32_t inOfs, int32_t inLen, $bytes* out, int32_t outOfs) override;
	virtual int32_t doFinal(::java::nio::ByteBuffer* src, ::java::nio::ByteBuffer* dst) override;
	virtual int32_t update($bytes* in, int32_t inOfs, int32_t inLen, $bytes* out, int32_t outOfs) override;
	virtual int32_t update($bytes* in, int32_t inOfs, int32_t inLen, ::java::nio::ByteBuffer* dst) override;
	virtual int32_t update(::java::nio::ByteBuffer* src, ::java::nio::ByteBuffer* dst) override;
	::com::sun::crypto::provider::GCTR* gctr = nullptr;
	::com::sun::crypto::provider::GHASH* ghash = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_GaloisCounterMode$GCTRGHASH_h_