#include <java/security/spec/ECGenParameterSpec.h>

#include <java/security/spec/NamedParameterSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedParameterSpec = ::java::security::spec::NamedParameterSpec;

namespace java {
	namespace security {
		namespace spec {

$MethodInfo _ECGenParameterSpec_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ECGenParameterSpec::*)($String*)>(&ECGenParameterSpec::init$))},
	{}
};

$ClassInfo _ECGenParameterSpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.spec.ECGenParameterSpec",
	"java.security.spec.NamedParameterSpec",
	nullptr,
	nullptr,
	_ECGenParameterSpec_MethodInfo_
};

$Object* allocate$ECGenParameterSpec($Class* clazz) {
	return $of($alloc(ECGenParameterSpec));
}

void ECGenParameterSpec::init$($String* stdName) {
	$NamedParameterSpec::init$(stdName);
}

ECGenParameterSpec::ECGenParameterSpec() {
}

$Class* ECGenParameterSpec::load$($String* name, bool initialize) {
	$loadClass(ECGenParameterSpec, name, initialize, &_ECGenParameterSpec_ClassInfo_, allocate$ECGenParameterSpec);
	return class$;
}

$Class* ECGenParameterSpec::class$ = nullptr;

		} // spec
	} // security
} // java