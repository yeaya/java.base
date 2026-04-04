#include <ClassAttributesTest$1.h>
#include <ClassAttributesTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ClassAttributesTest$1::init$() {
}

ClassAttributesTest$1::ClassAttributesTest$1() {
}

$Class* ClassAttributesTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ClassAttributesTest$1, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ClassAttributesTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ClassAttributesTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ClassAttributesTest$1",
		"java.lang.Object",
		"java.lang.Cloneable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ClassAttributesTest"
	};
	$loadClass(ClassAttributesTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassAttributesTest$1);
	});
	return class$;
}

$Class* ClassAttributesTest$1::class$ = nullptr;