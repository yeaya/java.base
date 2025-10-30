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
using $DomainName = ::sun::security::util::DomainName;
using $DomainName$Match = ::sun::security::util::DomainName$Match;
using $DomainName$RegisteredDomainImpl = ::sun::security::util::DomainName$RegisteredDomainImpl;
using $DomainName$Rule = ::sun::security::util::DomainName$Rule;
using $DomainName$Rule$Type = ::sun::security::util::DomainName$Rule$Type;
using $RegisteredDomain = ::sun::security::util::RegisteredDomain;
using $RegisteredDomain$Type = ::sun::security::util::RegisteredDomain$Type;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _DomainName$CommonMatch_FieldInfo_[] = {
	{"domain", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DomainName$CommonMatch, domain)},
	{"publicSuffix", "I", nullptr, $PRIVATE, $field(DomainName$CommonMatch, publicSuffix)},
	{"registeredDomain", "I", nullptr, $PRIVATE, $field(DomainName$CommonMatch, registeredDomain$)},
	{"rule", "Lsun/security/util/DomainName$Rule;", nullptr, $PRIVATE | $FINAL, $field(DomainName$CommonMatch, rule)},
	{}
};

$MethodInfo _DomainName$CommonMatch_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Lsun/security/util/DomainName$Rule;I)V", nullptr, 0, $method(static_cast<void(DomainName$CommonMatch::*)($String*,$DomainName$Rule*,int32_t)>(&DomainName$CommonMatch::init$))},
	{"registeredDomain", "()Lsun/security/util/RegisteredDomain;", nullptr, $PUBLIC},
	{"type", "()Lsun/security/util/DomainName$Rule$Type;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DomainName$CommonMatch_InnerClassesInfo_[] = {
	{"sun.security.util.DomainName$CommonMatch", "sun.security.util.DomainName", "CommonMatch", $PRIVATE | $STATIC},
	{"sun.security.util.DomainName$Match", "sun.security.util.DomainName", "Match", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DomainName$CommonMatch_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.util.DomainName$CommonMatch",
	"java.lang.Object",
	"sun.security.util.DomainName$Match",
	_DomainName$CommonMatch_FieldInfo_,
	_DomainName$CommonMatch_MethodInfo_,
	nullptr,
	nullptr,
	_DomainName$CommonMatch_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.DomainName"
};

$Object* allocate$DomainName$CommonMatch($Class* clazz) {
	return $of($alloc(DomainName$CommonMatch));
}

void DomainName$CommonMatch::init$($String* domain, $DomainName$Rule* rule, int32_t publicSuffix) {
	$set(this, domain, domain);
	this->publicSuffix = publicSuffix;
	$set(this, rule, rule);
	this->registeredDomain$ = $nc(domain)->lastIndexOf((int32_t)u'.', publicSuffix - 2);
	if (this->registeredDomain$ == -1) {
		this->registeredDomain$ = 0;
	} else {
		++this->registeredDomain$;
	}
}

$RegisteredDomain* DomainName$CommonMatch::registeredDomain() {
	$useLocalCurrentObjectStackCache();
	if (this->publicSuffix == 0) {
		return nullptr;
	}
	$var($String, var$0, $nc(this->domain)->substring(this->registeredDomain$));
	$var($RegisteredDomain$Type, var$1, $nc(this->rule)->auth);
	return $new($DomainName$RegisteredDomainImpl, var$0, var$1, $($nc(this->domain)->substring(this->publicSuffix)));
}

$DomainName$Rule$Type* DomainName$CommonMatch::type() {
	return $nc(this->rule)->type;
}

DomainName$CommonMatch::DomainName$CommonMatch() {
}

$Class* DomainName$CommonMatch::load$($String* name, bool initialize) {
	$loadClass(DomainName$CommonMatch, name, initialize, &_DomainName$CommonMatch_ClassInfo_, allocate$DomainName$CommonMatch);
	return class$;
}

$Class* DomainName$CommonMatch::class$ = nullptr;

		} // util
	} // security
} // sun