#include <FinalVirtualCallFromInterface$Final.h>
#include <FinalVirtualCallFromInterface.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void FinalVirtualCallFromInterface$Final::init$() {
}

void FinalVirtualCallFromInterface$Final::fm() {
}

FinalVirtualCallFromInterface$Final::FinalVirtualCallFromInterface$Final() {
}

$Class* FinalVirtualCallFromInterface$Final::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FinalVirtualCallFromInterface$Final, init$, void)},
		{"fm", "()V", nullptr, $PUBLIC | $FINAL, $method(FinalVirtualCallFromInterface$Final, fm, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FinalVirtualCallFromInterface$Final", "FinalVirtualCallFromInterface", "Final", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FinalVirtualCallFromInterface$Final",
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
		"FinalVirtualCallFromInterface"
	};
	$loadClass(FinalVirtualCallFromInterface$Final, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FinalVirtualCallFromInterface$Final);
	});
	return class$;
}

$Class* FinalVirtualCallFromInterface$Final::class$ = nullptr;