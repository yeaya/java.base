#include <sun/security/util/RegisteredDomain.h>
#include <java/util/Optional.h>
#include <sun/security/util/DomainName.h>
#include <sun/security/util/RegisteredDomain$Type.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Optional = ::java::util::Optional;
using $DomainName = ::sun::security::util::DomainName;
using $RegisteredDomain$Type = ::sun::security::util::RegisteredDomain$Type;

namespace sun {
	namespace security {
		namespace util {

$Optional* RegisteredDomain::from($String* domain) {
	return $Optional::ofNullable($($DomainName::registeredDomain(domain)));
}

$Class* RegisteredDomain::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"from", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Lsun/security/util/RegisteredDomain;>;", $PUBLIC | $STATIC, $staticMethod(RegisteredDomain, from, $Optional*, $String*)},
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RegisteredDomain, name, $String*)},
		{"publicSuffix", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RegisteredDomain, publicSuffix, $String*)},
		{"type", "()Lsun/security/util/RegisteredDomain$Type;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RegisteredDomain, type, $RegisteredDomain$Type*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.RegisteredDomain$Type", "sun.security.util.RegisteredDomain", "Type", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.security.util.RegisteredDomain",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.util.RegisteredDomain$Type"
	};
	$loadClass(RegisteredDomain, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RegisteredDomain);
	});
	return class$;
}

$Class* RegisteredDomain::class$ = nullptr;

		} // util
	} // security
} // sun