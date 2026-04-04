#include <com/sun/crypto/provider/PBES2Core$HmacSHA256AndAES_128.h>
#include <com/sun/crypto/provider/PBES2Core.h>
#include <jcpp.h>

using $PBES2Core = ::com::sun::crypto::provider::PBES2Core;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

void PBES2Core$HmacSHA256AndAES_128::init$() {
	$PBES2Core::init$("HmacSHA256"_s, "AES"_s, 16);
}

PBES2Core$HmacSHA256AndAES_128::PBES2Core$HmacSHA256AndAES_128() {
}

$Class* PBES2Core$HmacSHA256AndAES_128::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PBES2Core$HmacSHA256AndAES_128, init$, void), "java.security.NoSuchAlgorithmException,javax.crypto.NoSuchPaddingException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.PBES2Core$HmacSHA256AndAES_128", "com.sun.crypto.provider.PBES2Core", "HmacSHA256AndAES_128", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.PBES2Core$HmacSHA256AndAES_128",
		"com.sun.crypto.provider.PBES2Core",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.crypto.provider.PBES2Core"
	};
	$loadClass(PBES2Core$HmacSHA256AndAES_128, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PBES2Core$HmacSHA256AndAES_128);
	});
	return class$;
}

$Class* PBES2Core$HmacSHA256AndAES_128::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com