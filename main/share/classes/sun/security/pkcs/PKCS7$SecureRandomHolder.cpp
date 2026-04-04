#include <sun/security/pkcs/PKCS7$SecureRandomHolder.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/SecureRandom.h>
#include <sun/security/pkcs/PKCS7.h>
#include <jcpp.h>

#undef RANDOM

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $SecureRandom = ::java::security::SecureRandom;

namespace sun {
	namespace security {
		namespace pkcs {

$SecureRandom* PKCS7$SecureRandomHolder::RANDOM = nullptr;

void PKCS7$SecureRandomHolder::init$() {
}

void PKCS7$SecureRandomHolder::clinit$($Class* clazz) {
	{
		$var($SecureRandom, tmp, nullptr);
		try {
			$assign(tmp, $SecureRandom::getInstance("SHA1PRNG"_s));
		} catch ($NoSuchAlgorithmException& e) {
		}
		$assignStatic(PKCS7$SecureRandomHolder::RANDOM, tmp);
	}
}

PKCS7$SecureRandomHolder::PKCS7$SecureRandomHolder() {
}

$Class* PKCS7$SecureRandomHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"RANDOM", "Ljava/security/SecureRandom;", nullptr, $STATIC | $FINAL, $staticField(PKCS7$SecureRandomHolder, RANDOM)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PKCS7$SecureRandomHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.pkcs.PKCS7$SecureRandomHolder", "sun.security.pkcs.PKCS7", "SecureRandomHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.pkcs.PKCS7$SecureRandomHolder",
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
		"sun.security.pkcs.PKCS7"
	};
	$loadClass(PKCS7$SecureRandomHolder, name, initialize, &classInfo$$, PKCS7$SecureRandomHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PKCS7$SecureRandomHolder);
	});
	return class$;
}

$Class* PKCS7$SecureRandomHolder::class$ = nullptr;

		} // pkcs
	} // security
} // sun