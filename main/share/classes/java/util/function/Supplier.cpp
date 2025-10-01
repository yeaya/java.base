#include <java/util/function/Supplier.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {
$CompoundAttribute _Supplier_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};


$MethodInfo _Supplier_MethodInfo_[] = {
	{"get", "()Ljava/lang/Object;", "()TT;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Supplier_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.Supplier",
	nullptr,
	nullptr,
	nullptr,
	_Supplier_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	nullptr,
	_Supplier_Annotations_
};

$Object* allocate$Supplier($Class* clazz) {
	return $of($alloc(Supplier));
}

$Class* Supplier::load$($String* name, bool initialize) {
	$loadClass(Supplier, name, initialize, &_Supplier_ClassInfo_, allocate$Supplier);
	return class$;
}

$Class* Supplier::class$ = nullptr;

		} // function
	} // util
} // java