#include <com/sun/crypto/provider/GaloisCounterMode$GCMEngine.h>

#include <com/sun/crypto/provider/GCM.h>
#include <com/sun/crypto/provider/GCTR.h>
#include <com/sun/crypto/provider/GHASH.h>
#include <com/sun/crypto/provider/GaloisCounterMode.h>
#include <com/sun/crypto/provider/SymmetricCipher.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Math.h>
#include <java/nio/ByteBuffer.h>
#include <sun/nio/ch/DirectBuffer.h>
#include <jcpp.h>

using $GCM = ::com::sun::crypto::provider::GCM;
using $GCTR = ::com::sun::crypto::provider::GCTR;
using $GHASH = ::com::sun::crypto::provider::GHASH;
using $GaloisCounterMode = ::com::sun::crypto::provider::GaloisCounterMode;
using $SymmetricCipher = ::com::sun::crypto::provider::SymmetricCipher;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $DirectBuffer = ::sun::nio::ch::DirectBuffer;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _GaloisCounterMode$GCMEngine_FieldInfo_[] = {
	{"this$0", "Lcom/sun/crypto/provider/GaloisCounterMode;", nullptr, $FINAL | $SYNTHETIC, $field(GaloisCounterMode$GCMEngine, this$0)},
	{"preCounterBlock", "[B", nullptr, 0, $field(GaloisCounterMode$GCMEngine, preCounterBlock)},
	{"gctrPAndC", "Lcom/sun/crypto/provider/GCTR;", nullptr, 0, $field(GaloisCounterMode$GCMEngine, gctrPAndC)},
	{"ghashAllToS", "Lcom/sun/crypto/provider/GHASH;", nullptr, 0, $field(GaloisCounterMode$GCMEngine, ghashAllToS)},
	{"blockSize", "I", nullptr, $FINAL, $field(GaloisCounterMode$GCMEngine, blockSize)},
	{"processed", "I", nullptr, 0, $field(GaloisCounterMode$GCMEngine, processed)},
	{"aadBuffer", "Ljava/io/ByteArrayOutputStream;", nullptr, 0, $field(GaloisCounterMode$GCMEngine, aadBuffer)},
	{"sizeOfAAD", "I", nullptr, 0, $field(GaloisCounterMode$GCMEngine, sizeOfAAD)},
	{"aadProcessed", "Z", nullptr, 0, $field(GaloisCounterMode$GCMEngine, aadProcessed)},
	{"ibuffer", "Ljava/io/ByteArrayOutputStream;", nullptr, 0, $field(GaloisCounterMode$GCMEngine, ibuffer)},
	{"originalDst", "Ljava/nio/ByteBuffer;", nullptr, 0, $field(GaloisCounterMode$GCMEngine, originalDst)},
	{"originalOut", "[B", nullptr, 0, $field(GaloisCounterMode$GCMEngine, originalOut)},
	{"originalOutOfs", "I", nullptr, 0, $field(GaloisCounterMode$GCMEngine, originalOutOfs)},
	{}
};

