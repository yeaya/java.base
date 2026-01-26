#include <com/sun/crypto/provider/ChaCha20Cipher$EngineStreamOnly.h>

#include <com/sun/crypto/provider/ChaCha20Cipher.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/util/Objects.h>
#include <javax/crypto/ShortBufferException.h>
#include <jcpp.h>

using $ChaCha20Cipher = ::com::sun::crypto::provider::ChaCha20Cipher;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $ShortBufferException = ::javax::crypto::ShortBufferException;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _ChaCha20Cipher$EngineStreamOnly_FieldInfo_[] = {
	{"this$0", "Lcom/sun/crypto/provider/ChaCha20Cipher;", nullptr, $FINAL | $SYNTHETIC, $field(ChaCha20Cipher$EngineStreamOnly, this$0)},
	{}
};

$MethodInfo _ChaCha20Cipher$EngineStreamOnly_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/crypto/provider/ChaCha20Cipher;)V", nullptr, $PRIVATE, $method(ChaCha20Cipher$EngineStreamOnly, init$, void, $ChaCha20Cipher*)},
	{"doFinal", "([BII[BI)I", nullptr, $PUBLIC, $virtualMethod(ChaCha20Cipher$EngineStreamOnly, doFinal, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t), "javax.crypto.ShortBufferException,java.security.KeyException"},
	{"doUpdate", "([BII[BI)I", nullptr, $PUBLIC, $virtualMethod(ChaCha20Cipher$EngineStreamOnly, doUpdate, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t), "javax.crypto.ShortBufferException,java.security.KeyException"},
	{"getOutputSize", "(IZ)I", nullptr, $PUBLIC, $virtualMethod(ChaCha20Cipher$EngineStreamOnly, getOutputSize, int32_t, int32_t, bool)},
	{}
};

$InnerClassInfo _ChaCha20Cipher$EngineStreamOnly_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.ChaCha20Cipher$EngineStreamOnly", "com.sun.crypto.provider.ChaCha20Cipher", "EngineStreamOnly", $PRIVATE | $FINAL},
	{"com.sun.crypto.provider.ChaCha20Cipher$ChaChaEngine", "com.sun.crypto.provider.ChaCha20Cipher", "ChaChaEngine", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ChaCha20Cipher$EngineStreamOnly_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.ChaCha20Cipher$EngineStreamOnly",
	"java.lang.Object",
	"com.sun.crypto.provider.ChaCha20Cipher$ChaChaEngine",
	_ChaCha20Cipher$EngineStreamOnly_FieldInfo_,
	_ChaCha20Cipher$EngineStreamOnly_MethodInfo_,
	nullptr,
	nullptr,
	_ChaCha20Cipher$EngineStreamOnly_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.ChaCha20Cipher"
};

$Object* allocate$ChaCha20Cipher$EngineStreamOnly($Class* clazz) {
	return $of($alloc(ChaCha20Cipher$EngineStreamOnly));
}

void ChaCha20Cipher$EngineStreamOnly::init$($ChaCha20Cipher* this$0) {
	$set(this, this$0, this$0);
}

int32_t ChaCha20Cipher$EngineStreamOnly::getOutputSize(int32_t inLength, bool isFinal) {
	return inLength;
}

int32_t ChaCha20Cipher$EngineStreamOnly::doUpdate($bytes* in, int32_t inOff, int32_t inLen, $bytes* out, int32_t outOff) {
	if (this->this$0->initialized) {
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
		}
		return inLen;
	} else {
		$throwNew($IllegalStateException, "Must use either a different key or iv."_s);
	}
}

int32_t ChaCha20Cipher$EngineStreamOnly::doFinal($bytes* in, int32_t inOff, int32_t inLen, $bytes* out, int32_t outOff) {
	return doUpdate(in, inOff, inLen, out, outOff);
}

ChaCha20Cipher$EngineStreamOnly::ChaCha20Cipher$EngineStreamOnly() {
}

$Class* ChaCha20Cipher$EngineStreamOnly::load$($String* name, bool initialize) {
	$loadClass(ChaCha20Cipher$EngineStreamOnly, name, initialize, &_ChaCha20Cipher$EngineStreamOnly_ClassInfo_, allocate$ChaCha20Cipher$EngineStreamOnly);
	return class$;
}

$Class* ChaCha20Cipher$EngineStreamOnly::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com