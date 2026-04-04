#include <ReferenceEnqueue.h>
#include <ReferenceEnqueue$ExplicitEnqueue.h>
#include <ReferenceEnqueue$WeakRef.h>
#include <jcpp.h>

using $ReferenceEnqueue$ExplicitEnqueue = ::ReferenceEnqueue$ExplicitEnqueue;
using $ReferenceEnqueue$WeakRef = ::ReferenceEnqueue$WeakRef;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ReferenceEnqueue::init$() {
}

void ReferenceEnqueue::main($StringArray* args) {
	$useLocalObjectStack();
	for (int32_t i = 0; i < 5; ++i) {
		$$new($ReferenceEnqueue$WeakRef)->run();
		$$new($ReferenceEnqueue$ExplicitEnqueue)->run();
	}
	$nc($System::out)->println("Test passed."_s);
}

ReferenceEnqueue::ReferenceEnqueue() {
}

$Class* ReferenceEnqueue::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ReferenceEnqueue, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ReferenceEnqueue, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ReferenceEnqueue$ExplicitEnqueue", "ReferenceEnqueue", "ExplicitEnqueue", $STATIC},
		{"ReferenceEnqueue$WeakRef", "ReferenceEnqueue", "WeakRef", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ReferenceEnqueue",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"ReferenceEnqueue$ExplicitEnqueue,ReferenceEnqueue$WeakRef"
	};
	$loadClass(ReferenceEnqueue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReferenceEnqueue);
	});
	return class$;
}

$Class* ReferenceEnqueue::class$ = nullptr;