#include <java/lang/Shutdown$Lock.h>
#include <java/lang/Shutdown.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

void Shutdown$Lock::init$() {
}

Shutdown$Lock::Shutdown$Lock() {
}

$Class* Shutdown$Lock::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Shutdown$Lock, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.Shutdown$Lock", "java.lang.Shutdown", "Lock", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.Shutdown$Lock",
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
		"java.lang.Shutdown"
	};
	$loadClass(Shutdown$Lock, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Shutdown$Lock);
	});
	return class$;
}

$Class* Shutdown$Lock::class$ = nullptr;

	} // lang
} // java