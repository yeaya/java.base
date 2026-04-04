#include <GetAnnotatedNestedSuperclass$X.h>
#include <GetAnnotatedNestedSuperclass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void GetAnnotatedNestedSuperclass$X::init$() {
}

GetAnnotatedNestedSuperclass$X::GetAnnotatedNestedSuperclass$X() {
}

$Class* GetAnnotatedNestedSuperclass$X::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(GetAnnotatedNestedSuperclass$X, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetAnnotatedNestedSuperclass$X", "GetAnnotatedNestedSuperclass", "X", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"GetAnnotatedNestedSuperclass$X",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		"<P1:Ljava/lang/Object;P2:Ljava/lang/Object;P3:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"GetAnnotatedNestedSuperclass"
	};
	$loadClass(GetAnnotatedNestedSuperclass$X, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetAnnotatedNestedSuperclass$X);
	});
	return class$;
}

$Class* GetAnnotatedNestedSuperclass$X::class$ = nullptr;