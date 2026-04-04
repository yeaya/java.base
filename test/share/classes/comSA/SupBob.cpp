#include <comSA/SupBob.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace comSA {

void SupBob::init$() {
}

void SupBob::clinit$($Class* clazz) {
	{
		$nc($System::out)->println("comSA.SupBob loaded"_s);
	}
}

SupBob::SupBob() {
}

$Class* SupBob::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SupBob, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"comSA.SupBob",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SupBob, name, initialize, &classInfo$$, SupBob::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SupBob);
	});
	return class$;
}

$Class* SupBob::class$ = nullptr;

} // comSA