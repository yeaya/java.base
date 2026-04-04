#include <ImplicitStringConcatShapes$MyClassNullToString.h>
#include <ImplicitStringConcatShapes.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ImplicitStringConcatShapes$MyClassNullToString::init$() {
}

$String* ImplicitStringConcatShapes$MyClassNullToString::toString() {
	return nullptr;
}

ImplicitStringConcatShapes$MyClassNullToString::ImplicitStringConcatShapes$MyClassNullToString() {
}

$Class* ImplicitStringConcatShapes$MyClassNullToString::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ImplicitStringConcatShapes$MyClassNullToString, init$, void)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ImplicitStringConcatShapes$MyClassNullToString, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ImplicitStringConcatShapes$MyClassNullToString", "ImplicitStringConcatShapes", "MyClassNullToString", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ImplicitStringConcatShapes$MyClassNullToString",
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
		"ImplicitStringConcatShapes"
	};
	$loadClass(ImplicitStringConcatShapes$MyClassNullToString, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImplicitStringConcatShapes$MyClassNullToString);
	});
	return class$;
}

$Class* ImplicitStringConcatShapes$MyClassNullToString::class$ = nullptr;