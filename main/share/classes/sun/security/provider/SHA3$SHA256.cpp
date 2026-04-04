#include <sun/security/provider/SHA3$SHA256.h>
#include <sun/security/provider/SHA3.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SHA3 = ::sun::security::provider::SHA3;

namespace sun {
	namespace security {
		namespace provider {

void SHA3$SHA256::init$() {
	$SHA3::init$("SHA3-256"_s, 32, (int8_t)6, 64);
}

$Object* SHA3$SHA256::clone() {
	return $SHA3::clone();
}

SHA3$SHA256::SHA3$SHA256() {
}

$Class* SHA3$SHA256::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SHA3$SHA256, init$, void)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(SHA3$SHA256, clone, $Object*), "java.lang.CloneNotSupportedException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.SHA3$SHA256", "sun.security.provider.SHA3", "SHA256", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.provider.SHA3$SHA256",
		"sun.security.provider.SHA3",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.SHA3"
	};
	$loadClass(SHA3$SHA256, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SHA3$SHA256));
	});
	return class$;
}

$Class* SHA3$SHA256::class$ = nullptr;

		} // provider
	} // security
} // sun