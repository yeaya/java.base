#include <com/sun/crypto/provider/ChaCha20Cipher$EngineAEADDec.h>

#include <com/sun/crypto/provider/ChaCha20Cipher.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <javax/crypto/AEADBadTagException.h>
#include <javax/crypto/ShortBufferException.h>
#include <jcpp.h>

#undef BYTES

using $ChaCha20Cipher = ::com::sun::crypto::provider::ChaCha20Cipher;
using $ChaCha20Cipher$ChaChaEngine = ::com::sun::crypto::provider::ChaCha20Cipher$ChaChaEngine;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $Objects = ::java::util::Objects;
using $AEADBadTagException = ::javax::crypto::AEADBadTagException;
using $ShortBufferException = ::javax::crypto::ShortBufferException;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _ChaCha20Cipher$EngineAEADDec_FieldInfo_[] = {
	{"this$0", "Lcom/sun/crypto/provider/ChaCha20Cipher;", nullptr, $FINAL | $SYNTHETIC, $field(ChaCha20Cipher$EngineAEADDec, this$0)},
	{"cipherBuf", "Ljava/io/ByteArrayOutputStream;", nullptr, $PRIVATE | $FINAL, $field(ChaCha20Cipher$EngineAEADDec, cipherBuf)},
	{"tag", "[B", nullptr, $PRIVATE | $FINAL, $field(ChaCha20Cipher$EngineAEADDec, tag)},
	{}
};

$MethodInfo _ChaCha20Cipher$EngineAEADDec_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/crypto/provider/ChaCha20Cipher;)V", nullptr, $PRIVATE, $method(static_cast<void(ChaCha20Cipher$EngineAEADDec::*)($ChaCha20Cipher*)>(&ChaCha20Cipher$EngineAEADDec::init$)), "java.security.InvalidKeyException"},
	{"doFinal", "([BII[BI)I", nullptr, $PUBLIC, nullptr, "javax.crypto.ShortBufferException,javax.crypto.AEADBadTagException,java.security.KeyException"},
	{"doUpdate", "([BII[BI)I", nullptr, $PUBLIC},
	{"getOutputSize", "(IZ)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ChaCha20Cipher$EngineAEADDec_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.ChaCha20Cipher$EngineAEADDec", "com.sun.crypto.provider.ChaCha20Cipher", "EngineAEADDec", $PRIVATE | $FINAL},
	{"com.sun.crypto.provider.ChaCha20Cipher$ChaChaEngine", "com.sun.crypto.provider.ChaCha20Cipher", "ChaChaEngine", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ChaCha20Cipher$EngineAEADDec_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.ChaCha20Cipher$EngineAEADDec",
	"java.lang.Object",
	"com.sun.crypto.provider.ChaCha20Cipher$ChaChaEngine",
	_ChaCha20Cipher$EngineAEADDec_FieldInfo_,
	_ChaCha20Cipher$EngineAEADDec_MethodInfo_,
	nullptr,
	nullptr,
	_ChaCha20Cipher$EngineAEADDec_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.ChaCha20Cipher"
};

$Object* allocate$ChaCha20Cipher$EngineAEADDec($Class* clazz) {
	return $of($alloc(ChaCha20Cipher$EngineAEADDec));
}

int32_t ChaCha20Cipher$EngineAEADDec::getOutputSize(int32_t inLen, bool isFinal) {
	return (isFinal ? $Integer::max($Math::addExact((inLen - 16), $nc(this->cipherBuf)->size()), 0) : 0);
}

void ChaCha20Cipher$EngineAEADDec::init$($ChaCha20Cipher* this$0) {
	$set(this, this$0, this$0);
	this$0->initAuthenticator();
	this$0->counter = 1;
	$set(this, cipherBuf, $new($ByteArrayOutputStream, 1024));
	$set(this, tag, $new($bytes, 16));
}

int32_t ChaCha20Cipher$EngineAEADDec::doUpdate($bytes* in, int32_t inOff, int32_t inLen, $bytes* out, int32_t outOff) {
	if (this->this$0->initialized) {
		if (!this->this$0->aadDone) {
			this->this$0->authPad16(this->this$0->aadLen);
			this->this$0->aadDone = true;
		}
		if (in != nullptr) {
			$Objects::checkFromIndexSize(inOff, inLen, in->length);
			$nc(this->cipherBuf)->write(in, inOff, inLen);
		}
	} else {
		$throwNew($IllegalStateException, "Must use either a different key or iv."_s);
	}
	return 0;
}

int32_t ChaCha20Cipher$EngineAEADDec::doFinal($bytes* in, int32_t inOff, int32_t inLen, $bytes* out, int32_t outOff) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, ctPlusTag, nullptr);
	int32_t ctPlusTagLen = 0;
	if ($nc(this->cipherBuf)->size() == 0 && inOff == 0) {
		doUpdate(nullptr, inOff, inLen, out, outOff);
		$assign(ctPlusTag, in);
		ctPlusTagLen = inLen;
	} else {
		doUpdate(in, inOff, inLen, out, outOff);
		$assign(ctPlusTag, $nc(this->cipherBuf)->toByteArray());
		ctPlusTagLen = $nc(ctPlusTag)->length;
	}
	$nc(this->cipherBuf)->reset();
	if (ctPlusTagLen < 16) {
		$throwNew($AEADBadTagException, "Input too short - need tag"_s);
	}
	int32_t ctLen = ctPlusTagLen - 16;
	try {
		$Objects::checkFromIndexSize(outOff, ctLen, $nc(out)->length);
	} catch ($IndexOutOfBoundsException&) {
		$var($IndexOutOfBoundsException, ioobe, $catch());
		$throwNew($ShortBufferException, "Output buffer too small"_s);
	}
	this->this$0->authFinalizeData(ctPlusTag, 0, ctLen, this->tag, 0);
	int64_t var$1 = $longValue($nc($ChaCha20Cipher::asLongView)->get($$new($ObjectArray, {$of(ctPlusTag), $$of(ctLen)})));
	int64_t var$0 = (var$1 ^ $longValue($nc($ChaCha20Cipher::asLongView)->get($$new($ObjectArray, {$of(this->tag), $$of(0)}))));
	int64_t var$3 = $longValue($nc($ChaCha20Cipher::asLongView)->get($$new($ObjectArray, {$of(ctPlusTag), $$of((ctLen + $Long::BYTES))})));
	int64_t var$2 = (var$3 ^ $longValue($nc($ChaCha20Cipher::asLongView)->get($$new($ObjectArray, {$of(this->tag), $$of($Long::BYTES)}))));
	int64_t tagCompare = var$0 | var$2;
	if (tagCompare != 0) {
		$throwNew($AEADBadTagException, "Tag mismatch"_s);
	}
	this->this$0->chaCha20Transform(ctPlusTag, 0, ctLen, out, outOff);
	this->this$0->aadDone = false;
	return ctLen;
}

ChaCha20Cipher$EngineAEADDec::ChaCha20Cipher$EngineAEADDec() {
}

$Class* ChaCha20Cipher$EngineAEADDec::load$($String* name, bool initialize) {
	$loadClass(ChaCha20Cipher$EngineAEADDec, name, initialize, &_ChaCha20Cipher$EngineAEADDec_ClassInfo_, allocate$ChaCha20Cipher$EngineAEADDec);
	return class$;
}

$Class* ChaCha20Cipher$EngineAEADDec::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com