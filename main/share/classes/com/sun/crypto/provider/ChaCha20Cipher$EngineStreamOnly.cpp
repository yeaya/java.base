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
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/crypto/provider/ChaCha20Cipher;", nullptr, $FINAL | $SYNTHETIC, $field(ChaCha20Cipher$EngineStreamOnly, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/crypto/provider/ChaCha20Cipher;)V", nullptr, $PRIVATE, $method(ChaCha20Cipher$EngineStreamOnly, init$, void, $ChaCha20Cipher*)},
		{"doFinal", "([BII[BI)I", nullptr, $PUBLIC, $virtualMethod(ChaCha20Cipher$EngineStreamOnly, doFinal, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t), "javax.crypto.ShortBufferException,java.security.KeyException"},
		{"doUpdate", "([BII[BI)I", nullptr, $PUBLIC, $virtualMethod(ChaCha20Cipher$EngineStreamOnly, doUpdate, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t), "javax.crypto.ShortBufferException,java.security.KeyException"},
		{"getOutputSize", "(IZ)I", nullptr, $PUBLIC, $virtualMethod(ChaCha20Cipher$EngineStreamOnly, getOutputSize, int32_t, int32_t, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.ChaCha20Cipher$EngineStreamOnly", "com.sun.crypto.provider.ChaCha20Cipher", "EngineStreamOnly", $PRIVATE | $FINAL},
		{"com.sun.crypto.provider.ChaCha20Cipher$ChaChaEngine", "com.sun.crypto.provider.ChaCha20Cipher", "ChaChaEngine", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.ChaCha20Cipher$EngineStreamOnly",
		"java.lang.Object",
		"com.sun.crypto.provider.ChaCha20Cipher$ChaChaEngine",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.crypto.provider.ChaCha20Cipher"
	};
	$loadClass(ChaCha20Cipher$EngineStreamOnly, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ChaCha20Cipher$EngineStreamOnly);
	});
	return class$;
}

$Class* ChaCha20Cipher$EngineStreamOnly::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com