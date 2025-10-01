#include <java/security/spec/KeySpec.h>

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

$ClassInfo _KeySpec_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.spec.KeySpec"
};

$Object* allocate$KeySpec($Class* clazz) {
	return $of($alloc(KeySpec));
}

$Class* KeySpec::load$($String* name, bool initialize) {
	$loadClass(KeySpec, name, initialize, &_KeySpec_ClassInfo_, allocate$KeySpec);
	return class$;
}

$Class* KeySpec::class$ = nullptr;

		} // spec
	} // security
} // java