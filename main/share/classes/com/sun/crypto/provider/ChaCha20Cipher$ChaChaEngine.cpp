#include <com/sun/crypto/provider/ChaCha20Cipher$ChaChaEngine.h>
#include <com/sun/crypto/provider/ChaCha20Cipher.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$Class* ChaCha20Cipher$ChaChaEngine::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"doFinal", "([BII[BI)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ChaCha20Cipher$ChaChaEngine, doFinal, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t), "javax.crypto.ShortBufferException,javax.crypto.AEADBadTagException,java.security.KeyException"},
		{"doUpdate", "([BII[BI)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ChaCha20Cipher$ChaChaEngine, doUpdate, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t), "javax.crypto.ShortBufferException,java.security.KeyException"},
		{"getOutputSize", "(IZ)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ChaCha20Cipher$ChaChaEngine, getOutputSize, int32_t, int32_t, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.ChaCha20Cipher$ChaChaEngine", "com.sun.crypto.provider.ChaCha20Cipher", "ChaChaEngine", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.sun.crypto.provider.ChaCha20Cipher$ChaChaEngine",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.crypto.provider.ChaCha20Cipher"
	};
	$loadClass(ChaCha20Cipher$ChaChaEngine, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ChaCha20Cipher$ChaChaEngine);
	});
	return class$;
}

$Class* ChaCha20Cipher$ChaChaEngine::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com