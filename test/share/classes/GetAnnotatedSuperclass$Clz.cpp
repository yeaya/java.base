#include <GetAnnotatedSuperclass$Clz.h>
#include <GetAnnotatedSuperclass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void GetAnnotatedSuperclass$Clz::init$() {
}

GetAnnotatedSuperclass$Clz::GetAnnotatedSuperclass$Clz() {
}

$Class* GetAnnotatedSuperclass$Clz::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(GetAnnotatedSuperclass$Clz, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetAnnotatedSuperclass$Clz", "GetAnnotatedSuperclass", "Clz", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"GetAnnotatedSuperclass$Clz",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"GetAnnotatedSuperclass"
	};
	$loadClass(GetAnnotatedSuperclass$Clz, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetAnnotatedSuperclass$Clz);
	});
	return class$;
}

$Class* GetAnnotatedSuperclass$Clz::class$ = nullptr;