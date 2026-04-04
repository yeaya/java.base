#include <Test8076596$1.h>
#include <Test8076596.h>
#include <jcpp.h>

using $Test8076596 = ::Test8076596;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Test8076596$1::init$($Test8076596* this$0) {
	$set(this, this$0, this$0);
}

$Object* Test8076596$1::run() {
	return nullptr;
}

Test8076596$1::Test8076596$1() {
}

$Class* Test8076596$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTest8076596;", nullptr, $FINAL | $SYNTHETIC, $field(Test8076596$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTest8076596;)V", nullptr, 0, $method(Test8076596$1, init$, void, $Test8076596*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(Test8076596$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Test8076596",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test8076596$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test8076596$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Test8076596"
	};
	$loadClass(Test8076596$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test8076596$1);
	});
	return class$;
}

$Class* Test8076596$1::class$ = nullptr;