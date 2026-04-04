#include <TestReceiverTypeOwner$Inner.h>
#include <TestReceiverTypeOwner.h>
#include <jcpp.h>

using $TestReceiverTypeOwner = ::TestReceiverTypeOwner;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

void TestReceiverTypeOwner$Inner::init$($TestReceiverTypeOwner* this$0) {
	$set(this, this$0, this$0);
}

void TestReceiverTypeOwner$Inner::m() {
}

TestReceiverTypeOwner$Inner::TestReceiverTypeOwner$Inner() {
}

$Class* TestReceiverTypeOwner$Inner::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTestReceiverTypeOwner;", nullptr, $FINAL | $SYNTHETIC, $field(TestReceiverTypeOwner$Inner, this$0)},
		{}
	};
	$TypeAnnotation mmethodTypeAnnotations$$[] = {
		{"LTestReceiverTypeOwner$TypeAnnotation;", nullptr, "METHOD_RECEIVER"},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestReceiverTypeOwner;)V", nullptr, 0, $method(TestReceiverTypeOwner$Inner, init$, void, $TestReceiverTypeOwner*)},
		{"m", "()V", nullptr, 0, $virtualMethod(TestReceiverTypeOwner$Inner, m, void), nullptr, nullptr, nullptr, mmethodTypeAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestReceiverTypeOwner$Inner", "TestReceiverTypeOwner", "Inner", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestReceiverTypeOwner$Inner",
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
		"TestReceiverTypeOwner"
	};
	$loadClass(TestReceiverTypeOwner$Inner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestReceiverTypeOwner$Inner);
	});
	return class$;
}

$Class* TestReceiverTypeOwner$Inner::class$ = nullptr;