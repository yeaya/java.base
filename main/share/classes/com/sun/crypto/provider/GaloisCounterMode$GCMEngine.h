#ifndef _com_sun_crypto_provider_GaloisCounterMode$GCMEngine_h_
#define _com_sun_crypto_provider_GaloisCounterMode$GCMEngine_h_
//$ class com.sun.crypto.provider.GaloisCounterMode$GCMEngine
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {
				class GCM;
				class GCTR;
				class GHASH;
				class GaloisCounterMode;
				class SymmetricCipher;
			}
		}
	}
}
namespace java {
	namespace io {
		class ByteArrayOutputStream;
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

class GaloisCounterMode$GCMEngine : public ::java::lang::Object {
	$class(GaloisCounterMode$GCMEngine, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GaloisCounterMode$GCMEngine();
	void init$(::com::sun::crypto::provider::GaloisCounterMode* this$0, ::com::sun::crypto::provider::SymmetricCipher* blockCipher);
	virtual int32_t doFinal($bytes* in, int32_t inOff, int32_t inLen, $bytes* out, int32_t outOff) {return 0;}
	virtual int32_t doFinal(::java::nio::ByteBuffer* src, ::java::nio::ByteBuffer* dst) {return 0;}
	virtual int32_t doLastBlock(::com::sun::crypto::provider::GCM* op, ::java::nio::ByteBuffer* buffer, ::java::nio::ByteBuffer* src, ::java::nio::ByteBuffer* dst);
	virtual $bytes* doUpdate($bytes* in, int32_t inOff, int32_t inLen) {return nullptr;}
	virtual int32_t doUpdate($bytes* in, int32_t inOff, int32_t inLen, $bytes* out, int32_t outOff) {return 0;}
	virtual int32_t doUpdate(::java::nio::ByteBuffer* src, ::java::nio::ByteBuffer* dst) {return 0;}
	virtual int32_t getBufferedLength();
	virtual int32_t getOutputSize(int32_t inLen, bool isFinal) {return 0;}
	virtual void initBuffer(int32_t len);
	virtual int32_t mergeBlock($bytes* buffer, int32_t bufOfs, $bytes* in, int32_t inOfs, int32_t inLen, $bytes* block);
	virtual int32_t mergeBlock($bytes* buffer, int32_t bufOfs, int32_t bufLen, $bytes* in, int32_t inOfs, int32_t inLen, $bytes* block);
	virtual ::java::nio::ByteBuffer* overlapDetection(::java::nio::ByteBuffer* src, ::java::nio::ByteBuffer* dst);
	virtual $bytes* overlapDetection($bytes* in, int32_t inOfs, $bytes* out, int32_t outOfs);
	virtual void processAAD();
	virtual void restoreDst(::java::nio::ByteBuffer* dst);
	virtual void restoreOut($bytes* out, int32_t len);
	virtual int32_t throttleData(::com::sun::crypto::provider::GCM* op, $bytes* in, int32_t inOfs, int32_t inLen, $bytes* out, int32_t outOfs);
	virtual int32_t throttleData(::com::sun::crypto::provider::GCM* op, ::java::nio::ByteBuffer* src, ::java::nio::ByteBuffer* dst);
	virtual void updateAAD($bytes* src, int32_t offset, int32_t len);
	::com::sun::crypto::provider::GaloisCounterMode* this$0 = nullptr;
	$bytes* preCounterBlock = nullptr;
	::com::sun::crypto::provider::GCTR* gctrPAndC = nullptr;
	::com::sun::crypto::provider::GHASH* ghashAllToS = nullptr;
	int32_t blockSize = 0;
	int32_t processed = 0;
	::java::io::ByteArrayOutputStream* aadBuffer = nullptr;
	int32_t sizeOfAAD = 0;
	bool aadProcessed = false;
	::java::io::ByteArrayOutputStream* ibuffer = nullptr;
	::java::nio::ByteBuffer* originalDst = nullptr;
	$bytes* originalOut = nullptr;
	int32_t originalOutOfs = 0;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_GaloisCounterMode$GCMEngine_h_