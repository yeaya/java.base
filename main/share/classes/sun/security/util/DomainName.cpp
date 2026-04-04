#include <sun/security/util/DomainName.h>
#include <java/util/AbstractMap.h>
#include <java/util/Map.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <sun/security/util/DomainName$Match.h>
#include <sun/security/util/DomainName$Rules.h>
#include <sun/security/util/RegisteredDomain.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractMap = ::java::util::AbstractMap;
using $Map = ::java::util::Map;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $DomainName$Match = ::sun::security::util::DomainName$Match;
using $DomainName$Rules = ::sun::security::util::DomainName$Rules;
using $RegisteredDomain = ::sun::security::util::RegisteredDomain;

namespace sun {
	namespace security {
		namespace util {

$Map* DomainName::cache = nullptr;

void DomainName::init$() {
}

$RegisteredDomain* DomainName::registeredDomain($String* domain) {
	$init(DomainName);
	$var($DomainName$Match, match, getMatch(domain));
	return (match != nullptr) ? match->registeredDomain() : ($RegisteredDomain*)nullptr;
}

$DomainName$Match* DomainName::getMatch($String* domain) {
	$init(DomainName);
	if (domain == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($DomainName$Rules, rules, $DomainName$Rules::getRules(domain));
	return rules == nullptr ? ($DomainName$Match*)nullptr : rules->match(domain);
}

void DomainName::clinit$($Class* clazz) {
	$assignStatic(DomainName::cache, $cast($AbstractMap, $new($ConcurrentHashMap)));
}

DomainName::DomainName() {
}

$Class* DomainName::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"cache", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lsun/security/util/DomainName$Rules;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DomainName, cache)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DomainName, init$, void)},
		{"getMatch", "(Ljava/lang/String;)Lsun/security/util/DomainName$Match;", nullptr, $PRIVATE | $STATIC, $staticMethod(DomainName, getMatch, $DomainName$Match*, $String*)},
		{"registeredDomain", "(Ljava/lang/String;)Lsun/security/util/RegisteredDomain;", nullptr, $PUBLIC | $STATIC, $staticMethod(DomainName, registeredDomain, $RegisteredDomain*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.DomainName$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{"sun.security.util.DomainName$OtherMatch", "sun.security.util.DomainName", "OtherMatch", $PRIVATE | $STATIC},
		{"sun.security.util.DomainName$CommonMatch", "sun.security.util.DomainName", "CommonMatch", $PRIVATE | $STATIC},
		{"sun.security.util.DomainName$RegisteredDomainImpl", "sun.security.util.DomainName", "RegisteredDomainImpl", $PRIVATE | $STATIC},
		{"sun.security.util.DomainName$Match", "sun.security.util.DomainName", "Match", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{"sun.security.util.DomainName$OtherRule", "sun.security.util.DomainName", "OtherRule", $PRIVATE | $STATIC},
		{"sun.security.util.DomainName$Rule", "sun.security.util.DomainName", "Rule", $PRIVATE | $STATIC},
		{"sun.security.util.DomainName$Rules", "sun.security.util.DomainName", "Rules", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.util.DomainName",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.util.DomainName$1,sun.security.util.DomainName$OtherMatch,sun.security.util.DomainName$CommonMatch,sun.security.util.DomainName$RegisteredDomainImpl,sun.security.util.DomainName$Match,sun.security.util.DomainName$OtherRule,sun.security.util.DomainName$Rule,sun.security.util.DomainName$Rule$Type,sun.security.util.DomainName$Rules,sun.security.util.DomainName$Rules$RuleSet,sun.security.util.DomainName$Rules$1"
	};
	$loadClass(DomainName, name, initialize, &classInfo$$, DomainName::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DomainName);
	});
	return class$;
}

$Class* DomainName::class$ = nullptr;

		} // util
	} // security
} // sun