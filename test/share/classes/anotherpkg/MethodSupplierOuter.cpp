#include <anotherpkg/MethodSupplierOuter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace anotherpkg {

void MethodSupplierOuter::init$() {
}

MethodSupplierOuter::MethodSupplierOuter() {
}

$Class* MethodSupplierOuter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MethodSupplierOuter, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"anotherpkg.MethodSupplierOuter$MethodSupplier", "anotherpkg.MethodSupplierOuter", "MethodSupplier", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"anotherpkg.MethodSupplierOuter",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"anotherpkg.MethodSupplierOuter$MethodSupplier"
	};
	$loadClass(MethodSupplierOuter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MethodSupplierOuter);
	});
	return class$;
}

$Class* MethodSupplierOuter::class$ = nullptr;

} // anotherpkg