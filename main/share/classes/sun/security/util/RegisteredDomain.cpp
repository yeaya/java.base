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

namespace sun {
	namespace security {
		namespace util {

$MethodInfo _RegisteredDomain_MethodInfo_[] = {
	{"from", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Lsun/security/util/RegisteredDomain;>;", $PUBLIC | $STATIC, $method(static_cast<$Optional*(*)($String*)>(&RegisteredDomain::from))},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"publicSuffix", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"type", "()Lsun/security/util/RegisteredDomain$Type;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _RegisteredDomain_InnerClassesInfo_[] = {
	{"sun.security.util.RegisteredDomain$Type", "sun.security.util.RegisteredDomain", "Type", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _RegisteredDomain_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.security.util.RegisteredDomain",
	nullptr,
	nullptr,
	nullptr,
	_RegisteredDomain_MethodInfo_,
	nullptr,
	nullptr,
	_RegisteredDomain_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.util.RegisteredDomain$Type"
};

$Object* allocate$RegisteredDomain($Class* clazz) {
	return $of($alloc(RegisteredDomain));
}

$Optional* RegisteredDomain::from($String* domain) {
	return $Optional::ofNullable($($DomainName::registeredDomain(domain)));
}

$Class* RegisteredDomain::load$($String* name, bool initialize) {
	$loadClass(RegisteredDomain, name, initialize, &_RegisteredDomain_ClassInfo_, allocate$RegisteredDomain);
	return class$;
}

$Class* RegisteredDomain::class$ = nullptr;

		} // util
	} // security
} // sun