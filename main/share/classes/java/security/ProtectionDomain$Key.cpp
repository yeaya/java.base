#include <java/security/ProtectionDomain$Key.h>
#include <java/security/ProtectionDomain.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {

void ProtectionDomain$Key::init$() {
}

ProtectionDomain$Key::ProtectionDomain$Key() {
}

$Class* ProtectionDomain$Key::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ProtectionDomain$Key, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.ProtectionDomain$Key", "java.security.ProtectionDomain", "Key", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.security.ProtectionDomain$Key",
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
		"java.security.ProtectionDomain"
	};
	$loadClass(ProtectionDomain$Key, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProtectionDomain$Key);
	});
	return class$;
}

$Class* ProtectionDomain$Key::class$ = nullptr;

	} // security
} // java