#include <sun/security/util/DomainName$Rule.h>

#include <sun/security/util/DomainName$Rule$Type.h>
#include <sun/security/util/DomainName.h>
#include <sun/security/util/RegisteredDomain$Type.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DomainName$Rule$Type = ::sun::security::util::DomainName$Rule$Type;
using $RegisteredDomain$Type = ::sun::security::util::RegisteredDomain$Type;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _DomainName$Rule_FieldInfo_[] = {
	{"domain", "Ljava/lang/String;", nullptr, 0, $field(DomainName$Rule, domain)},
	{"type", "Lsun/security/util/DomainName$Rule$Type;", nullptr, 0, $field(DomainName$Rule, type)},
	{"auth", "Lsun/security/util/RegisteredDomain$Type;", nullptr, 0, $field(DomainName$Rule, auth)},
	{}
};

$MethodInfo _DomainName$Rule_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Lsun/security/util/DomainName$Rule$Type;Lsun/security/util/RegisteredDomain$Type;)V", nullptr, 0, $method(DomainName$Rule, init$, void, $String*, $DomainName$Rule$Type*, $RegisteredDomain$Type*)},
	{}
};

$InnerClassInfo _DomainName$Rule_InnerClassesInfo_[] = {
	{"sun.security.util.DomainName$Rule", "sun.security.util.DomainName", "Rule", $PRIVATE | $STATIC},
	{"sun.security.util.DomainName$Rule$Type", "sun.security.util.DomainName$Rule", "Type", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _DomainName$Rule_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.util.DomainName$Rule",
	"java.lang.Object",
	nullptr,
	_DomainName$Rule_FieldInfo_,
	_DomainName$Rule_MethodInfo_,
	nullptr,
	nullptr,
	_DomainName$Rule_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.DomainName"
};

$Object* allocate$DomainName$Rule($Class* clazz) {
	return $of($alloc(DomainName$Rule));
}

void DomainName$Rule::init$($String* domain, $DomainName$Rule$Type* type, $RegisteredDomain$Type* auth) {
	$set(this, domain, domain);
	$set(this, type, type);
	$set(this, auth, auth);
}

DomainName$Rule::DomainName$Rule() {
}

$Class* DomainName$Rule::load$($String* name, bool initialize) {
	$loadClass(DomainName$Rule, name, initialize, &_DomainName$Rule_ClassInfo_, allocate$DomainName$Rule);
	return class$;
}

$Class* DomainName$Rule::class$ = nullptr;

		} // util
	} // security
} // sun