#include <HandlerLoop$Dummy.h>
#include <HandlerLoop.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HandlerLoop$Dummy::init$() {
}

HandlerLoop$Dummy::HandlerLoop$Dummy() {
}

$Class* HandlerLoop$Dummy::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(HandlerLoop$Dummy, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HandlerLoop$Dummy", "HandlerLoop", "Dummy", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HandlerLoop$Dummy",
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
		"HandlerLoop"
	};
	$loadClass(HandlerLoop$Dummy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HandlerLoop$Dummy);
	});
	return class$;
}

$Class* HandlerLoop$Dummy::class$ = nullptr;