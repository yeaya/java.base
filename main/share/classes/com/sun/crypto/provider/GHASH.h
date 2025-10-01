#ifndef _com_sun_crypto_provider_GHASH_h_
#define _com_sun_crypto_provider_GHASH_h_
//$ class com.sun.crypto.provider.GHASH
//$ extends java.lang.Cloneable
//$ implements com.sun.crypto.provider.GCM

#include <com/sun/crypto/provider/GCM.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

#pragma push_macro("AES_BLOCK_SIZE")
#undef AES_BLOCK_SIZE
#pragma push_macro("MAX_LEN")
#undef MAX_LEN

namespace java {
	namespace lang {
		namespace invoke {
			class VarHandle;
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

class GHASH : public ::java::lang::Cloneable, public ::com::sun::crypto::provider::GCM {
	$class(GHASH, 0, ::java::lang::Cloneable, ::com::sun::crypto::provider::GCM)
public:
	GHASH();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($bytes* subkeyH);
	void init$(::com::sun::crypto::provider::GHASH* g);
	static void blockMult($longs* st, $longs* subH);
	virtual $Object* clone() override;
	$bytes* digest();
	int32_t doFinal(::java::nio::ByteBuffer* src, int32_t inLen);
	int32_t doFinal($bytes* in, int32_t inOfs, int32_t inLen);
	virtual int32_t doFinal($bytes* in, int32_t inOfs, int32_t inLen, $bytes* out, int32_t outOfs) override;
	virtual int32_t doFinal(::java::nio::ByteBuffer* src, ::java::nio::ByteBuffer* dst) override;
	static void ghashRangeCheck($bytes* in, int32_t inOfs, int32_t inLen, $longs* st, $longs* subH);
	static void processBlock($bytes* data, int32_t ofs, $longs* st, $longs* subH);
	static void processBlocks($bytes* data, int32_t inOfs, int32_t blocks, $longs* st, $longs* subH);
	void processBlocksDirect(::java::nio::ByteBuffer* ct, int32_t inLen);
	virtual $String* toString() override;
	int32_t update($bytes* in);
	int32_t update($bytes* in, int32_t inOfs, int32_t inLen);
	int32_t update(::java::nio::ByteBuffer* ct, int32_t inLen);
	virtual int32_t update($bytes* in, int32_t inOfs, int32_t inLen, $bytes* out, int32_t outOfs) override;
	virtual int32_t update($bytes* in, int32_t inOfs, int32_t inLen, ::java::nio::ByteBuffer* dst) override;
	virtual int32_t update(::java::nio::ByteBuffer* src, ::java::nio::ByteBuffer* dst) override;
	static const int32_t AES_BLOCK_SIZE = 16;
	static ::java::lang::invoke::VarHandle* asLongView;
	static const int32_t MAX_LEN = 1024;
	$longs* subkeyHtbl = nullptr;
	$longs* state = nullptr;
};

			} // provider
		} // crypto
	} // sun
} // com

#pragma pop_macro("AES_BLOCK_SIZE")
#pragma pop_macro("MAX_LEN")

#endif // _com_sun_crypto_provider_GHASH_h_