#include <TestReceiverTypeOwnerType$Inner.h>
#include <TestReceiverTypeOwnerType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TestReceiverTypeOwnerType$Inner::init$() {
}

void TestReceiverTypeOwnerType$Inner::method() {
}

TestReceiverTypeOwnerType$Inner::TestReceiverTypeOwnerType$Inner() {
}

$Class* TestReceiverTypeOwnerType$Inner::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestReceiverTypeOwnerType$Inner, init$, void)},
		{"method", "()V", nullptr, $PUBLIC, $virtualMethod(TestReceiverTypeOwnerType$Inner, method, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestReceiverTypeOwnerType$Inner", "TestReceiverTypeOwnerType", "Inner", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestReceiverTypeOwnerType$Inner",
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
		"TestReceiverTypeOwnerType"
	};
	$loadClass(TestReceiverTypeOwnerType$Inner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestReceiverTypeOwnerType$Inner);
	});
	return class$;
}

$Class* TestReceiverTypeOwnerType$Inner::class$ = nullptr;