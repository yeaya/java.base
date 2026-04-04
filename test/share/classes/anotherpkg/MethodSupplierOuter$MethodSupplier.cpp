#include <anotherpkg/MethodSupplierOuter$MethodSupplier.h>
#include <anotherpkg/MethodSupplierOuter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace anotherpkg {

void MethodSupplierOuter$MethodSupplier::init$() {
}

$String* MethodSupplierOuter$MethodSupplier::m() {
	return "public inherited method"_s;
}

MethodSupplierOuter$MethodSupplier::MethodSupplierOuter$MethodSupplier() {
}

$Class* MethodSupplierOuter$MethodSupplier::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MethodSupplierOuter$MethodSupplier, init$, void)},
		{"m", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MethodSupplierOuter$MethodSupplier, m, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"anotherpkg.MethodSupplierOuter$MethodSupplier", "anotherpkg.MethodSupplierOuter", "MethodSupplier", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"anotherpkg.MethodSupplierOuter$MethodSupplier",
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
		"anotherpkg.MethodSupplierOuter"
	};
	$loadClass(MethodSupplierOuter$MethodSupplier, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MethodSupplierOuter$MethodSupplier);
	});
	return class$;
}

$Class* MethodSupplierOuter$MethodSupplier::class$ = nullptr;

} // anotherpkg