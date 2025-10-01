#ifndef _com_sun_crypto_provider_GCTR_h_
#define _com_sun_crypto_provider_GCTR_h_
//$ class com.sun.crypto.provider.GCTR
//$ extends com.sun.crypto.provider.CounterMode
//$ implements com.sun.crypto.provider.GCM

#include <com/sun/crypto/provider/CounterMode.h>
#include <com/sun/crypto/provider/GCM.h>
#include <java/lang/Array.h>

#pragma push_macro("MAX_LEN")
#undef MAX_LEN

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {
				class SymmetricCipher;
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

class GCTR : public ::com::sun::crypto::provider::CounterMode, public ::com::sun::crypto::provider::GCM {
	$class(GCTR, $NO_CLASS_INIT, ::com::sun::crypto::provider::CounterMode, ::com::sun::crypto::provider::GCM)
public:
	GCTR();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::crypto::provider::SymmetricCipher* cipher, $bytes* initialCounterBlk);
	int64_t blocksUntilRollover();
	void checkBlock();
	virtual int32_t doFinal($bytes* in, int32_t inOfs, int32_t inLen, $bytes* out, int32_t outOfs) override;
	virtual int32_t doFinal(::java::nio::ByteBuffer* src, ::java::nio::ByteBuffer* dst) override;
	virtual $String* getFeedback() override;
	virtual $String* toString() override;
	virtual int32_t update($bytes* in, int32_t inOfs, int32_t inLen, $bytes* out, int32_t outOfs) override;
	virtual int32_t update($bytes* in, int32_t inOfs, int32_t inLen, ::java::nio::ByteBuffer* dst) override;
	virtual int32_t update(::java::nio::ByteBuffer* src, ::java::nio::ByteBuffer* dst) override;
	static const int32_t MAX_LEN = 1024;
	$bytes* block = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("MAX_LEN")

#endif // _com_sun_crypto_provider_GCTR_h_