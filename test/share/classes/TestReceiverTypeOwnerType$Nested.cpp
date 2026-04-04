#include <TestReceiverTypeOwnerType$Nested.h>
#include <TestReceiverTypeOwnerType.h>
#include <jcpp.h>

using $TestReceiverTypeOwnerType = ::TestReceiverTypeOwnerType;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TestReceiverTypeOwnerType$Nested::init$($TestReceiverTypeOwnerType* this$0) {
	$set(this, this$0, this$0);
}

void TestReceiverTypeOwnerType$Nested::method() {
}

TestReceiverTypeOwnerType$Nested::TestReceiverTypeOwnerType$Nested() {
}

$Class* TestReceiverTypeOwnerType$Nested::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTestReceiverTypeOwnerType;", nullptr, $FINAL | $SYNTHETIC, $field(TestReceiverTypeOwnerType$Nested, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestReceiverTypeOwnerType;)V", nullptr, $PUBLIC, $method(TestReceiverTypeOwnerType$Nested, init$, void, $TestReceiverTypeOwnerType*)},
		{"method", "()V", nullptr, $PUBLIC, $virtualMethod(TestReceiverTypeOwnerType$Nested, method, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestReceiverTypeOwnerType$Nested", "TestReceiverTypeOwnerType", "Nested", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestReceiverTypeOwnerType$Nested",
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
		"TestReceiverTypeOwnerType"
	};
	$loadClass(TestReceiverTypeOwnerType$Nested, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestReceiverTypeOwnerType$Nested);
	});
	return class$;
}

$Class* TestReceiverTypeOwnerType$Nested::class$ = nullptr;