$MethodInfo _GaloisCounterMode$GCMEngine_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/crypto/provider/GaloisCounterMode;Lcom/sun/crypto/provider/SymmetricCipher;)V", nullptr, 0, $method(GaloisCounterMode$GCMEngine, init$, void, $GaloisCounterMode*, $SymmetricCipher*)},
	{"doFinal", "([BII[BI)I", nullptr, $ABSTRACT, $virtualMethod(GaloisCounterMode$GCMEngine, doFinal, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t), "javax.crypto.IllegalBlockSizeException,javax.crypto.AEADBadTagException,javax.crypto.ShortBufferException"},
	{"doFinal", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I", nullptr, $ABSTRACT, $virtualMethod(GaloisCounterMode$GCMEngine, doFinal, int32_t, $ByteBuffer*, $ByteBuffer*), "javax.crypto.IllegalBlockSizeException,javax.crypto.AEADBadTagException,javax.crypto.ShortBufferException"},
	{"doLastBlock", "(Lcom/sun/crypto/provider/GCM;Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I", nullptr, 0, $virtualMethod(GaloisCounterMode$GCMEngine, doLastBlock, int32_t, $GCM*, $ByteBuffer*, $ByteBuffer*, $ByteBuffer*)},
	{"doUpdate", "([BII)[B", nullptr, $ABSTRACT, $virtualMethod(GaloisCounterMode$GCMEngine, doUpdate, $bytes*, $bytes*, int32_t, int32_t)},
	{"doUpdate", "([BII[BI)I", nullptr, $ABSTRACT, $virtualMethod(GaloisCounterMode$GCMEngine, doUpdate, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t), "javax.crypto.ShortBufferException"},
	{"doUpdate", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I", nullptr, $ABSTRACT, $virtualMethod(GaloisCounterMode$GCMEngine, doUpdate, int32_t, $ByteBuffer*, $ByteBuffer*), "javax.crypto.ShortBufferException"},
	{"getBufferedLength", "()I", nullptr, 0, $virtualMethod(GaloisCounterMode$GCMEngine, getBufferedLength, int32_t)},
	{"getOutputSize", "(IZ)I", nullptr, $ABSTRACT, $virtualMethod(GaloisCounterMode$GCMEngine, getOutputSize, int32_t, int32_t, bool)},
	{"initBuffer", "(I)V", nullptr, 0, $virtualMethod(GaloisCounterMode$GCMEngine, initBuffer, void, int32_t)},
	{"mergeBlock", "([BI[BII[B)I", nullptr, 0, $virtualMethod(GaloisCounterMode$GCMEngine, mergeBlock, int32_t, $bytes*, int32_t, $bytes*, int32_t, int32_t, $bytes*)},
	{"mergeBlock", "([BII[BII[B)I", nullptr, 0, $virtualMethod(GaloisCounterMode$GCMEngine, mergeBlock, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t, int32_t, $bytes*)},
	{"overlapDetection", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;", nullptr, 0, $virtualMethod(GaloisCounterMode$GCMEngine, overlapDetection, $ByteBuffer*, $ByteBuffer*, $ByteBuffer*)},
	{"overlapDetection", "([BI[BI)[B", nullptr, 0, $virtualMethod(GaloisCounterMode$GCMEngine, overlapDetection, $bytes*, $bytes*, int32_t, $bytes*, int32_t)},
	{"processAAD", "()V", nullptr, 0, $virtualMethod(GaloisCounterMode$GCMEngine, processAAD, void)},
	{"restoreDst", "(Ljava/nio/ByteBuffer;)V", nullptr, 0, $virtualMethod(GaloisCounterMode$GCMEngine, restoreDst, void, $ByteBuffer*)},
	{"restoreOut", "([BI)V", nullptr, 0, $virtualMethod(GaloisCounterMode$GCMEngine, restoreOut, void, $bytes*, int32_t)},
	{"throttleData", "(Lcom/sun/crypto/provider/GCM;[BII[BI)I", nullptr, 0, $virtualMethod(GaloisCounterMode$GCMEngine, throttleData, int32_t, $GCM*, $bytes*, int32_t, int32_t, $bytes*, int32_t)},
	{"throttleData", "(Lcom/sun/crypto/provider/GCM;Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I", nullptr, 0, $virtualMethod(GaloisCounterMode$GCMEngine, throttleData, int32_t, $GCM*, $ByteBuffer*, $ByteBuffer*)},
	{"updateAAD", "([BII)V", nullptr, 0, $virtualMethod(GaloisCounterMode$GCMEngine, updateAAD, void, $bytes*, int32_t, int32_t)},
	{}
};

$InnerClassInfo _GaloisCounterMode$GCMEngine_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.GaloisCounterMode$GCMEngine", "com.sun.crypto.provider.GaloisCounterMode", "GCMEngine", $ABSTRACT},
	{}
};

$ClassInfo _GaloisCounterMode$GCMEngine_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.crypto.provider.GaloisCounterMode$GCMEngine",
	"java.lang.Object",
	nullptr,
	_GaloisCounterMode$GCMEngine_FieldInfo_,
	_GaloisCounterMode$GCMEngine_MethodInfo_,
	nullptr,
	nullptr,
	_GaloisCounterMode$GCMEngine_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.GaloisCounterMode"
};

$Object* allocate$GaloisCounterMode$GCMEngine($Class* clazz) {
	return $of($alloc(GaloisCounterMode$GCMEngine));
}

void GaloisCounterMode$GCMEngine::init$($GaloisCounterMode* this$0, $SymmetricCipher* blockCipher) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	this->processed = 0;
	$set(this, aadBuffer, nullptr);
	this->sizeOfAAD = 0;
	this->aadProcessed = false;
	$set(this, ibuffer, nullptr);
	$set(this, originalDst, nullptr);
	$set(this, originalOut, nullptr);
	this->originalOutOfs = 0;
	this->blockSize = $nc(blockCipher)->getBlockSize();
	$var($bytes, subkeyH, $new($bytes, this->blockSize));
	blockCipher->encryptBlock(subkeyH, 0, subkeyH, 0);
	$set(this, preCounterBlock, $GaloisCounterMode::getJ0(this$0->iv, subkeyH, this->blockSize));
	$var($bytes, j0Plus1, $cast($bytes, $nc(this->preCounterBlock)->clone()));
	$GaloisCounterMode::increment32(j0Plus1);
	$set(this, gctrPAndC, $new($GCTR, blockCipher, j0Plus1));
	$set(this, ghashAllToS, $new($GHASH, subkeyH));
}

