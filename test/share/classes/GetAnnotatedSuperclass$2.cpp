#include <GetAnnotatedSuperclass$2.h>
#include <GetAnnotatedSuperclass$Clz.h>
#include <jcpp.h>

using $GetAnnotatedSuperclass$Clz = ::GetAnnotatedSuperclass$Clz;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void GetAnnotatedSuperclass$2::init$() {
	$GetAnnotatedSuperclass$Clz::init$();
}

GetAnnotatedSuperclass$2::GetAnnotatedSuperclass$2() {
}

$Class* GetAnnotatedSuperclass$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(GetAnnotatedSuperclass$2, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"GetAnnotatedSuperclass",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetAnnotatedSuperclass$2", nullptr, nullptr, 0},
		{"GetAnnotatedSuperclass$Clz", "GetAnnotatedSuperclass", "Clz", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"GetAnnotatedSuperclass$2",
		"GetAnnotatedSuperclass$Clz",
		nullptr,
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
	$loadClass(GetAnnotatedSuperclass$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetAnnotatedSuperclass$2);
	});
	return class$;
}

$Class* GetAnnotatedSuperclass$2::class$ = nullptr;