#include <java/security/interfaces/ECKey.h>
#include <java/security/spec/ECParameterSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ECParameterSpec = ::java::security::spec::ECParameterSpec;

namespace java {
	namespace security {
		namespace interfaces {

$Class* ECKey::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getParams", "()Ljava/security/spec/ECParameterSpec;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ECKey, getParams, $ECParameterSpec*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.interfaces.ECKey",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ECKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ECKey);
	});
	return class$;
}

$Class* ECKey::class$ = nullptr;

		} // interfaces
	} // security
} // java