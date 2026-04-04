#include <RegionMatches.h>
#include <jcpp.h>

#undef MIN_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void RegionMatches::init$() {
}

void RegionMatches::main($StringArray* args) {
	$useLocalObjectStack();
	$var($String, s1, "abc"_s);
	$var($String, s2, "def"_s);
	if (!s1->regionMatches(0, s2, 0, $Integer::MIN_VALUE)) {
		$throwNew($RuntimeException, "Integer overflow in RegionMatches"_s);
	}
}

RegionMatches::RegionMatches() {
}

$Class* RegionMatches::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RegionMatches, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(RegionMatches, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"RegionMatches",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(RegionMatches, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RegionMatches);
	});
	return class$;
}

$Class* RegionMatches::class$ = nullptr;