#include <com/sun/crypto/provider/GaloisCounterMode$AESGCM.h>
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

void GaloisCounterMode$AESGCM::init$() {
	$GaloisCounterMode::init$(-1, $$new($AESCrypt));
}

GaloisCounterMode$AESGCM::GaloisCounterMode$AESGCM() {
}

$Class* GaloisCounterMode$AESGCM::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GaloisCounterMode$AESGCM, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.GaloisCounterMode$AESGCM", "com.sun.crypto.provider.GaloisCounterMode", "AESGCM", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.GaloisCounterMode$AESGCM",
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
	$loadClass(GaloisCounterMode$AESGCM, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GaloisCounterMode$AESGCM);
	});
	return class$;
}

$Class* GaloisCounterMode$AESGCM::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com