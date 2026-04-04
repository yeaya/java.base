#include <GetAnnotatedInterfaces$1.h>
#include <GetAnnotatedInterfaces$Clz.h>
#include <jcpp.h>

using $GetAnnotatedInterfaces$Clz = ::GetAnnotatedInterfaces$Clz;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void GetAnnotatedInterfaces$1::init$() {
	$GetAnnotatedInterfaces$Clz::init$();
}

GetAnnotatedInterfaces$1::GetAnnotatedInterfaces$1() {
}

$Class* GetAnnotatedInterfaces$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(GetAnnotatedInterfaces$1, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"GetAnnotatedInterfaces",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetAnnotatedInterfaces$1", nullptr, nullptr, 0},
		{"GetAnnotatedInterfaces$Clz", "GetAnnotatedInterfaces", "Clz", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"GetAnnotatedInterfaces$1",
		"GetAnnotatedInterfaces$Clz",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"GetAnnotatedInterfaces"
	};
	$loadClass(GetAnnotatedInterfaces$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetAnnotatedInterfaces$1);
	});
	return class$;
}

$Class* GetAnnotatedInterfaces$1::class$ = nullptr;