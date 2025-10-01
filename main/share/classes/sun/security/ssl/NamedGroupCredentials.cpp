#include <sun/security/ssl/NamedGroupCredentials.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/PublicKey.h>
#include <sun/security/ssl/NamedGroup.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PublicKey = ::java::security::PublicKey;
using $NamedGroup = ::sun::security::ssl::NamedGroup;
using $SSLCredentials = ::sun::security::ssl::SSLCredentials;

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