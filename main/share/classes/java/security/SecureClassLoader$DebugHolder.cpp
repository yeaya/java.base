#include <java/security/SecureClassLoader$DebugHolder.h>
#include <java/security/SecureClassLoader.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Debug = ::sun::security::util::Debug;

namespace java {
	namespace security {

$Debug* SecureClassLoader$DebugHolder::debug = nullptr;

void SecureClassLoader$DebugHolder::init$() {
}

void SecureClassLoader$DebugHolder::clinit$($Class* clazz) {
	$assignStatic(SecureClassLoader$DebugHolder::debug, $Debug::getInstance("scl"_s));
}

SecureClassLoader$DebugHolder::SecureClassLoader$DebugHolder() {
}

$Class* SecureClassLoader$DebugHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SecureClassLoader$DebugHolder, debug)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SecureClassLoader$DebugHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.SecureClassLoader$DebugHolder", "java.security.SecureClassLoader", "DebugHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.security.SecureClassLoader$DebugHolder",
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
		"java.security.SecureClassLoader"
	};
	$loadClass(SecureClassLoader$DebugHolder, name, initialize, &classInfo$$, SecureClassLoader$DebugHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SecureClassLoader$DebugHolder);
	});
	return class$;
}

$Class* SecureClassLoader$DebugHolder::class$ = nullptr;

	} // security
} // java