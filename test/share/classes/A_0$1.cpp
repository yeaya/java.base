#include <A_0$1.h>
#include <A_0.h>
#include <jcpp.h>

using $A_0 = ::A_0;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void A_0$1::init$($A_0* this$0) {
	$set(this, this$0, this$0);
}

A_0$1::A_0$1() {
}

$Class* A_0$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LA_0;", nullptr, $FINAL | $SYNTHETIC, $field(A_0$1, this$0)},
		{"t", "Ljava/lang/Object;", "TT;", $PUBLIC, $field(A_0$1, t)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LA_0;)V", nullptr, 0, $method(A_0$1, init$, void, $A_0*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"A_0",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"A_0$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"A_0$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"A_0"
	};
	$loadClass(A_0$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(A_0$1);
	});
	return class$;
}

$Class* A_0$1::class$ = nullptr;