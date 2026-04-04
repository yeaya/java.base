#include <GetLong.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;

void GetLong::init$() {
}

void GetLong::main($StringArray* args) {
	$Long::getLong(""_s, 1);
	$Long::getLong(nullptr, 1);
}

GetLong::GetLong() {
}

$Class* GetLong::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GetLong, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(GetLong, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"GetLong",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(GetLong, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetLong);
	});
	return class$;
}

$Class* GetLong::class$ = nullptr;