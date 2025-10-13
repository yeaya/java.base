#include <com/sun/crypto/provider/GHASH.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Cloneable.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <java/security/ProviderException.h>
#include <jcpp.h>

#undef AES_BLOCK_SIZE
#undef BIG_ENDIAN
#undef GHASH
#undef MAX_LEN
#undef X

using $GCM = ::com::sun::crypto::provider::GCM;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $ProviderException = ::java::security::ProviderException;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$CompoundAttribute _GHASH_MethodAnnotations_processBlocks11[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$FieldInfo _GHASH_FieldInfo_[] = {
	{"AES_BLOCK_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GHASH, AES_BLOCK_SIZE)},
	{"asLongView", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GHASH, asLongView)},
	{"MAX_LEN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GHASH, MAX_LEN)},
	{"subkeyHtbl", "[J", nullptr, $PRIVATE, $field(GHASH, subkeyHtbl)},
	{"state", "[J", nullptr, $PRIVATE | $FINAL, $field(GHASH, state)},
	{}
};

$MethodInfo _GHASH_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "([B)V", nullptr, 0, $method(static_cast<void(GHASH::*)($bytes*)>(&GHASH::init$)), "java.security.ProviderException"},
	{"<init>", "(Lcom/sun/crypto/provider/GHASH;)V", nullptr, $PRIVATE, $method(static_cast<void(GHASH::*)(GHASH*)>(&GHASH::init$))},
	{"blockMult", "([J[J)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($longs*,$longs*)>(&GHASH::blockMult))},
	{"clone", "()Lcom/sun/crypto/provider/GHASH;", nullptr, $PUBLIC},
	{"digest", "()[B", nullptr, 0, $method(static_cast<$bytes*(GHASH::*)()>(&GHASH::digest))},
	{"doFinal", "(Ljava/nio/ByteBuffer;I)I", nullptr, 0, $method(static_cast<int32_t(GHASH::*)($ByteBuffer*,int32_t)>(&GHASH::doFinal))},
	{"doFinal", "([BII)I", nullptr, 0, $method(static_cast<int32_t(GHASH::*)($bytes*,int32_t,int32_t)>(&GHASH::doFinal))},
	{"doFinal", "([BII[BI)I", nullptr, $PUBLIC},
	{"doFinal", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC},
	{"ghashRangeCheck", "([BII[J[J)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($bytes*,int32_t,int32_t,$longs*,$longs*)>(&GHASH::ghashRangeCheck))},
	{"processBlock", "([BI[J[J)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($bytes*,int32_t,$longs*,$longs*)>(&GHASH::processBlock))},
	{"processBlocks", "([BII[J[J)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($bytes*,int32_t,int32_t,$longs*,$longs*)>(&GHASH::processBlocks)), nullptr, nullptr, _GHASH_MethodAnnotations_processBlocks11},
	{"processBlocksDirect", "(Ljava/nio/ByteBuffer;I)V", nullptr, $PRIVATE, $method(static_cast<void(GHASH::*)($ByteBuffer*,int32_t)>(&GHASH::processBlocksDirect))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"update", "([B)I", nullptr, 0, $method(static_cast<int32_t(GHASH::*)($bytes*)>(&GHASH::update))},
	{"update", "([BII)I", nullptr, 0, $method(static_cast<int32_t(GHASH::*)($bytes*,int32_t,int32_t)>(&GHASH::update))},
	{"update", "(Ljava/nio/ByteBuffer;I)I", nullptr, 0, $method(static_cast<int32_t(GHASH::*)($ByteBuffer*,int32_t)>(&GHASH::update))},
	{"update", "([BII[BI)I", nullptr, $PUBLIC},
	{"update", "([BIILjava/nio/ByteBuffer;)I", nullptr, $PUBLIC},
	{"update", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _GHASH_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.GHASH",
	"java.lang.Object",
	"java.lang.Cloneable,com.sun.crypto.provider.GCM",
	_GHASH_FieldInfo_,
	_GHASH_MethodInfo_
};

$Object* allocate$GHASH($Class* clazz) {
	return $of($alloc(GHASH));
}

int32_t GHASH::hashCode() {
	 return this->$Cloneable::hashCode();
}

bool GHASH::equals(Object$* obj) {
	 return this->$Cloneable::equals(obj);
}

$String* GHASH::toString() {
	 return this->$Cloneable::toString();
}

void GHASH::finalize() {
	this->$Cloneable::finalize();
}

$VarHandle* GHASH::asLongView = nullptr;

void GHASH::blockMult($longs* st, $longs* subH) {
	$init(GHASH);
	int64_t Z0 = 0;
	int64_t Z1 = 0;
	int64_t V0 = $nc(subH)->get(0);
	int64_t V1 = subH->get(1);
	int64_t X = 0;
	X = $nc(st)->get(0);
	for (int32_t i = 0; i < 64; ++i) {
		int64_t mask = X >> 63;
		Z0 ^= (int64_t)(V0 & (uint64_t)mask);
		Z1 ^= (int64_t)(V1 & (uint64_t)mask);
		mask = (V1 << 63) >> 63;
		int64_t carry = (int64_t)(V0 & (uint64_t)(int64_t)1);
		V0 = (int64_t)((uint64_t)V0 >> 1);
		V1 = ((int64_t)((uint64_t)V1 >> 1)) | (carry << 63);
		V0 ^= (int64_t)((int64_t)0xE100000000000000 & (uint64_t)mask);
		X <<= 1;
	}
	X = st->get(1);
	for (int32_t i = 64; i < 127; ++i) {
		int64_t mask = X >> 63;
		Z0 ^= (int64_t)(V0 & (uint64_t)mask);
		Z1 ^= (int64_t)(V1 & (uint64_t)mask);
		mask = (V1 << 63) >> 63;
		int64_t carry = (int64_t)(V0 & (uint64_t)(int64_t)1);
		V0 = (int64_t)((uint64_t)V0 >> 1);
		V1 = ((int64_t)((uint64_t)V1 >> 1)) | (carry << 63);
		V0 ^= (int64_t)((int64_t)0xE100000000000000 & (uint64_t)mask);
		X <<= 1;
	}
	int64_t mask = X >> 63;
	Z0 ^= (int64_t)(V0 & (uint64_t)mask);
	Z1 ^= (int64_t)(V1 & (uint64_t)mask);
	st->set(0, Z0);
	st->set(1, Z1);
}

void GHASH::init$($bytes* subkeyH) {
	if ((subkeyH == nullptr) || $nc(subkeyH)->length != GHASH::AES_BLOCK_SIZE) {
		$throwNew($ProviderException, "Internal error"_s);
	}
	$set(this, state, $new($longs, 2));
	$set(this, subkeyHtbl, $new($longs, 2 * 9));
	$nc(this->subkeyHtbl)->set(0, $longValue($nc(GHASH::asLongView)->get($$new($ObjectArray, {$of(subkeyH), $$of(0)}))));
	$nc(this->subkeyHtbl)->set(1, $longValue($nc(GHASH::asLongView)->get($$new($ObjectArray, {$of(subkeyH), $$of(8)}))));
}

void GHASH::init$(GHASH* g) {
	$set(this, state, $cast($longs, $nc($nc(g)->state)->clone()));
	$set(this, subkeyHtbl, $cast($longs, $nc(g->subkeyHtbl)->clone()));
}

$Object* GHASH::clone() {
	return $of($new(GHASH, this));
}

void GHASH::processBlock($bytes* data, int32_t ofs, $longs* st, $longs* subH) {
	$init(GHASH);
	(*$nc(st))[0] ^= $longValue($nc(GHASH::asLongView)->get($$new($ObjectArray, {$of(data), $$of(ofs)})));
	(*st)[1] ^= $longValue($nc(GHASH::asLongView)->get($$new($ObjectArray, {$of(data), $$of((ofs + 8))})));
	blockMult(st, subH);
}

int32_t GHASH::update($bytes* in) {
	return update(in, 0, $nc(in)->length);
}

int32_t GHASH::update($bytes* in, int32_t inOfs, int32_t inLen) {
	if (inLen == 0) {
		return 0;
	}
	int32_t len = inLen - ($mod(inLen, GHASH::AES_BLOCK_SIZE));
	ghashRangeCheck(in, inOfs, len, this->state, this->subkeyHtbl);
	processBlocks(in, inOfs, $div(len, GHASH::AES_BLOCK_SIZE), this->state, this->subkeyHtbl);
	return len;
}

int32_t GHASH::update($ByteBuffer* ct, int32_t inLen) {
	inLen -= ($mod(inLen, GHASH::AES_BLOCK_SIZE));
	if (inLen == 0) {
		return 0;
	}
	if ($nc(ct)->isDirect()) {
		int32_t processed = inLen;
		processBlocksDirect(ct, inLen);
		return processed;
	} else if (!ct->isReadOnly()) {
		$var($bytes, var$0, $cast($bytes, ct->array()));
		int32_t var$1 = ct->arrayOffset();
		int32_t processed = update(var$0, var$1 + ct->position(), inLen);
		ct->position(ct->position() + processed);
		return processed;
	}
	int32_t to_process = inLen;
	$var($bytes, in, $new($bytes, $Math::min(GHASH::MAX_LEN, inLen)));
	while (to_process > GHASH::MAX_LEN) {
		ct->get(in, 0, GHASH::MAX_LEN);
		update(in, 0, GHASH::MAX_LEN);
		to_process -= GHASH::MAX_LEN;
	}
	ct->get(in, 0, to_process);
	update(in, 0, to_process);
	return inLen;
}

int32_t GHASH::doFinal($ByteBuffer* src, int32_t inLen) {
	int32_t processed = 0;
	if (inLen >= GHASH::AES_BLOCK_SIZE) {
		processed = update(src, inLen);
	}
	if (inLen == processed) {
		return processed;
	}
	$var($bytes, block, $new($bytes, GHASH::AES_BLOCK_SIZE));
	$nc(src)->get(block, 0, inLen - processed);
	update(block, 0, GHASH::AES_BLOCK_SIZE);
	return inLen;
}

int32_t GHASH::doFinal($bytes* in, int32_t inOfs, int32_t inLen) {
	int32_t remainder = $mod(inLen, GHASH::AES_BLOCK_SIZE);
	inOfs += update(in, inOfs, inLen - remainder);
	if (remainder > 0) {
		$var($bytes, block, $new($bytes, GHASH::AES_BLOCK_SIZE));
		$System::arraycopy(in, inOfs, block, 0, remainder);
		update(block, 0, GHASH::AES_BLOCK_SIZE);
	}
	return inLen;
}

void GHASH::ghashRangeCheck($bytes* in, int32_t inOfs, int32_t inLen, $longs* st, $longs* subH) {
	$init(GHASH);
	if (inLen < 0) {
		$throwNew($RuntimeException, $$str({"invalid input length: "_s, $$str(inLen)}));
	}
	if (inOfs < 0) {
		$throwNew($RuntimeException, $$str({"invalid offset: "_s, $$str(inOfs)}));
	}
	if (inLen > $nc(in)->length - inOfs) {
		$throwNew($RuntimeException, $$str({"input length out of bound: "_s, $$str(inLen), " > "_s, $$str((in->length - inOfs))}));
	}
	if ($mod(inLen, GHASH::AES_BLOCK_SIZE) != 0) {
		$throwNew($RuntimeException, $$str({"input length/block size mismatch: "_s, $$str(inLen)}));
	}
	if ($nc(st)->length != 2) {
		$throwNew($RuntimeException, $$str({"internal state has invalid length: "_s, $$str(st->length)}));
	}
	if ($nc(subH)->length != 18) {
		$throwNew($RuntimeException, $$str({"internal subkeyHtbl has invalid length: "_s, $$str(subH->length)}));
	}
}

void GHASH::processBlocks($bytes* data, int32_t inOfs, int32_t blocks, $longs* st, $longs* subH) {
	$init(GHASH);
	int32_t offset = inOfs;
	while (blocks > 0) {
		processBlock(data, offset, st, subH);
		--blocks;
		offset += GHASH::AES_BLOCK_SIZE;
	}
}

void GHASH::processBlocksDirect($ByteBuffer* ct, int32_t inLen) {
	$var($bytes, data, $new($bytes, $Math::min(GHASH::MAX_LEN, inLen)));
	while (inLen > GHASH::MAX_LEN) {
		$nc(ct)->get(data, 0, GHASH::MAX_LEN);
		processBlocks(data, 0, $div(GHASH::MAX_LEN, GHASH::AES_BLOCK_SIZE), this->state, this->subkeyHtbl);
		inLen -= GHASH::MAX_LEN;
	}
	if (inLen >= GHASH::AES_BLOCK_SIZE) {
		int32_t len = inLen - ($mod(inLen, GHASH::AES_BLOCK_SIZE));
		$nc(ct)->get(data, 0, len);
		processBlocks(data, 0, $div(len, GHASH::AES_BLOCK_SIZE), this->state, this->subkeyHtbl);
	}
}

$bytes* GHASH::digest() {
	$var($bytes, result, $new($bytes, GHASH::AES_BLOCK_SIZE));
	$nc(GHASH::asLongView)->set($$new($ObjectArray, {$of(result), $$of(0), $$of($nc(this->state)->get(0))}));
	$nc(GHASH::asLongView)->set($$new($ObjectArray, {$of(result), $$of(8), $$of($nc(this->state)->get(1))}));
	$nc(this->state)->set(0, 0);
	$nc(this->state)->set(1, 0);
	return result;
}

int32_t GHASH::update($bytes* in, int32_t inOfs, int32_t inLen, $bytes* out, int32_t outOfs) {
	return update(in, inOfs, inLen);
}

int32_t GHASH::update($bytes* in, int32_t inOfs, int32_t inLen, $ByteBuffer* dst) {
	return update(in, inOfs, inLen);
}

int32_t GHASH::update($ByteBuffer* src, $ByteBuffer* dst) {
	return update(src, $nc(src)->remaining());
}

int32_t GHASH::doFinal($bytes* in, int32_t inOfs, int32_t inLen, $bytes* out, int32_t outOfs) {
	return doFinal(in, inOfs, inLen);
}

int32_t GHASH::doFinal($ByteBuffer* src, $ByteBuffer* dst) {
	return doFinal(src, $nc(src)->remaining());
}

void clinit$GHASH($Class* class$) {
	$load($longs);
	$init($ByteOrder);
	$assignStatic(GHASH::asLongView, $MethodHandles::byteArrayViewVarHandle($getClass($longs), $ByteOrder::BIG_ENDIAN));
}

GHASH::GHASH() {
}

$Class* GHASH::load$($String* name, bool initialize) {
	$loadClass(GHASH, name, initialize, &_GHASH_ClassInfo_, clinit$GHASH, allocate$GHASH);
	return class$;
}

$Class* GHASH::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com