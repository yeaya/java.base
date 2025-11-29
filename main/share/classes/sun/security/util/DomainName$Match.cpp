#include <sun/security/util/DomainName$Match.h>

#include <sun/security/util/DomainName$Rule$Type.h>
#include <sun/security/util/DomainName.h>
#include <sun/security/util/RegisteredDomain.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace util {

$MethodInfo _DomainName$Match_MethodInfo_[] = {
	{"registeredDomain", "()Lsun/security/util/RegisteredDomain;", nullptr, $PUBLIC | $ABSTRACT},
	{"type", "()Lsun/security/util/DomainName$Rule$Type;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _DomainName$Match_InnerClassesInfo_[] = {
	{"sun.security.util.DomainName$Match", "sun.security.util.DomainName", "Match", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DomainName$Match_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.security.util.DomainName$Match",
	nullptr,
	nullptr,
	nullptr,
	_DomainName$Match_MethodInfo_,
	nullptr,
	nullptr,
	_DomainName$Match_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.DomainName"
};

$Object* allocate$DomainName$Match($Class* clazz) {
	return $of($alloc(DomainName$Match));
}

$Class* DomainName$Match::load$($String* name, bool initialize) {
	$loadClass(DomainName$Match, name, initialize, &_DomainName$Match_ClassInfo_, allocate$DomainName$Match);
	return class$;
}

$Class* DomainName$Match::class$ = nullptr;

		} // util
	} // security
} // sun