void GaloisCounterMode$GCMEngine::initBuffer(int32_t len) {
	if (this->ibuffer == nullptr) {
		$set(this, ibuffer, $new($ByteArrayOutputStream, len));
	}
}

int32_t GaloisCounterMode$GCMEngine::getBufferedLength() {
	return (this->ibuffer == nullptr ? 0 : $nc(this->ibuffer)->size());
}

int32_t GaloisCounterMode$GCMEngine::mergeBlock($bytes* buffer, int32_t bufOfs, $bytes* in, int32_t inOfs, int32_t inLen, $bytes* block) {
	return mergeBlock(buffer, bufOfs, $nc(buffer)->length - bufOfs, in, inOfs, inLen, block);
}

int32_t GaloisCounterMode$GCMEngine::mergeBlock($bytes* buffer, int32_t bufOfs, int32_t bufLen, $bytes* in, int32_t inOfs, int32_t inLen, $bytes* block) {
	$useLocalCurrentObjectStackCache();
	if (bufLen > this->blockSize) {
		$throwNew($RuntimeException, $$str({"mergeBlock called on an ibuffer too big:  "_s, $$str(bufLen), " bytes"_s}));
	}
	$System::arraycopy(buffer, bufOfs, block, 0, bufLen);
	int32_t inUsed = $Math::min($nc(block)->length - bufLen, inLen);
	$System::arraycopy(in, inOfs, block, bufLen, inUsed);
	return inUsed;
}

void GaloisCounterMode$GCMEngine::updateAAD($bytes* src, int32_t offset, int32_t len) {
	if (this->this$0->encryption) {
		this->this$0->checkReInit();
	}
	if (this->aadBuffer == nullptr) {
		if (this->sizeOfAAD == 0 && !this->aadProcessed) {
			$set(this, aadBuffer, $new($ByteArrayOutputStream, len));
		} else {
			$throwNew($IllegalStateException, "Update has been called; no more AAD data"_s);
		}
	}
	$nc(this->aadBuffer)->write(src, offset, len);
}

void GaloisCounterMode$GCMEngine::processAAD() {
	$useLocalCurrentObjectStackCache();
	if (this->aadBuffer != nullptr) {
		if ($nc(this->aadBuffer)->size() > 0) {
			$var($bytes, aad, $nc(this->aadBuffer)->toByteArray());
			this->sizeOfAAD = $nc(aad)->length;
			int32_t lastLen = $mod(aad->length, this->blockSize);
			if (lastLen != 0) {
				$nc(this->ghashAllToS)->update(aad, 0, aad->length - lastLen);
				$var($bytes, padded, $GaloisCounterMode::expandToOneBlock(aad, aad->length - lastLen, lastLen, this->blockSize));
				$nc(this->ghashAllToS)->update(padded);
			} else {
				$nc(this->ghashAllToS)->update(aad);
			}
		}
		$set(this, aadBuffer, nullptr);
	}
	this->aadProcessed = true;
}

int32_t GaloisCounterMode$GCMEngine::doLastBlock($GCM* op, $ByteBuffer* buffer, $ByteBuffer* src, $ByteBuffer* dst) {
	int32_t resultLen = 0;
	int32_t bLen = (buffer != nullptr ? $nc(buffer)->remaining() : 0);
	if (bLen > 0) {
		if (bLen >= this->blockSize) {
			resultLen += $nc(op)->update(buffer, dst);
		}
		if (bLen - resultLen > 0) {
			$var($bytes, block, $new($bytes, this->blockSize));
			int32_t over = buffer->remaining();
			buffer->get(block, 0, over);
			int32_t slen = $Math::min($nc(src)->remaining(), this->blockSize - over);
			if (slen > 0) {
				$nc(src)->get(block, over, slen);
			}
			int32_t len = slen + over;
			if (len == this->blockSize) {
				resultLen += $nc(op)->update(block, 0, this->blockSize, dst);
			} else {
				resultLen += $nc(op)->doFinal(block, 0, len, block, 0);
				if (dst != nullptr) {
					dst->put(block, 0, len);
				}
				this->processed += resultLen;
				return resultLen;
			}
		}
	}
	if ($nc(src)->remaining() > 0x00010000) {
		resultLen += throttleData(op, src, dst);
	}
	resultLen += $nc(op)->doFinal(src, dst);
	this->processed += resultLen;
	return resultLen;
}

