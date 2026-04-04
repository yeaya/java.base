#include <sun/security/util/DomainName$CommonMatch.h>
#include <sun/security/util/DomainName$RegisteredDomainImpl.h>
#include <sun/security/util/DomainName$Rule$Type.h>
#include <sun/security/util/DomainName$Rule.h>
#include <sun/security/util/DomainName.h>
#include <sun/security/util/RegisteredDomain$Type.h>
#include <sun/security/util/RegisteredDomain.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DomainName$RegisteredDomainImpl = ::sun::security::util::DomainName$RegisteredDomainImpl;
using $DomainName$Rule = ::sun::security::util::DomainName$Rule;
using $DomainName$Rule$Type = ::sun::security::util::DomainName$Rule$Type;
using $RegisteredDomain = ::sun::security::util::RegisteredDomain;
using $RegisteredDomain$Type = ::sun::security::util::RegisteredDomain$Type;

namespace sun {
	namespace security {
		namespace util {

void DomainName$CommonMatch::init$($String* domain, $DomainName$Rule* rule, int32_t publicSuffix) {
	$set(this, domain, domain);
	this->publicSuffix = publicSuffix;
	$set(this, rule, rule);
	this->registeredDomain$ = $nc(domain)->lastIndexOf(u'.', publicSuffix - 2);
	if (this->registeredDomain$ == -1) {
		this->registeredDomain$ = 0;
	} else {
		++this->registeredDomain$;
	}
}

$RegisteredDomain* DomainName$CommonMatch::registeredDomain() {
	$useLocalObjectStack();
	if (this->publicSuffix == 0) {
		return nullptr;
	}
	$var($String, var$0, $nc(this->domain)->substring(this->registeredDomain$));
	$var($RegisteredDomain$Type, var$1, $nc(this->rule)->auth);
	return $new($DomainName$RegisteredDomainImpl, var$0, var$1, $(this->domain->substring(this->publicSuffix)));
}

$DomainName$Rule$Type* DomainName$CommonMatch::type() {
	return $nc(this->rule)->type;
}

DomainName$CommonMatch::DomainName$CommonMatch() {
}

$Class* DomainName$CommonMatch::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"domain", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DomainName$CommonMatch, domain)},
		{"publicSuffix", "I", nullptr, $PRIVATE, $field(DomainName$CommonMatch, publicSuffix)},
		{"registeredDomain", "I", nullptr, $PRIVATE, $field(DomainName$CommonMatch, registeredDomain$)},
		{"rule", "Lsun/security/util/DomainName$Rule;", nullptr, $PRIVATE | $FINAL, $field(DomainName$CommonMatch, rule)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Lsun/security/util/DomainName$Rule;I)V", nullptr, 0, $method(DomainName$CommonMatch, init$, void, $String*, $DomainName$Rule*, int32_t)},
		{"registeredDomain", "()Lsun/security/util/RegisteredDomain;", nullptr, $PUBLIC, $virtualMethod(DomainName$CommonMatch, registeredDomain, $RegisteredDomain*)},
		{"type", "()Lsun/security/util/DomainName$Rule$Type;", nullptr, $PUBLIC, $virtualMethod(DomainName$CommonMatch, type, $DomainName$Rule$Type*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.DomainName$CommonMatch", "sun.security.util.DomainName", "CommonMatch", $PRIVATE | $STATIC},
		{"sun.security.util.DomainName$Match", "sun.security.util.DomainName", "Match", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.util.DomainName$CommonMatch",
		"java.lang.Object",
		"sun.security.util.DomainName$Match",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.util.DomainName"
	};
	$loadClass(DomainName$CommonMatch, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DomainName$CommonMatch);
	});
	return class$;
}

$Class* DomainName$CommonMatch::class$ = nullptr;

		} // util
	} // security
} // sun