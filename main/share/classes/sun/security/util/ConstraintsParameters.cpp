#include <sun/security/util/ConstraintsParameters.h>
#include <java/util/Date.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Date = ::java::util::Date;
using $Set = ::java::util::Set;

namespace sun {
	namespace security {
		namespace util {

$Class* ConstraintsParameters::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"anchorIsJdkCA", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ConstraintsParameters, anchorIsJdkCA, bool)},
		{"extendedExceptionMsg", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ConstraintsParameters, extendedExceptionMsg, $String*)},
		{"getDate", "()Ljava/util/Date;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ConstraintsParameters, getDate, $Date*)},
		{"getKeys", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/security/Key;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ConstraintsParameters, getKeys, $Set*)},
		{"getVariant", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ConstraintsParameters, getVariant, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.security.util.ConstraintsParameters",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ConstraintsParameters, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConstraintsParameters);
	});
	return class$;
}

$Class* ConstraintsParameters::class$ = nullptr;

		} // util
	} // security
} // sun