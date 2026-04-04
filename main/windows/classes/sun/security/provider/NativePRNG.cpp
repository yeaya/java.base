#include <sun/security/provider/NativePRNG.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace provider {

void NativePRNG::init$() {
}

bool NativePRNG::isAvailable() {
	return false;
}

NativePRNG::NativePRNG() {
}

$Class* NativePRNG::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NativePRNG, init$, void)},
		{"isAvailable", "()Z", nullptr, $STATIC, $staticMethod(NativePRNG, isAvailable, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.NativePRNG$Blocking", "sun.security.provider.NativePRNG", "Blocking", $PUBLIC | $STATIC | $FINAL},
		{"sun.security.provider.NativePRNG$NonBlocking", "sun.security.provider.NativePRNG", "NonBlocking", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.provider.NativePRNG",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.provider.NativePRNG$Blocking,sun.security.provider.NativePRNG$NonBlocking"
	};
	$loadClass(NativePRNG, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NativePRNG);
	});
	return class$;
}

$Class* NativePRNG::class$ = nullptr;

		} // provider
	} // security
} // sun