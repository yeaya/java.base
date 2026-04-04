#include <TestReceiverTypeOwnerType$GenericInner.h>
#include <TestReceiverTypeOwnerType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TestReceiverTypeOwnerType$GenericInner::init$() {
}

void TestReceiverTypeOwnerType$GenericInner::method() {
}

TestReceiverTypeOwnerType$GenericInner::TestReceiverTypeOwnerType$GenericInner() {
}

$Class* TestReceiverTypeOwnerType$GenericInner::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestReceiverTypeOwnerType$GenericInner, init$, void)},
		{"method", "()V", nullptr, $PUBLIC, $virtualMethod(TestReceiverTypeOwnerType$GenericInner, method, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestReceiverTypeOwnerType$GenericInner", "TestReceiverTypeOwnerType", "GenericInner", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestReceiverTypeOwnerType$GenericInner",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		"<S:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestReceiverTypeOwnerType"
	};
	$loadClass(TestReceiverTypeOwnerType$GenericInner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestReceiverTypeOwnerType$GenericInner);
	});
	return class$;
}

$Class* TestReceiverTypeOwnerType$GenericInner::class$ = nullptr;