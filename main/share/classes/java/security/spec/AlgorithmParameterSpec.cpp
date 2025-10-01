#include <java/security/spec/AlgorithmParameterSpec.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace security {
		namespace spec {

$ClassInfo _AlgorithmParameterSpec_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.spec.AlgorithmParameterSpec"
};

$Object* allocate$AlgorithmParameterSpec($Class* clazz) {
	return $of($alloc(AlgorithmParameterSpec));
}

$Class* AlgorithmParameterSpec::load$($String* name, bool initialize) {
	$loadClass(AlgorithmParameterSpec, name, initialize, &_AlgorithmParameterSpec_ClassInfo_, allocate$AlgorithmParameterSpec);
	return class$;
}

$Class* AlgorithmParameterSpec::class$ = nullptr;

		} // spec
	} // security
} // java