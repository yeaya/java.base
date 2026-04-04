#include <sun/security/provider/NativePRNG$Blocking.h>
#include <sun/security/provider/NativePRNG.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace provider {

void NativePRNG$Blocking::init$() {
}

bool NativePRNG$Blocking::isAvailable() {
	return false;
}

NativePRNG$Blocking::NativePRNG$Blocking() {
}

$Class* NativePRNG$Blocking::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NativePRNG$Blocking, init$, void)},
		{"isAvailable", "()Z", nullptr, $STATIC, $staticMethod(NativePRNG$Blocking, isAvailable, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.NativePRNG$Blocking", "sun.security.provider.NativePRNG", "Blocking", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.provider.NativePRNG$Blocking",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.NativePRNG"
	};
	$loadClass(NativePRNG$Blocking, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NativePRNG$Blocking);
	});
	return class$;
}

$Class* NativePRNG$Blocking::class$ = nullptr;

		} // provider
	} // security
} // sun