#include <com/sun/crypto/provider/PBKDF2Core$HmacSHA384.h>
#include <com/sun/crypto/provider/PBKDF2Core.h>
#include <jcpp.h>

using $PBKDF2Core = ::com::sun::crypto::provider::PBKDF2Core;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

void PBKDF2Core$HmacSHA384::init$() {
	$PBKDF2Core::init$("HmacSHA384"_s);
}

PBKDF2Core$HmacSHA384::PBKDF2Core$HmacSHA384() {
}

$Class* PBKDF2Core$HmacSHA384::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PBKDF2Core$HmacSHA384, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.PBKDF2Core$HmacSHA384", "com.sun.crypto.provider.PBKDF2Core", "HmacSHA384", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.PBKDF2Core$HmacSHA384",
		"com.sun.crypto.provider.PBKDF2Core",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.crypto.provider.PBKDF2Core"
	};
	$loadClass(PBKDF2Core$HmacSHA384, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PBKDF2Core$HmacSHA384);
	});
	return class$;
}

$Class* PBKDF2Core$HmacSHA384::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com