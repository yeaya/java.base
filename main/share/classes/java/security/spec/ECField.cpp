#include <java/security/spec/ECField.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {
		namespace spec {

$MethodInfo _ECField_MethodInfo_[] = {
	{"getFieldSize", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ECField, getFieldSize, int32_t)},
	{}
};

$ClassInfo _ECField_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.spec.ECField",
	nullptr,
	nullptr,
	nullptr,
	_ECField_MethodInfo_
};

$Object* allocate$ECField($Class* clazz) {
	return $of($alloc(ECField));
}

$Class* ECField::load$($String* name, bool initialize) {
	$loadClass(ECField, name, initialize, &_ECField_ClassInfo_, allocate$ECField);
	return class$;
}

$Class* ECField::class$ = nullptr;

		} // spec
	} // security
} // java