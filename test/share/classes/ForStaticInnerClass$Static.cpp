#include <ForStaticInnerClass$Static.h>
#include <ForStaticInnerClass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ForStaticInnerClass$Static::init$() {
}

ForStaticInnerClass$Static::ForStaticInnerClass$Static() {
}

$Class* ForStaticInnerClass$Static::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ForStaticInnerClass$Static, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ForStaticInnerClass$Static", "ForStaticInnerClass", "Static", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ForStaticInnerClass$Static",
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
		"ForStaticInnerClass"
	};
	$loadClass(ForStaticInnerClass$Static, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ForStaticInnerClass$Static);
	});
	return class$;
}

$Class* ForStaticInnerClass$Static::class$ = nullptr;