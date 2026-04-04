#include <ClassAttributesTest$1LocalClass.h>
#include <ClassAttributesTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ClassAttributesTest$1LocalClass::init$() {
}

ClassAttributesTest$1LocalClass::ClassAttributesTest$1LocalClass() {
}

$Class* ClassAttributesTest$1LocalClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ClassAttributesTest$1LocalClass, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ClassAttributesTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ClassAttributesTest$1LocalClass", nullptr, "LocalClass", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ClassAttributesTest$1LocalClass",
		"java.lang.Object",
		nullptr,
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
	$loadClass(ClassAttributesTest$1LocalClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassAttributesTest$1LocalClass);
	});
	return class$;
}

$Class* ClassAttributesTest$1LocalClass::class$ = nullptr;