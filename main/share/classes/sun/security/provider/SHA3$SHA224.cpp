#include <sun/security/provider/SHA3$SHA224.h>
#include <sun/security/provider/SHA3.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SHA3 = ::sun::security::provider::SHA3;

namespace sun {
	namespace security {
		namespace provider {

void SHA3$SHA224::init$() {
	$SHA3::init$("SHA3-224"_s, 28, (int8_t)6, 56);
}

$Object* SHA3$SHA224::clone() {
	return $SHA3::clone();
}

SHA3$SHA224::SHA3$SHA224() {
}

$Class* SHA3$SHA224::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SHA3$SHA224, init$, void)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(SHA3$SHA224, clone, $Object*), "java.lang.CloneNotSupportedException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.SHA3$SHA224", "sun.security.provider.SHA3", "SHA224", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.provider.SHA3$SHA224",
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
	$loadClass(SHA3$SHA224, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SHA3$SHA224));
	});
	return class$;
}

$Class* SHA3$SHA224::class$ = nullptr;

		} // provider
	} // security
} // sun