#include <sun/security/ssl/NamedGroupCredentials.h>

#include <java/security/PublicKey.h>
#include <sun/security/ssl/NamedGroup.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _NamedGroupCredentials_MethodInfo_[] = {
	{"getNamedGroup", "()Lsun/security/ssl/NamedGroup;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPublicKey", "()Ljava/security/PublicKey;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _NamedGroupCredentials_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.security.ssl.NamedGroupCredentials",
	nullptr,
	"sun.security.ssl.SSLCredentials",
	nullptr,
	_NamedGroupCredentials_MethodInfo_
};

$Object* allocate$NamedGroupCredentials($Class* clazz) {
	return $of($alloc(NamedGroupCredentials));
}

$Class* NamedGroupCredentials::load$($String* name, bool initialize) {
	$loadClass(NamedGroupCredentials, name, initialize, &_NamedGroupCredentials_ClassInfo_, allocate$NamedGroupCredentials);
	return class$;
}

$Class* NamedGroupCredentials::class$ = nullptr;

		} // ssl
	} // security
} // sun