int32_t GaloisCounterMode$GCMEngine::throttleData($GCM* op, $bytes* in, int32_t inOfs, int32_t inLen, $bytes* out, int32_t outOfs) {
	int32_t segments = (inLen / 6);
	segments -= $mod(segments, this->blockSize);
	int32_t len = 0;
	int32_t i = 0;
	do {
		len += $nc(op)->update(in, inOfs + len, segments, out, outOfs + len);
	} while (++i < 5);
	len += $nc(op)->update(in, inOfs + len, inLen - len, out, outOfs + len);
	return len;
}

int32_t GaloisCounterMode$GCMEngine::throttleData($GCM* op, $ByteBuffer* src, $ByteBuffer* dst) {
	int32_t inLen = $nc(src)->limit();
	int32_t segments = (src->remaining() / 6);
	segments -= $mod(segments, this->blockSize);
	int32_t i = 0;
	int32_t resultLen = 0;
	do {
		src->limit(src->position() + segments);
		resultLen += $nc(op)->update(src, dst);
	} while (++i < 5);
	src->limit(inLen);
	if (src->remaining() > this->blockSize) {
		resultLen += $nc(op)->update(src, dst);
	}
	return resultLen;
}

$ByteBuffer* GaloisCounterMode$GCMEngine::overlapDetection($ByteBuffer* src, $ByteBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(src)->isDirect();
	if (var$0 && $nc(dst)->isDirect()) {
		$var($DirectBuffer, dsrc, $cast($DirectBuffer, src));
		$var($DirectBuffer, ddst, $cast($DirectBuffer, dst));
		int64_t srcaddr = dsrc->address();
		int64_t dstaddr = ddst->address();
		while ($nc(dsrc)->attachment() != nullptr) {
			srcaddr = $nc(($cast($DirectBuffer, $(dsrc->attachment()))))->address();
			$assign(dsrc, $cast($DirectBuffer, dsrc->attachment()));
		}
		while ($nc(ddst)->attachment() != nullptr) {
			dstaddr = $nc(($cast($DirectBuffer, $(ddst->attachment()))))->address();
			$assign(ddst, $cast($DirectBuffer, ddst->attachment()));
		}
		if (srcaddr != dstaddr) {
			return dst;
		}
		int64_t var$2 = $nc(($cast($DirectBuffer, src)))->address() - srcaddr;
		int64_t var$1 = var$2 + src->position();
		int64_t var$4 = $nc(($cast($DirectBuffer, dst)))->address() - dstaddr;
		int64_t var$3 = var$4 + dst->position();
		if (var$1 >= var$3) {
			return dst;
		}
	} else {
		bool var$6 = !src->isDirect();
		if (var$6 && !dst->isDirect()) {
			if (!src->isReadOnly()) {
				if ($cast($bytes, src->array()) != $cast($bytes, dst->array())) {
					return dst;
				}
				int32_t var$8 = src->position();
				int32_t var$7 = var$8 + src->arrayOffset();
				int32_t var$10 = dst->position();
				int32_t var$9 = var$10 + dst->arrayOffset();
				if (var$7 >= var$9) {
					return dst;
				}
			}
		} else {
			return dst;
		}
	}
	$var($ByteBuffer, tmp, $nc(dst)->duplicate());
	$var($ByteBuffer, bb, $ByteBuffer::allocate(dst->remaining()));
	$nc(tmp)->limit(dst->limit());
	tmp->position(dst->position());
	$nc(bb)->put(tmp);
	bb->flip();
	$set(this, originalDst, dst);
	return bb;
}

$bytes* GaloisCounterMode$GCMEngine::overlapDetection($bytes* in, int32_t inOfs, $bytes* out, int32_t outOfs) {
	if (in == out && inOfs < outOfs) {
		$set(this, originalOut, out);
		this->originalOutOfs = outOfs;
		return $new($bytes, $nc(out)->length);
	}
	return out;
}

void GaloisCounterMode$GCMEngine::restoreDst($ByteBuffer* dst) {
	if (this->originalDst == nullptr) {
		return;
	}
	$nc(dst)->flip();
	$nc(this->originalDst)->put(dst);
	$set(this, originalDst, nullptr);
}

void GaloisCounterMode$GCMEngine::restoreOut($bytes* out, int32_t len) {
	if (this->originalOut == nullptr) {
		return;
	}
	$System::arraycopy(out, this->originalOutOfs, this->originalOut, this->originalOutOfs, len);
	$set(this, originalOut, nullptr);
}

GaloisCounterMode$GCMEngine::GaloisCounterMode$GCMEngine() {
}

$Class* GaloisCounterMode$GCMEngine::load$($String* name, bool initialize) {
	$loadClass(GaloisCounterMode$GCMEngine, name, initialize, &_GaloisCounterMode$GCMEngine_ClassInfo_, allocate$GaloisCounterMode$GCMEngine);
	return class$;
}

$Class* GaloisCounterMode$GCMEngine::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com