#include <com/sun/crypto/provider/GaloisCounterMode$GCTRGHASH.h>
#include <com/sun/crypto/provider/GCTR.h>
#include <com/sun/crypto/provider/GHASH.h>
#include <com/sun/crypto/provider/GaloisCounterMode.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $GCTR = ::com::sun::crypto::provider::GCTR;
using $GHASH = ::com::sun::crypto::provider::GHASH;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

void GaloisCounterMode$GCTRGHASH::init$($GCTR* c, $GHASH* g) {
	$set(this, gctr, c);
	$set(this, ghash, g);
}

int32_t GaloisCounterMode$GCTRGHASH::update($bytes* in, int32_t inOfs, int32_t inLen, $bytes* out, int32_t outOfs) {
	int32_t len = $nc(this->gctr)->update(in, inOfs, inLen, out, outOfs);
	$nc(this->ghash)->update(out, outOfs, len);
	return len;
}

int32_t GaloisCounterMode$GCTRGHASH::update($bytes* in, int32_t inOfs, int32_t inLen, $ByteBuffer* dst) {
	$nc(dst)->mark();
	int32_t len = $nc(this->gctr)->update(in, inOfs, inLen, dst);
	dst->reset();
	$nc(this->ghash)->update(dst, len);
	return len;
}

int32_t GaloisCounterMode$GCTRGHASH::update($ByteBuffer* src, $ByteBuffer* dst) {
	$nc(dst)->mark();
	int32_t len = $nc(this->gctr)->update(src, dst);
	dst->reset();
	$nc(this->ghash)->update(dst, len);
	return len;
}

int32_t GaloisCounterMode$GCTRGHASH::doFinal($bytes* in, int32_t inOfs, int32_t inLen, $bytes* out, int32_t outOfs) {
	int32_t len = $nc(this->gctr)->doFinal(in, inOfs, inLen, out, outOfs);
	$nc(this->ghash)->doFinal(out, outOfs, len);
	return len;
}

int32_t GaloisCounterMode$GCTRGHASH::doFinal($ByteBuffer* src, $ByteBuffer* dst) {
	$nc(dst)->mark();
	int32_t l = $nc(this->gctr)->doFinal(src, dst);
	dst->reset();
	$nc(this->ghash)->doFinal(dst, l);
	return l;
}

GaloisCounterMode$GCTRGHASH::GaloisCounterMode$GCTRGHASH() {
}

$Class* GaloisCounterMode$GCTRGHASH::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"gctr", "Lcom/sun/crypto/provider/GCTR;", nullptr, 0, $field(GaloisCounterMode$GCTRGHASH, gctr)},
		{"ghash", "Lcom/sun/crypto/provider/GHASH;", nullptr, 0, $field(GaloisCounterMode$GCTRGHASH, ghash)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/crypto/provider/GCTR;Lcom/sun/crypto/provider/GHASH;)V", nullptr, 0, $method(GaloisCounterMode$GCTRGHASH, init$, void, $GCTR*, $GHASH*)},
		{"doFinal", "([BII[BI)I", nullptr, $PUBLIC, $virtualMethod(GaloisCounterMode$GCTRGHASH, doFinal, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t)},
		{"doFinal", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC, $virtualMethod(GaloisCounterMode$GCTRGHASH, doFinal, int32_t, $ByteBuffer*, $ByteBuffer*)},
		{"update", "([BII[BI)I", nullptr, $PUBLIC, $virtualMethod(GaloisCounterMode$GCTRGHASH, update, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t)},
		{"update", "([BIILjava/nio/ByteBuffer;)I", nullptr, $PUBLIC, $virtualMethod(GaloisCounterMode$GCTRGHASH, update, int32_t, $bytes*, int32_t, int32_t, $ByteBuffer*)},
		{"update", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC, $virtualMethod(GaloisCounterMode$GCTRGHASH, update, int32_t, $ByteBuffer*, $ByteBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.GaloisCounterMode$GCTRGHASH", "com.sun.crypto.provider.GaloisCounterMode", "GCTRGHASH", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.GaloisCounterMode$GCTRGHASH",
		"java.lang.Object",
		"com.sun.crypto.provider.GCM",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.crypto.provider.GaloisCounterMode"
	};
	$loadClass(GaloisCounterMode$GCTRGHASH, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GaloisCounterMode$GCTRGHASH);
	});
	return class$;
}

$Class* GaloisCounterMode$GCTRGHASH::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com