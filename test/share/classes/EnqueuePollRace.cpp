#include <EnqueuePollRace.h>
#include <EnqueuePollRace$WeakRef.h>
#include <jcpp.h>

using $EnqueuePollRace$WeakRef = ::EnqueuePollRace$WeakRef;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void EnqueuePollRace::init$() {
}

void EnqueuePollRace::main($StringArray* args) {
	$$new($EnqueuePollRace$WeakRef)->run();
	$nc($System::out)->println("Test passed."_s);
}

EnqueuePollRace::EnqueuePollRace() {
}

$Class* EnqueuePollRace::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(EnqueuePollRace, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(EnqueuePollRace, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"EnqueuePollRace$WeakRef", "EnqueuePollRace", "WeakRef", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"EnqueuePollRace",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"EnqueuePollRace$WeakRef"
	};
	$loadClass(EnqueuePollRace, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EnqueuePollRace);
	});
	return class$;
}

$Class* EnqueuePollRace::class$ = nullptr;