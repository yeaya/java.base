#include <java/security/interfaces/EdECKey.h>
#include <java/security/spec/NamedParameterSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedParameterSpec = ::java::security::spec::NamedParameterSpec;

namespace java {
	namespace security {
		namespace interfaces {

$Class* EdECKey::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getParams", "()Ljava/security/spec/NamedParameterSpec;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EdECKey, getParams, $NamedParameterSpec*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.interfaces.EdECKey",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(EdECKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EdECKey);
	});
	return class$;
}

$Class* EdECKey::class$ = nullptr;

		} // interfaces
	} // security
} // java