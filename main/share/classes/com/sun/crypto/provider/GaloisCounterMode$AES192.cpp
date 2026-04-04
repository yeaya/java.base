#include <com/sun/crypto/provider/GaloisCounterMode$AES192.h>
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

void GaloisCounterMode$AES192::init$() {
	$GaloisCounterMode::init$(24, $$new($AESCrypt));
}

GaloisCounterMode$AES192::GaloisCounterMode$AES192() {
}

$Class* GaloisCounterMode$AES192::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GaloisCounterMode$AES192, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.GaloisCounterMode$AES192", "com.sun.crypto.provider.GaloisCounterMode", "AES192", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.GaloisCounterMode$AES192",
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
	$loadClass(GaloisCounterMode$AES192, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GaloisCounterMode$AES192);
	});
	return class$;
}

$Class* GaloisCounterMode$AES192::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com