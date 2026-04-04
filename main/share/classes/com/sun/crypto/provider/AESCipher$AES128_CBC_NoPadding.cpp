#include <com/sun/crypto/provider/AESCipher$AES128_CBC_NoPadding.h>
#include <com/sun/crypto/provider/AESCipher$OidImpl.h>
#include <com/sun/crypto/provider/AESCipher.h>
#include <jcpp.h>

using $AESCipher$OidImpl = ::com::sun::crypto::provider::AESCipher$OidImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

void AESCipher$AES128_CBC_NoPadding::init$() {
	$AESCipher$OidImpl::init$(16, "CBC"_s, "NOPADDING"_s);
}

AESCipher$AES128_CBC_NoPadding::AESCipher$AES128_CBC_NoPadding() {
}

$Class* AESCipher$AES128_CBC_NoPadding::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AESCipher$AES128_CBC_NoPadding, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.AESCipher$AES128_CBC_NoPadding", "com.sun.crypto.provider.AESCipher", "AES128_CBC_NoPadding", $PUBLIC | $STATIC | $FINAL},
		{"com.sun.crypto.provider.AESCipher$OidImpl", "com.sun.crypto.provider.AESCipher", "OidImpl", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.AESCipher$AES128_CBC_NoPadding",
		"com.sun.crypto.provider.AESCipher$OidImpl",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.crypto.provider.AESCipher"
	};
	$loadClass(AESCipher$AES128_CBC_NoPadding, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AESCipher$AES128_CBC_NoPadding);
	});
	return class$;
}

$Class* AESCipher$AES128_CBC_NoPadding::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com