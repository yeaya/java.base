#include <sun/security/rsa/RSAKeyFactory$Legacy.h>
#include <sun/security/rsa/RSAKeyFactory.h>
#include <sun/security/rsa/RSAUtil$KeyType.h>
#include <jcpp.h>

#undef RSA

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RSAKeyFactory = ::sun::security::rsa::RSAKeyFactory;
using $RSAUtil$KeyType = ::sun::security::rsa::RSAUtil$KeyType;

namespace sun {
	namespace security {
		namespace rsa {

void RSAKeyFactory$Legacy::init$() {
	$init($RSAUtil$KeyType);
	$RSAKeyFactory::init$($RSAUtil$KeyType::RSA);
}

RSAKeyFactory$Legacy::RSAKeyFactory$Legacy() {
}

$Class* RSAKeyFactory$Legacy::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RSAKeyFactory$Legacy, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.rsa.RSAKeyFactory$Legacy", "sun.security.rsa.RSAKeyFactory", "Legacy", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.rsa.RSAKeyFactory$Legacy",
		"sun.security.rsa.RSAKeyFactory",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.rsa.RSAKeyFactory"
	};
	$loadClass(RSAKeyFactory$Legacy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RSAKeyFactory$Legacy);
	});
	return class$;
}

$Class* RSAKeyFactory$Legacy::class$ = nullptr;

		} // rsa
	} // security
} // sun