#include <GetAnnotatedNestedSuperclass$Y.h>
#include <GetAnnotatedNestedSuperclass$X.h>
#include <GetAnnotatedNestedSuperclass.h>
#include <jcpp.h>

using $GetAnnotatedNestedSuperclass$X = ::GetAnnotatedNestedSuperclass$X;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

void GetAnnotatedNestedSuperclass$Y::init$() {
	$GetAnnotatedNestedSuperclass$X::init$();
}

GetAnnotatedNestedSuperclass$Y::GetAnnotatedNestedSuperclass$Y() {
}

$Class* GetAnnotatedNestedSuperclass$Y::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(GetAnnotatedNestedSuperclass$Y, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetAnnotatedNestedSuperclass$Y", "GetAnnotatedNestedSuperclass", "Y", $STATIC},
		{"GetAnnotatedNestedSuperclass$X", "GetAnnotatedNestedSuperclass", "X", $STATIC},
		{}
	};
	$TypeAnnotation typeAnnotations$$[] = {
		{"LGetAnnotatedNestedSuperclass$A;", nullptr, "CLASS_EXTENDS, type_index = 65535"},
		{"LGetAnnotatedNestedSuperclass$B;", nullptr, "CLASS_EXTENDS, type_index = 65535, location = (TYPE_ARGUMENT(0))"},
		{"LGetAnnotatedNestedSuperclass$C;", nullptr, "CLASS_EXTENDS, type_index = 65535, location = (TYPE_ARGUMENT(1))"},
		{"LGetAnnotatedNestedSuperclass$D;", nullptr, "CLASS_EXTENDS, type_index = 65535, location = (TYPE_ARGUMENT(2))"},
		{"LGetAnnotatedNestedSuperclass$E;", nullptr, "CLASS_EXTENDS, type_index = 65535, location = (TYPE_ARGUMENT(2),TYPE_ARGUMENT(0))"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"GetAnnotatedNestedSuperclass$Y",
		"GetAnnotatedNestedSuperclass$X",
		nullptr,
		nullptr,
		methodInfos$$,
		"<P1:Ljava/lang/Object;P2:Ljava/lang/Object;>LGetAnnotatedNestedSuperclass$X<TP1;TP2;Ljava/lang/Class<TP1;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		typeAnnotations$$,
		nullptr,
		"GetAnnotatedNestedSuperclass"
	};
	$loadClass(GetAnnotatedNestedSuperclass$Y, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetAnnotatedNestedSuperclass$Y);
	});
	return class$;
}

$Class* GetAnnotatedNestedSuperclass$Y::class$ = nullptr;