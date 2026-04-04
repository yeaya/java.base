#include <GetAnnotatedSuperclass$1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void GetAnnotatedSuperclass$1::init$() {
}

GetAnnotatedSuperclass$1::GetAnnotatedSuperclass$1() {
}

$Class* GetAnnotatedSuperclass$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(GetAnnotatedSuperclass$1, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"GetAnnotatedSuperclass",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetAnnotatedSuperclass$1", nullptr, nullptr, 0},
		{"GetAnnotatedSuperclass$If", "GetAnnotatedSuperclass", "If", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"GetAnnotatedSuperclass$1",
		"java.lang.Object",
		"GetAnnotatedSuperclass$If",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"GetAnnotatedSuperclass"
	};
	$loadClass(GetAnnotatedSuperclass$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetAnnotatedSuperclass$1);
	});
	return class$;
}

$Class* GetAnnotatedSuperclass$1::class$ = nullptr;