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
using $DomainName = ::sun::security::util::DomainName;
using $DomainName$Rule = ::sun::security::util::DomainName$Rule;
using $DomainName$Rule$Type = ::sun::security::util::DomainName$Rule$Type;
using $RegisteredDomain$Type = ::sun::security::util::RegisteredDomain$Type;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _DomainName$OtherRule_FieldInfo_[] = {
	{"labels", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", 0, $field(DomainName$OtherRule, labels)},
	{}
};

$MethodInfo _DomainName$OtherRule_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Lsun/security/util/RegisteredDomain$Type;Ljava/util/List;)V", "(Ljava/lang/String;Lsun/security/util/RegisteredDomain$Type;Ljava/util/List<Ljava/lang/String;>;)V", 0, $method(static_cast<void(DomainName$OtherRule::*)($String*,$RegisteredDomain$Type*,$List*)>(&DomainName$OtherRule::init$))},
	{}
};

$InnerClassInfo _DomainName$OtherRule_InnerClassesInfo_[] = {
	{"sun.security.util.DomainName$OtherRule", "sun.security.util.DomainName", "OtherRule", $PRIVATE | $STATIC},
	{"sun.security.util.DomainName$Rule", "sun.security.util.DomainName", "Rule", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DomainName$OtherRule_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.util.DomainName$OtherRule",
	"sun.security.util.DomainName$Rule",
	nullptr,
	_DomainName$OtherRule_FieldInfo_,
	_DomainName$OtherRule_MethodInfo_,
	nullptr,
	nullptr,
	_DomainName$OtherRule_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.DomainName"
};

$Object* allocate$DomainName$OtherRule($Class* clazz) {
	return $of($alloc(DomainName$OtherRule));
}

void DomainName$OtherRule::init$($String* domain, $RegisteredDomain$Type* auth, $List* labels) {
	$init($DomainName$Rule$Type);
	$DomainName$Rule::init$(domain, $DomainName$Rule$Type::OTHER, auth);
	$set(this, labels, labels);
}

DomainName$OtherRule::DomainName$OtherRule() {
}

$Class* DomainName$OtherRule::load$($String* name, bool initialize) {
	$loadClass(DomainName$OtherRule, name, initialize, &_DomainName$OtherRule_ClassInfo_, allocate$DomainName$OtherRule);
	return class$;
}

$Class* DomainName$OtherRule::class$ = nullptr;

		} // util
	} // security
} // sun