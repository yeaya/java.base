#include <java/security/Policy$Parameters.h>
#include <java/security/Policy.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace java {
	namespace security {

$Class* Policy$Parameters::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.Policy$Parameters", "java.security.Policy", "Parameters", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"since", 's', "17"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.Policy$Parameters",
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"java.security.Policy"
	};
	$loadClass(Policy$Parameters, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Policy$Parameters);
	});
	return class$;
}

$Class* Policy$Parameters::class$ = nullptr;

	} // security
} // java