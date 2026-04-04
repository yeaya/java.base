#include <MethodSupplier.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void MethodSupplier::init$() {
}

void MethodSupplier::m() {
	$nc($System::out)->println("good"_s);
}

MethodSupplier::MethodSupplier() {
}

$Class* MethodSupplier::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MethodSupplier, init$, void)},
		{"m", "()V", nullptr, $PUBLIC, $virtualMethod(MethodSupplier, m, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"MethodSupplier",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MethodSupplier, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MethodSupplier);
	});
	return class$;
}

$Class* MethodSupplier::class$ = nullptr;