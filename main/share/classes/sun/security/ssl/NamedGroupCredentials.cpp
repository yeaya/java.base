#include <sun/security/ssl/NamedGroupCredentials.h>

#include <java/security/PublicKey.h>
#include <sun/security/ssl/NamedGroup.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PublicKey = ::java::security::PublicKey;
using $NamedGroup = ::sun::security::ssl::NamedGroup;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _NamedGroupCredentials_MethodInfo_[] = {
	{"getNamedGroup", "()Lsun/security/ssl/NamedGroup;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NamedGroupCredentials, getNamedGroup, $NamedGroup*)},
	{"getPublicKey", "()Ljava/security/PublicKey;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NamedGroupCredentials, getPublicKey, $PublicKey*)},
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