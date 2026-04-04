#include <ResolveFrom.h>
#include <java/lang/reflect/Modifier.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Modifier = ::java::lang::reflect::Modifier;

void ResolveFrom::init$() {
}

void ResolveFrom::main($StringArray* argv) {
	$useLocalObjectStack();
	$load(ResolveFrom);
	int32_t m = ResolveFrom::class$->getModifiers();
	$nc($System::out)->println($$str({"ResolveFrom has modifiers = "_s, $($Modifier::toString(m))}));
}

ResolveFrom::ResolveFrom() {
}

$Class* ResolveFrom::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ResolveFrom, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ResolveFrom, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ResolveFrom$Inner", "ResolveFrom", "Inner", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ResolveFrom",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"ResolveFrom$Inner"
	};
	$loadClass(ResolveFrom, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResolveFrom);
	});
	return class$;
}

$Class* ResolveFrom::class$ = nullptr;