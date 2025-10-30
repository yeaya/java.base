#include <com/sun/crypto/provider/GaloisCounterMode$GCTRGHASH.h>

#include <com/sun/crypto/provider/GCTR.h>
#include <com/sun/crypto/provider/GHASH.h>
#include <com/sun/crypto/provider/GaloisCounterMode.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $GCM = ::com::sun::crypto::provider::GCM;
using $GCTR = ::com::sun::crypto::provider::GCTR;
using $GHASH = ::com::sun::crypto::provider::GHASH;
using $GaloisCounterMode = ::com::sun::crypto::provider::GaloisCounterMode;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _GaloisCounterMode$GCTRGHASH_FieldInfo_[] = {
	{"gctr", "Lcom/sun/crypto/provider/GCTR;", nullptr, 0, $field(GaloisCounterMode$GCTRGHASH, gctr)},
	{"ghash", "Lcom/sun/crypto/provider/GHASH;", nullptr, 0, $field(GaloisCounterMode$GCTRGHASH, ghash)},
	{}
};

$MethodInfo _GaloisCounterMode$GCTRGHASH_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/crypto/provider/GCTR;Lcom/sun/crypto/provider/GHASH;)V", nullptr, 0, $method(static_cast<void(GaloisCounterMode$GCTRGHASH::*)($GCTR*,$GHASH*)>(&GaloisCounterMode$GCTRGHASH::init$))},
	{"doFinal", "([BII[BI)I", nullptr, $PUBLIC},
	{"doFinal", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC},
	{"update", "([BII[BI)I", nullptr, $PUBLIC},
	{"update", "([BIILjava/nio/ByteBuffer;)I", nullptr, $PUBLIC},
	{"update", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GaloisCounterMode$GCTRGHASH_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.GaloisCounterMode$GCTRGHASH", "com.sun.crypto.provider.GaloisCounterMode", "GCTRGHASH", $STATIC | $FINAL},
	{}
};

$ClassInfo _GaloisCounterMode$GCTRGHASH_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.GaloisCounterMode$GCTRGHASH",
	"java.lang.Object",
	"com.sun.crypto.provider.GCM",
	_GaloisCounterMode$GCTRGHASH_FieldInfo_,
	_GaloisCounterMode$GCTRGHASH_MethodInfo_,
	nullptr,
	nullptr,
	_GaloisCounterMode$GCTRGHASH_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.GaloisCounterMode"
};

$Object* allocate$GaloisCounterMode$GCTRGHASH($Class* clazz) {
	return $of($alloc(GaloisCounterMode$GCTRGHASH));
}

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
	$loadClass(GaloisCounterMode$GCTRGHASH, name, initialize, &_GaloisCounterMode$GCTRGHASH_ClassInfo_, allocate$GaloisCounterMode$GCTRGHASH);
	return class$;
}

$Class* GaloisCounterMode$GCTRGHASH::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com