#include <ImplicitStringConcat$MyClass.h>
#include <ImplicitStringConcat.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ImplicitStringConcat$MyClass::init$() {
}

$String* ImplicitStringConcat$MyClass::toString() {
	return "MyClass"_s;
}

ImplicitStringConcat$MyClass::ImplicitStringConcat$MyClass() {
}

$Class* ImplicitStringConcat$MyClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ImplicitStringConcat$MyClass, init$, void)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ImplicitStringConcat$MyClass, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ImplicitStringConcat$MyClass", "ImplicitStringConcat", "MyClass", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ImplicitStringConcat$MyClass",
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
		"ImplicitStringConcat"
	};
	$loadClass(ImplicitStringConcat$MyClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImplicitStringConcat$MyClass);
	});
	return class$;
}

$Class* ImplicitStringConcat$MyClass::class$ = nullptr;