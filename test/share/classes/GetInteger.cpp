#include <GetInteger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

void GetInteger::init$() {
}

void GetInteger::main($StringArray* args) {
	$Integer::getInteger(""_s, 1);
	$Integer::getInteger(nullptr, 1);
}

GetInteger::GetInteger() {
}

$Class* GetInteger::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GetInteger, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(GetInteger, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"GetInteger",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(GetInteger, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetInteger);
	});
	return class$;
}

$Class* GetInteger::class$ = nullptr;