#include <ImplicitStringConcat$MyClassNull.h>
#include <ImplicitStringConcat.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ImplicitStringConcat$MyClassNull::init$() {
}

$String* ImplicitStringConcat$MyClassNull::toString() {
	return nullptr;
}

ImplicitStringConcat$MyClassNull::ImplicitStringConcat$MyClassNull() {
}

$Class* ImplicitStringConcat$MyClassNull::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ImplicitStringConcat$MyClassNull, init$, void)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ImplicitStringConcat$MyClassNull, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ImplicitStringConcat$MyClassNull", "ImplicitStringConcat", "MyClassNull", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ImplicitStringConcat$MyClassNull",
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
	$loadClass(ImplicitStringConcat$MyClassNull, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImplicitStringConcat$MyClassNull);
	});
	return class$;
}

$Class* ImplicitStringConcat$MyClassNull::class$ = nullptr;