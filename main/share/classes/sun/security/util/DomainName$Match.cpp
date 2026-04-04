#include <sun/security/util/DomainName$Match.h>
#include <sun/security/util/DomainName$Rule$Type.h>
#include <sun/security/util/DomainName.h>
#include <sun/security/util/RegisteredDomain.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DomainName$Rule$Type = ::sun::security::util::DomainName$Rule$Type;
using $RegisteredDomain = ::sun::security::util::RegisteredDomain;

namespace sun {
	namespace security {
		namespace util {

$Class* DomainName$Match::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"registeredDomain", "()Lsun/security/util/RegisteredDomain;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DomainName$Match, registeredDomain, $RegisteredDomain*)},
		{"type", "()Lsun/security/util/DomainName$Rule$Type;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DomainName$Match, type, $DomainName$Rule$Type*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.DomainName$Match", "sun.security.util.DomainName", "Match", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.security.util.DomainName$Match",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.util.DomainName"
	};
	$loadClass(DomainName$Match, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DomainName$Match);
	});
	return class$;
}

$Class* DomainName$Match::class$ = nullptr;

		} // util
	} // security
} // sun