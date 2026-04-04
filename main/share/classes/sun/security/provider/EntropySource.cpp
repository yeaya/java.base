#include <sun/security/provider/EntropySource.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace provider {

$Class* EntropySource::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getEntropy", "(IIIZ)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EntropySource, getEntropy, $bytes*, int32_t, int32_t, int32_t, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.security.provider.EntropySource",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(EntropySource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EntropySource);
	});
	return class$;
}

$Class* EntropySource::class$ = nullptr;

		} // provider
	} // security
} // sun