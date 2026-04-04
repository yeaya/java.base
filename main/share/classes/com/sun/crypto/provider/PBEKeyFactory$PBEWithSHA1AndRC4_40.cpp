#include <com/sun/crypto/provider/PBEKeyFactory$PBEWithSHA1AndRC4_40.h>
#include <com/sun/crypto/provider/PBEKeyFactory.h>
#include <jcpp.h>

using $PBEKeyFactory = ::com::sun::crypto::provider::PBEKeyFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

void PBEKeyFactory$PBEWithSHA1AndRC4_40::init$() {
	$PBEKeyFactory::init$("PBEWithSHA1AndRC4_40"_s);
}

PBEKeyFactory$PBEWithSHA1AndRC4_40::PBEKeyFactory$PBEWithSHA1AndRC4_40() {
}

$Class* PBEKeyFactory$PBEWithSHA1AndRC4_40::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PBEKeyFactory$PBEWithSHA1AndRC4_40, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.PBEKeyFactory$PBEWithSHA1AndRC4_40", "com.sun.crypto.provider.PBEKeyFactory", "PBEWithSHA1AndRC4_40", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.PBEKeyFactory$PBEWithSHA1AndRC4_40",
		"com.sun.crypto.provider.PBEKeyFactory",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.crypto.provider.PBEKeyFactory"
	};
	$loadClass(PBEKeyFactory$PBEWithSHA1AndRC4_40, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PBEKeyFactory$PBEWithSHA1AndRC4_40);
	});
	return class$;
}

$Class* PBEKeyFactory$PBEWithSHA1AndRC4_40::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com