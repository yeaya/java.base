#include <anotherpkg/MethodSupplierOuter$MethodSupplier.h>

#include <anotherpkg/MethodSupplierOuter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace anotherpkg {

$MethodInfo _MethodSupplierOuter$MethodSupplier_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MethodSupplierOuter$MethodSupplier::*)()>(&MethodSupplierOuter$MethodSupplier::init$))},
	{"m", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MethodSupplierOuter$MethodSupplier_InnerClassesInfo_[] = {
	{"anotherpkg.MethodSupplierOuter$MethodSupplier", "anotherpkg.MethodSupplierOuter", "MethodSupplier", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MethodSupplierOuter$MethodSupplier_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"anotherpkg.MethodSupplierOuter$MethodSupplier",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MethodSupplierOuter$MethodSupplier_MethodInfo_,
	nullptr,
	nullptr,
	_MethodSupplierOuter$MethodSupplier_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"anotherpkg.MethodSupplierOuter"
};

$Object* allocate$MethodSupplierOuter$MethodSupplier($Class* clazz) {
	return $of($alloc(MethodSupplierOuter$MethodSupplier));
}

void MethodSupplierOuter$MethodSupplier::init$() {
}

$String* MethodSupplierOuter$MethodSupplier::m() {
	return "public inherited method"_s;
}

MethodSupplierOuter$MethodSupplier::MethodSupplierOuter$MethodSupplier() {
}

$Class* MethodSupplierOuter$MethodSupplier::load$($String* name, bool initialize) {
	$loadClass(MethodSupplierOuter$MethodSupplier, name, initialize, &_MethodSupplierOuter$MethodSupplier_ClassInfo_, allocate$MethodSupplierOuter$MethodSupplier);
	return class$;
}

$Class* MethodSupplierOuter$MethodSupplier::class$ = nullptr;

} // anotherpkg