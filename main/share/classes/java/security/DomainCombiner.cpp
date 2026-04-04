#include <java/security/DomainCombiner.h>
#include <java/security/ProtectionDomain.h>
#include <jcpp.h>

using $ProtectionDomainArray = $Array<::java::security::ProtectionDomain>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace java {
	namespace security {

$Class* DomainCombiner::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"combine", "([Ljava/security/ProtectionDomain;[Ljava/security/ProtectionDomain;)[Ljava/security/ProtectionDomain;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DomainCombiner, combine, $ProtectionDomainArray*, $ProtectionDomainArray*, $ProtectionDomainArray*)},
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
		"java.security.DomainCombiner",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(DomainCombiner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DomainCombiner);
	});
	return class$;
}

$Class* DomainCombiner::class$ = nullptr;

	} // security
} // java