#include <com/sun/crypto/provider/PBKDF2Core$HmacSHA224.h>
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

void PBKDF2Core$HmacSHA224::init$() {
	$PBKDF2Core::init$("HmacSHA224"_s);
}

PBKDF2Core$HmacSHA224::PBKDF2Core$HmacSHA224() {
}

$Class* PBKDF2Core$HmacSHA224::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PBKDF2Core$HmacSHA224, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.PBKDF2Core$HmacSHA224", "com.sun.crypto.provider.PBKDF2Core", "HmacSHA224", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.PBKDF2Core$HmacSHA224",
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
	$loadClass(PBKDF2Core$HmacSHA224, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PBKDF2Core$HmacSHA224);
	});
	return class$;
}

$Class* PBKDF2Core$HmacSHA224::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com