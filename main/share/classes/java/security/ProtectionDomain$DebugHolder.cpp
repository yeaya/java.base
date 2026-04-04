#include <java/security/ProtectionDomain$DebugHolder.h>
#include <java/security/ProtectionDomain.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Debug = ::sun::security::util::Debug;

namespace java {
	namespace security {

$Debug* ProtectionDomain$DebugHolder::debug = nullptr;

void ProtectionDomain$DebugHolder::init$() {
}

void ProtectionDomain$DebugHolder::clinit$($Class* clazz) {
	$assignStatic(ProtectionDomain$DebugHolder::debug, $Debug::getInstance("domain"_s));
}

ProtectionDomain$DebugHolder::ProtectionDomain$DebugHolder() {
}

$Class* ProtectionDomain$DebugHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ProtectionDomain$DebugHolder, debug)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ProtectionDomain$DebugHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.ProtectionDomain$DebugHolder", "java.security.ProtectionDomain", "DebugHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.security.ProtectionDomain$DebugHolder",
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
		"java.security.ProtectionDomain"
	};
	$loadClass(ProtectionDomain$DebugHolder, name, initialize, &classInfo$$, ProtectionDomain$DebugHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ProtectionDomain$DebugHolder);
	});
	return class$;
}

$Class* ProtectionDomain$DebugHolder::class$ = nullptr;

	} // security
} // java