#include <com/sun/crypto/provider/GCTR.h>

#include <com/sun/crypto/provider/CounterMode.h>
#include <com/sun/crypto/provider/FeedbackCipher.h>
#include <com/sun/crypto/provider/GaloisCounterMode.h>
#include <com/sun/crypto/provider/SymmetricCipher.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef MAX_LEN
#undef BIG_ENDIAN
#undef GCTR

using $CounterMode = ::com::sun::crypto::provider::CounterMode;
using $FeedbackCipher = ::com::sun::crypto::provider::FeedbackCipher;
using $GCM = ::com::sun::crypto::provider::GCM;
using $GaloisCounterMode = ::com::sun::crypto::provider::GaloisCounterMode;
using $SymmetricCipher = ::com::sun::crypto::provider::SymmetricCipher;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $Arrays = ::java::util::Arrays;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _GCTR_FieldInfo_[] = {
	{"MAX_LEN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GCTR, MAX_LEN)},
	{"block", "[B", nullptr, $PRIVATE, $field(GCTR, block)},
	{}
};

$MethodInfo _GCTR_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/crypto/provider/SymmetricCipher;[B)V", nullptr, 0, $method(static_cast<void(GCTR::*)($SymmetricCipher*,$bytes*)>(&GCTR::init$))},
	{"blocksUntilRollover", "()J", nullptr, $PRIVATE, $method(static_cast<int64_t(GCTR::*)()>(&GCTR::blocksUntilRollover))},
	{"checkBlock", "()V", nullptr, $PRIVATE, $method(static_cast<void(GCTR::*)()>(&GCTR::checkBlock))},
	{"doFinal", "([BII[BI)I", nullptr, $PUBLIC},
	{"doFinal", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC},
	{"getFeedback", "()Ljava/lang/String;", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"update", "([BII[BI)I", nullptr, $PUBLIC},
	{"update", "([BIILjava/nio/ByteBuffer;)I", nullptr, $PUBLIC},
	{"update", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _GCTR_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.GCTR",
	"com.sun.crypto.provider.CounterMode",
	"com.sun.crypto.provider.GCM",
	_GCTR_FieldInfo_,
	_GCTR_MethodInfo_
};

$Object* allocate$GCTR($Class* clazz) {
	return $of($alloc(GCTR));
}

int32_t GCTR::hashCode() {
	 return this->$CounterMode::hashCode();
}

bool GCTR::equals(Object$* obj) {
	 return this->$CounterMode::equals(obj);
}

$Object* GCTR::clone() {
	 return this->$CounterMode::clone();
}

$String* GCTR::toString() {
	 return this->$CounterMode::toString();
}

void GCTR::finalize() {
	this->$CounterMode::finalize();
}

void GCTR::init$($SymmetricCipher* cipher, $bytes* initialCounterBlk) {
	$CounterMode::init$(cipher);
	if ($nc(initialCounterBlk)->length != this->blockSize) {
		$throwNew($RuntimeException, $$str({"length of initial counter block ("_s, $$str(initialCounterBlk->length), ") not equal to blockSize ("_s, $$str(this->blockSize), ")"_s}));
	}
	$set(this, iv, initialCounterBlk);
	reset();
}

$String* GCTR::getFeedback() {
	return "GCTR"_s;
}

int64_t GCTR::blocksUntilRollover() {
	$var($ByteBuffer, buf, $ByteBuffer::wrap(this->counter, $nc(this->counter)->length - 4, 4));
	$init($ByteOrder);
	$nc(buf)->order($ByteOrder::BIG_ENDIAN);
	int64_t ctr32 = (int64_t)((int64_t)0x00000000FFFFFFFF & (uint64_t)(int64_t)buf->getInt());
	int64_t blocksLeft = ((int64_t)1 << 32) - ctr32;
	return blocksLeft;
}

void GCTR::checkBlock() {
	if (this->block == nullptr) {
		$set(this, block, $new($bytes, this->blockSize));
	} else {
		$Arrays::fill(this->block, (int8_t)0);
	}
}

int32_t GCTR::update($bytes* in, int32_t inOfs, int32_t inLen, $bytes* out, int32_t outOfs) {
	if (inLen == 0) {
		return 0;
	}
	if (inLen - inOfs > $nc(in)->length) {
		$throwNew($RuntimeException, "input length out of bound"_s);
	}
	if (inLen < 0) {
		$throwNew($RuntimeException, "input length unsupported"_s);
	}
	if ($nc(out)->length - outOfs < (inLen - ($mod(inLen, this->blockSize)))) {
		$throwNew($RuntimeException, "output buffer too small"_s);
	}
	inLen -= $mod(inLen, this->blockSize);
	int64_t blocksLeft = blocksUntilRollover();
	int32_t numOfCompleteBlocks = $div(inLen, this->blockSize);
	if (numOfCompleteBlocks >= blocksLeft) {
		checkBlock();
		for (int32_t i = 0; i < numOfCompleteBlocks; ++i) {
			$nc(this->embeddedCipher)->encryptBlock(this->counter, 0, this->block, 0);
			for (int32_t n = 0; n < this->blockSize; ++n) {
				int32_t index = (i * this->blockSize + n);
				$nc(out)->set(outOfs + index, (int8_t)($nc(in)->get(inOfs + index) ^ $nc(this->block)->get(n)));
			}
			$GaloisCounterMode::increment32(this->counter);
		}
		return inLen;
	} else {
		return encrypt(in, inOfs, inLen, out, outOfs);
	}
}

int32_t GCTR::update($bytes* in, int32_t inOfs, int32_t inLen, $ByteBuffer* dst) {
	if (!$nc(dst)->isDirect()) {
		$var($bytes, var$0, in);
		int32_t var$1 = inOfs;
		int32_t var$2 = inLen;
		$var($bytes, var$3, $cast($bytes, dst->array()));
		int32_t var$4 = dst->arrayOffset();
		int32_t len = update(var$0, var$1, var$2, var$3, var$4 + dst->position());
		dst->position(dst->position() + len);
		return len;
	}
	if (inLen - inOfs > $nc(in)->length) {
		$throwNew($RuntimeException, "input length out of bound"_s);
	}
	if (inLen < 0) {
		$throwNew($RuntimeException, "input length unsupported"_s);
	}
	int64_t blocksLeft = blocksUntilRollover();
	int32_t numOfCompleteBlocks = $div(inLen, this->blockSize);
	if (numOfCompleteBlocks >= blocksLeft) {
		checkBlock();
		for (int32_t i = 0; i < numOfCompleteBlocks; ++i) {
			$nc(this->embeddedCipher)->encryptBlock(this->counter, 0, this->block, 0);
			for (int32_t n = 0; n < this->blockSize; ++n) {
				int32_t index = (i * this->blockSize + n);
				$nc(dst)->put((int8_t)($nc(in)->get(inOfs + index) ^ $nc(this->block)->get(n)));
			}
			$GaloisCounterMode::increment32(this->counter);
		}
		return inLen;
	} else {
		int32_t len = inLen - $mod(inLen, this->blockSize);
		int32_t processed = len;
		$var($bytes, out, $new($bytes, $Math::min(GCTR::MAX_LEN, len)));
		int32_t offset = inOfs;
		while (processed > GCTR::MAX_LEN) {
			encrypt(in, offset, GCTR::MAX_LEN, out, 0);
			$nc(dst)->put(out, 0, GCTR::MAX_LEN);
			processed -= GCTR::MAX_LEN;
			offset += GCTR::MAX_LEN;
		}
		encrypt(in, offset, processed, out, 0);
		$nc(dst)->put(out, 0, $Math::min(dst->remaining(), processed));
		return len;
	}
}

int32_t GCTR::update($ByteBuffer* src, $ByteBuffer* dst) {
	int32_t len = 0;
	bool var$0 = $nc(src)->hasArray();
	if (var$0 && $nc(dst)->hasArray()) {
		$var($bytes, var$1, $cast($bytes, src->array()));
		int32_t var$3 = src->arrayOffset();
		int32_t var$2 = var$3 + src->position();
		int32_t var$5 = src->remaining();
		int32_t var$4 = var$5 - ($mod(src->remaining(), this->blockSize));
		$var($bytes, var$6, $cast($bytes, dst->array()));
		int32_t var$7 = dst->arrayOffset();
		len = update(var$1, var$2, var$4, var$6, var$7 + dst->position());
		src->position(src->position() + len);
		dst->position(dst->position() + len);
		return len;
	}
	int64_t blocksLeft = blocksUntilRollover();
	int32_t numOfCompleteBlocks = $div($nc(src)->remaining(), this->blockSize);
	if (numOfCompleteBlocks >= blocksLeft) {
		checkBlock();
		for (int32_t i = 0; i < numOfCompleteBlocks; ++i) {
			$nc(this->embeddedCipher)->encryptBlock(this->counter, 0, this->block, 0);
			for (int32_t n = 0; n < this->blockSize; ++n) {
				$nc(dst)->put((int8_t)(src->get() ^ $nc(this->block)->get(n)));
			}
			$GaloisCounterMode::increment32(this->counter);
		}
		return numOfCompleteBlocks * this->blockSize;
	}
	int32_t var$8 = src->remaining();
	len = var$8 - ($mod(src->remaining(), this->blockSize));
	int32_t processed = len;
	$var($bytes, in, $new($bytes, $Math::min(GCTR::MAX_LEN, len)));
	while (processed > GCTR::MAX_LEN) {
		src->get(in, 0, GCTR::MAX_LEN);
		encrypt(in, 0, GCTR::MAX_LEN, in, 0);
		$nc(dst)->put(in, 0, GCTR::MAX_LEN);
		processed -= GCTR::MAX_LEN;
	}
	src->get(in, 0, processed);
	encrypt(in, 0, processed, in, 0);
	$nc(dst)->put(in, 0, processed);
	return len;
}

int32_t GCTR::doFinal($bytes* in, int32_t inOfs, int32_t inLen, $bytes* out, int32_t outOfs) {
	if (inLen == 0) {
		return 0;
	}
	int32_t lastBlockSize = $mod(inLen, this->blockSize);
	int32_t completeBlkLen = inLen - lastBlockSize;
	update(in, inOfs, completeBlkLen, out, outOfs);
	if (lastBlockSize != 0) {
		checkBlock();
		$nc(this->embeddedCipher)->encryptBlock(this->counter, 0, this->block, 0);
		for (int32_t n = 0; n < lastBlockSize; ++n) {
			$nc(out)->set(outOfs + completeBlkLen + n, (int8_t)($nc(in)->get(inOfs + completeBlkLen + n) ^ $nc(this->block)->get(n)));
		}
	}
	return inLen;
}

int32_t GCTR::doFinal($ByteBuffer* src, $ByteBuffer* dst) {
	bool var$0 = $nc(src)->hasArray();
	if (var$0 && $nc(dst)->hasArray()) {
		$var($bytes, var$1, $cast($bytes, src->array()));
		int32_t var$3 = src->arrayOffset();
		int32_t var$2 = var$3 + src->position();
		int32_t var$4 = src->remaining();
		$var($bytes, var$5, $cast($bytes, dst->array()));
		int32_t var$6 = dst->arrayOffset();
		int32_t len = doFinal(var$1, var$2, var$4, var$5, var$6 + dst->position());
		src->position(src->position() + len);
		dst->position(dst->position() + len);
		return len;
	}
	int32_t len = $nc(src)->remaining();
	int32_t lastBlockSize = $mod(len, this->blockSize);
	update(src, dst);
	if (lastBlockSize != 0) {
		checkBlock();
		$nc(this->embeddedCipher)->encryptBlock(this->counter, 0, this->block, 0);
		for (int32_t n = 0; n < lastBlockSize; ++n) {
			$nc(dst)->put((int8_t)(src->get() ^ $nc(this->block)->get(n)));
		}
	}
	return len;
}

GCTR::GCTR() {
}

$Class* GCTR::load$($String* name, bool initialize) {
	$loadClass(GCTR, name, initialize, &_GCTR_ClassInfo_, allocate$GCTR);
	return class$;
}

$Class* GCTR::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com