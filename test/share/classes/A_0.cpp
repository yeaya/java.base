#include <A_0.h>
#include <A_0$1.h>
#include <jcpp.h>

using $A_0$1 = ::A_0$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void A_0::init$() {
	$set(this, o, $new($A_0$1, this));
}

A_0::A_0() {
}

$Class* A_0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"o", "Ljava/lang/Object;", nullptr, 0, $field(A_0, o)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(A_0, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"A_0$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"A_0",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"A_0$1"
	};
	$loadClass(A_0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(A_0);
	});
	return class$;
}

$Class* A_0::class$ = nullptr;