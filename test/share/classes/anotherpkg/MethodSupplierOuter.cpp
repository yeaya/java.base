#include <anotherpkg/MethodSupplierOuter.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace anotherpkg {

$MethodInfo _MethodSupplierOuter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(MethodSupplierOuter, init$, void)},
	{}
};

$InnerClassInfo _MethodSupplierOuter_InnerClassesInfo_[] = {
	{"anotherpkg.MethodSupplierOuter$MethodSupplier", "anotherpkg.MethodSupplierOuter", "MethodSupplier", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MethodSupplierOuter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"anotherpkg.MethodSupplierOuter",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MethodSupplierOuter_MethodInfo_,
	nullptr,
	nullptr,
	_MethodSupplierOuter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"anotherpkg.MethodSupplierOuter$MethodSupplier"
};

$Object* allocate$MethodSupplierOuter($Class* clazz) {
	return $of($alloc(MethodSupplierOuter));
}

void MethodSupplierOuter::init$() {
}

MethodSupplierOuter::MethodSupplierOuter() {
}

$Class* MethodSupplierOuter::load$($String* name, bool initialize) {
	$loadClass(MethodSupplierOuter, name, initialize, &_MethodSupplierOuter_ClassInfo_, allocate$MethodSupplierOuter);
	return class$;
}

$Class* MethodSupplierOuter::class$ = nullptr;

} // anotherpkg