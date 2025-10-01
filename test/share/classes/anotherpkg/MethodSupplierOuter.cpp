#include <anotherpkg/MethodSupplierOuter.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace anotherpkg {

$MethodInfo _MethodSupplierOuter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MethodSupplierOuter::*)()>(&MethodSupplierOuter::init$))},
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