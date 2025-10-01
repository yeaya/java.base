#include <java/util/function/LongSupplier.h>

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
$CompoundAttribute _LongSupplier_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};


$MethodInfo _LongSupplier_MethodInfo_[] = {
	{"getAsLong", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _LongSupplier_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.LongSupplier",
	nullptr,
	nullptr,
	nullptr,
	_LongSupplier_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_LongSupplier_Annotations_
};

$Object* allocate$LongSupplier($Class* clazz) {
	return $of($alloc(LongSupplier));
}

$Class* LongSupplier::load$($String* name, bool initialize) {
	$loadClass(LongSupplier, name, initialize, &_LongSupplier_ClassInfo_, allocate$LongSupplier);
	return class$;
}

$Class* LongSupplier::class$ = nullptr;

		} // function
	} // util
} // java