#include <java/util/function/DoubleSupplier.h>

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
$CompoundAttribute _DoubleSupplier_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};


$MethodInfo _DoubleSupplier_MethodInfo_[] = {
	{"getAsDouble", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DoubleSupplier_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.DoubleSupplier",
	nullptr,
	nullptr,
	nullptr,
	_DoubleSupplier_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_DoubleSupplier_Annotations_
};

$Object* allocate$DoubleSupplier($Class* clazz) {
	return $of($alloc(DoubleSupplier));
}

$Class* DoubleSupplier::load$($String* name, bool initialize) {
	$loadClass(DoubleSupplier, name, initialize, &_DoubleSupplier_ClassInfo_, allocate$DoubleSupplier);
	return class$;
}

$Class* DoubleSupplier::class$ = nullptr;

		} // function
	} // util
} // java