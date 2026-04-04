#include <GetAnnotatedInterfaces$Clz.h>
#include <GetAnnotatedInterfaces.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void GetAnnotatedInterfaces$Clz::init$() {
}

GetAnnotatedInterfaces$Clz::GetAnnotatedInterfaces$Clz() {
}

$Class* GetAnnotatedInterfaces$Clz::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(GetAnnotatedInterfaces$Clz, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetAnnotatedInterfaces$Clz", "GetAnnotatedInterfaces", "Clz", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"GetAnnotatedInterfaces$Clz",
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
		"GetAnnotatedInterfaces"
	};
	$loadClass(GetAnnotatedInterfaces$Clz, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetAnnotatedInterfaces$Clz);
	});
	return class$;
}

$Class* GetAnnotatedInterfaces$Clz::class$ = nullptr;