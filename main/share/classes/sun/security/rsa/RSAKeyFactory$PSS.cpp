#include <sun/security/rsa/RSAKeyFactory$PSS.h>
#include <sun/security/rsa/RSAKeyFactory.h>
#include <sun/security/rsa/RSAUtil$KeyType.h>
#include <jcpp.h>

#undef PSS

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RSAKeyFactory = ::sun::security::rsa::RSAKeyFactory;
using $RSAUtil$KeyType = ::sun::security::rsa::RSAUtil$KeyType;

namespace sun {
	namespace security {
		namespace rsa {

void RSAKeyFactory$PSS::init$() {
	$init($RSAUtil$KeyType);
	$RSAKeyFactory::init$($RSAUtil$KeyType::PSS);
}

RSAKeyFactory$PSS::RSAKeyFactory$PSS() {
}

$Class* RSAKeyFactory$PSS::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RSAKeyFactory$PSS, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.rsa.RSAKeyFactory$PSS", "sun.security.rsa.RSAKeyFactory", "PSS", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.rsa.RSAKeyFactory$PSS",
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
	$loadClass(RSAKeyFactory$PSS, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RSAKeyFactory$PSS);
	});
	return class$;
}

$Class* RSAKeyFactory$PSS::class$ = nullptr;

		} // rsa
	} // security
} // sun