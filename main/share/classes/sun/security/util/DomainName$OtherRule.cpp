#include <sun/security/util/DomainName$OtherRule.h>
#include <java/util/List.h>
#include <sun/security/util/DomainName$Rule$Type.h>
#include <sun/security/util/DomainName$Rule.h>
#include <sun/security/util/DomainName.h>
#include <sun/security/util/RegisteredDomain$Type.h>
#include <jcpp.h>

#undef OTHER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $DomainName$Rule = ::sun::security::util::DomainName$Rule;
using $DomainName$Rule$Type = ::sun::security::util::DomainName$Rule$Type;
using $RegisteredDomain$Type = ::sun::security::util::RegisteredDomain$Type;

namespace sun {
	namespace security {
		namespace util {

void DomainName$OtherRule::init$($String* domain, $RegisteredDomain$Type* auth, $List* labels) {
	$init($DomainName$Rule$Type);
	$DomainName$Rule::init$(domain, $DomainName$Rule$Type::OTHER, auth);
	$set(this, labels, labels);
}

DomainName$OtherRule::DomainName$OtherRule() {
}

$Class* DomainName$OtherRule::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"labels", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", 0, $field(DomainName$OtherRule, labels)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Lsun/security/util/RegisteredDomain$Type;Ljava/util/List;)V", "(Ljava/lang/String;Lsun/security/util/RegisteredDomain$Type;Ljava/util/List<Ljava/lang/String;>;)V", 0, $method(DomainName$OtherRule, init$, void, $String*, $RegisteredDomain$Type*, $List*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.DomainName$OtherRule", "sun.security.util.DomainName", "OtherRule", $PRIVATE | $STATIC},
		{"sun.security.util.DomainName$Rule", "sun.security.util.DomainName", "Rule", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.util.DomainName$OtherRule",
		"sun.security.util.DomainName$Rule",
		nullptr,
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
	$loadClass(DomainName$OtherRule, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DomainName$OtherRule);
	});
	return class$;
}

$Class* DomainName$OtherRule::class$ = nullptr;

		} // util
	} // security
} // sun