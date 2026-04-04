#include <java/security/spec/ECGenParameterSpec.h>
#include <java/security/spec/NamedParameterSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedParameterSpec = ::java::security::spec::NamedParameterSpec;

namespace java {
	namespace security {
		namespace spec {

void ECGenParameterSpec::init$($String* stdName) {
	$NamedParameterSpec::init$(stdName);
}

ECGenParameterSpec::ECGenParameterSpec() {
}

$Class* ECGenParameterSpec::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ECGenParameterSpec, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.spec.ECGenParameterSpec",
		"java.security.spec.NamedParameterSpec",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ECGenParameterSpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ECGenParameterSpec);
	});
	return class$;
}

$Class* ECGenParameterSpec::class$ = nullptr;

		} // spec
	} // security
} // java