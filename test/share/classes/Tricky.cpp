#include <Tricky.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Tricky::init$() {
}

Tricky::Tricky() {
}

$Class* Tricky::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Tricky, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Tricky$Nested", "Tricky", "Nested", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Tricky",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Tricky$Nested"
	};
	$loadClass(Tricky, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Tricky);
	});
	return class$;
}

$Class* Tricky::class$ = nullptr;