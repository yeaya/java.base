#include <A$B.h>
#include <A.h>
#include <jcpp.h>

using $A = ::A;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void A$B::init$($A* this$0) {
	$set(this, this$0, this$0);
}

A$B::A$B() {
}

$Class* A$B::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LA;", nullptr, $FINAL | $SYNTHETIC, $field(A$B, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LA;)V", nullptr, 0, $method(A$B, init$, void, $A*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"A$B", "A", "B", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"A$B",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<U:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"A"
	};
	$loadClass(A$B, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(A$B);
	});
	return class$;
}

$Class* A$B::class$ = nullptr;