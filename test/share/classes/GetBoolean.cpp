#include <GetBoolean.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void GetBoolean::init$() {
}

void GetBoolean::main($StringArray* args) {
	$Boolean::getBoolean(""_s);
	$Boolean::getBoolean(nullptr);
}

GetBoolean::GetBoolean() {
}

$Class* GetBoolean::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GetBoolean, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(GetBoolean, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"GetBoolean",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(GetBoolean, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetBoolean);
	});
	return class$;
}

$Class* GetBoolean::class$ = nullptr;