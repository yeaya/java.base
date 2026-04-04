#include <com/sun/crypto/provider/GaloisCounterMode$AES128.h>
#include <com/sun/crypto/provider/AESCrypt.h>
#include <com/sun/crypto/provider/GaloisCounterMode.h>
#include <jcpp.h>

using $AESCrypt = ::com::sun::crypto::provider::AESCrypt;
using $GaloisCounterMode = ::com::sun::crypto::provider::GaloisCounterMode;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

void GaloisCounterMode$AES128::init$() {
	$GaloisCounterMode::init$(16, $$new($AESCrypt));
}

GaloisCounterMode$AES128::GaloisCounterMode$AES128() {
}

$Class* GaloisCounterMode$AES128::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GaloisCounterMode$AES128, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.GaloisCounterMode$AES128", "com.sun.crypto.provider.GaloisCounterMode", "AES128", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.GaloisCounterMode$AES128",
		"com.sun.crypto.provider.GaloisCounterMode",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.crypto.provider.GaloisCounterMode"
	};
	$loadClass(GaloisCounterMode$AES128, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GaloisCounterMode$AES128);
	});
	return class$;
}

$Class* GaloisCounterMode$AES128::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com