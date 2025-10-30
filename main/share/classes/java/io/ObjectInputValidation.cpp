#include <java/io/ObjectInputValidation.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$MethodInfo _ObjectInputValidation_MethodInfo_[] = {
	{"validateObject", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.InvalidObjectException"},
	{}
};

$ClassInfo _ObjectInputValidation_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.io.ObjectInputValidation",
	nullptr,
	nullptr,
	nullptr,
	_ObjectInputValidation_MethodInfo_
};

$Object* allocate$ObjectInputValidation($Class* clazz) {
	return $of($alloc(ObjectInputValidation));
}

$Class* ObjectInputValidation::load$($String* name, bool initialize) {
	$loadClass(ObjectInputValidation, name, initialize, &_ObjectInputValidation_ClassInfo_, allocate$ObjectInputValidation);
	return class$;
}

$Class* ObjectInputValidation::class$ = nullptr;

	} // io
} // java