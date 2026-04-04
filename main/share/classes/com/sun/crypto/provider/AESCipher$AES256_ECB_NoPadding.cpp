#include <com/sun/crypto/provider/AESCipher$AES256_ECB_NoPadding.h>
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

void AESCipher$AES256_ECB_NoPadding::init$() {
	$AESCipher$OidImpl::init$(32, "ECB"_s, "NOPADDING"_s);
}

AESCipher$AES256_ECB_NoPadding::AESCipher$AES256_ECB_NoPadding() {
}

$Class* AESCipher$AES256_ECB_NoPadding::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AESCipher$AES256_ECB_NoPadding, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.AESCipher$AES256_ECB_NoPadding", "com.sun.crypto.provider.AESCipher", "AES256_ECB_NoPadding", $PUBLIC | $STATIC | $FINAL},
		{"com.sun.crypto.provider.AESCipher$OidImpl", "com.sun.crypto.provider.AESCipher", "OidImpl", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.AESCipher$AES256_ECB_NoPadding",
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
	$loadClass(AESCipher$AES256_ECB_NoPadding, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AESCipher$AES256_ECB_NoPadding);
	});
	return class$;
}

$Class* AESCipher$AES256_ECB_NoPadding::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com