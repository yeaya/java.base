#include <com/sun/crypto/provider/ChaCha20Cipher$EngineAEADEnc.h>

#include <com/sun/crypto/provider/ChaCha20Cipher.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Math.h>
#include <java/util/Objects.h>
#include <javax/crypto/ShortBufferException.h>
#include <jcpp.h>

using $ChaCha20Cipher = ::com::sun::crypto::provider::ChaCha20Cipher;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $ShortBufferException = ::javax::crypto::ShortBufferException;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _ChaCha20Cipher$EngineAEADEnc_FieldInfo_[] = {
	{"this$0", "Lcom/sun/crypto/provider/ChaCha20Cipher;", nullptr, $FINAL | $SYNTHETIC, $field(ChaCha20Cipher$EngineAEADEnc, this$0)},
	{}
};

$MethodInfo _ChaCha20Cipher$EngineAEADEnc_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/crypto/provider/ChaCha20Cipher;)V", nullptr, $PRIVATE, $method(ChaCha20Cipher$EngineAEADEnc, init$, void, $ChaCha20Cipher*), "java.security.InvalidKeyException"},
	{"doFinal", "([BII[BI)I", nullptr, $PUBLIC, $virtualMethod(ChaCha20Cipher$EngineAEADEnc, doFinal, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t), "javax.crypto.ShortBufferException,java.security.KeyException"},
	{"doUpdate", "([BII[BI)I", nullptr, $PUBLIC, $virtualMethod(ChaCha20Cipher$EngineAEADEnc, doUpdate, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t), "javax.crypto.ShortBufferException,java.security.KeyException"},
	{"getOutputSize", "(IZ)I", nullptr, $PUBLIC, $virtualMethod(ChaCha20Cipher$EngineAEADEnc, getOutputSize, int32_t, int32_t, bool)},
	{}
};

$InnerClassInfo _ChaCha20Cipher$EngineAEADEnc_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.ChaCha20Cipher$EngineAEADEnc", "com.sun.crypto.provider.ChaCha20Cipher", "EngineAEADEnc", $PRIVATE | $FINAL},
	{"com.sun.crypto.provider.ChaCha20Cipher$ChaChaEngine", "com.sun.crypto.provider.ChaCha20Cipher", "ChaChaEngine", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ChaCha20Cipher$EngineAEADEnc_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.ChaCha20Cipher$EngineAEADEnc",
	"java.lang.Object",
	"com.sun.crypto.provider.ChaCha20Cipher$ChaChaEngine",
	_ChaCha20Cipher$EngineAEADEnc_FieldInfo_,
	_ChaCha20Cipher$EngineAEADEnc_MethodInfo_,
	nullptr,
	nullptr,
	_ChaCha20Cipher$EngineAEADEnc_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.ChaCha20Cipher"
};

$Object* allocate$ChaCha20Cipher$EngineAEADEnc($Class* clazz) {
	return $of($alloc(ChaCha20Cipher$EngineAEADEnc));
}

int32_t ChaCha20Cipher$EngineAEADEnc::getOutputSize(int32_t inLength, bool isFinal) {
	return (isFinal ? $Math::addExact(inLength, 16) : inLength);
}

void ChaCha20Cipher$EngineAEADEnc::init$($ChaCha20Cipher* this$0) {
	$set(this, this$0, this$0);
	this$0->initAuthenticator();
	this$0->counter = 1;
}

int32_t ChaCha20Cipher$EngineAEADEnc::doUpdate($bytes* in, int32_t inOff, int32_t inLen, $bytes* out, int32_t outOff) {
	if (this->this$0->initialized) {
		if (!this->this$0->aadDone) {
			this->this$0->authPad16(this->this$0->aadLen);
			this->this$0->aadDone = true;
		}
		try {
			if (out != nullptr) {
				$Objects::checkFromIndexSize(outOff, inLen, out->length);
			} else {
				$throwNew($ShortBufferException, "Output buffer too small"_s);
			}
		} catch ($IndexOutOfBoundsException& iobe) {
			$throwNew($ShortBufferException, "Output buffer too small"_s);
		}
		if (in != nullptr) {
			$Objects::checkFromIndexSize(inOff, inLen, in->length);
			this->this$0->chaCha20Transform(in, inOff, inLen, out, outOff);
			this->this$0->dataLen += this->this$0->authUpdate(out, outOff, inLen);
		}
		return inLen;
	} else {
		$throwNew($IllegalStateException, "Must use either a different key or iv."_s);
	}
}

int32_t ChaCha20Cipher$EngineAEADEnc::doFinal($bytes* in, int32_t inOff, int32_t inLen, $bytes* out, int32_t outOff) {
	if ((inLen + 16) > ($nc(out)->length - outOff)) {
		$throwNew($ShortBufferException, "Output buffer too small"_s);
	}
	doUpdate(in, inOff, inLen, out, outOff);
	this->this$0->authFinalizeData(nullptr, 0, 0, out, outOff + inLen);
	this->this$0->aadDone = false;
	return inLen + 16;
}

ChaCha20Cipher$EngineAEADEnc::ChaCha20Cipher$EngineAEADEnc() {
}

$Class* ChaCha20Cipher$EngineAEADEnc::load$($String* name, bool initialize) {
	$loadClass(ChaCha20Cipher$EngineAEADEnc, name, initialize, &_ChaCha20Cipher$EngineAEADEnc_ClassInfo_, allocate$ChaCha20Cipher$EngineAEADEnc);
	return class$;
}

$Class* ChaCha20Cipher$EngineAEADEnc::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com