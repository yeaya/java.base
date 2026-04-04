#include <com/sun/crypto/provider/PBEKeyFactory$PBEWithSHA1AndDESede.h>
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

void PBEKeyFactory$PBEWithSHA1AndDESede::init$() {
	$PBEKeyFactory::init$("PBEWithSHA1AndDESede"_s);
}

PBEKeyFactory$PBEWithSHA1AndDESede::PBEKeyFactory$PBEWithSHA1AndDESede() {
}

$Class* PBEKeyFactory$PBEWithSHA1AndDESede::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PBEKeyFactory$PBEWithSHA1AndDESede, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.PBEKeyFactory$PBEWithSHA1AndDESede", "com.sun.crypto.provider.PBEKeyFactory", "PBEWithSHA1AndDESede", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.PBEKeyFactory$PBEWithSHA1AndDESede",
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
	$loadClass(PBEKeyFactory$PBEWithSHA1AndDESede, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PBEKeyFactory$PBEWithSHA1AndDESede);
	});
	return class$;
}

$Class* PBEKeyFactory$PBEWithSHA1AndDESede::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com