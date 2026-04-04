#include <comSB/SupAlice.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace comSB {

void SupAlice::init$() {
}

void SupAlice::clinit$($Class* clazz) {
	{
		$nc($System::out)->println("comSB.SupAlice loaded"_s);
	}
}

SupAlice::SupAlice() {
}

$Class* SupAlice::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SupAlice, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"comSB.SupAlice",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SupAlice, name, initialize, &classInfo$$, SupAlice::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SupAlice);
	});
	return class$;
}

$Class* SupAlice::class$ = nullptr;

} // comSB