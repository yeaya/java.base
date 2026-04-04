#include <com/sun/crypto/provider/AESCipher$AES192_OFB_NoPadding.h>
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

void AESCipher$AES192_OFB_NoPadding::init$() {
	$AESCipher$OidImpl::init$(24, "OFB"_s, "NOPADDING"_s);
}

AESCipher$AES192_OFB_NoPadding::AESCipher$AES192_OFB_NoPadding() {
}

$Class* AESCipher$AES192_OFB_NoPadding::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AESCipher$AES192_OFB_NoPadding, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.AESCipher$AES192_OFB_NoPadding", "com.sun.crypto.provider.AESCipher", "AES192_OFB_NoPadding", $PUBLIC | $STATIC | $FINAL},
		{"com.sun.crypto.provider.AESCipher$OidImpl", "com.sun.crypto.provider.AESCipher", "OidImpl", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.AESCipher$AES192_OFB_NoPadding",
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
	$loadClass(AESCipher$AES192_OFB_NoPadding, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AESCipher$AES192_OFB_NoPadding);
	});
	return class$;
}

$Class* AESCipher$AES192_OFB_NoPadding::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com