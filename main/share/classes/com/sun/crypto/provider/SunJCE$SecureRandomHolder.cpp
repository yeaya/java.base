#include <com/sun/crypto/provider/SunJCE$SecureRandomHolder.h>
#include <com/sun/crypto/provider/SunJCE.h>
#include <java/security/SecureRandom.h>
#include <jcpp.h>

#undef RANDOM

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecureRandom = ::java::security::SecureRandom;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$SecureRandom* SunJCE$SecureRandomHolder::RANDOM = nullptr;

void SunJCE$SecureRandomHolder::init$() {
}

void SunJCE$SecureRandomHolder::clinit$($Class* clazz) {
	$assignStatic(SunJCE$SecureRandomHolder::RANDOM, $new($SecureRandom));
}

SunJCE$SecureRandomHolder::SunJCE$SecureRandomHolder() {
}

$Class* SunJCE$SecureRandomHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"RANDOM", "Ljava/security/SecureRandom;", nullptr, $STATIC | $FINAL, $staticField(SunJCE$SecureRandomHolder, RANDOM)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SunJCE$SecureRandomHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.SunJCE$SecureRandomHolder", "com.sun.crypto.provider.SunJCE", "SecureRandomHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.crypto.provider.SunJCE$SecureRandomHolder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.crypto.provider.SunJCE"
	};
	$loadClass(SunJCE$SecureRandomHolder, name, initialize, &classInfo$$, SunJCE$SecureRandomHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SunJCE$SecureRandomHolder);
	});
	return class$;
}

$Class* SunJCE$SecureRandomHolder::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com