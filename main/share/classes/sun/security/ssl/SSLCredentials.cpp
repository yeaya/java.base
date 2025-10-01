#include <sun/security/ssl/SSLCredentials.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace security {
		namespace ssl {

$ClassInfo _SSLCredentials_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.security.ssl.SSLCredentials"
};

$Object* allocate$SSLCredentials($Class* clazz) {
	return $of($alloc(SSLCredentials));
}

$Class* SSLCredentials::load$($String* name, bool initialize) {
	$loadClass(SSLCredentials, name, initialize, &_SSLCredentials_ClassInfo_, allocate$SSLCredentials);
	return class$;
}

$Class* SSLCredentials::class$ = nullptr;

		} // ssl
	} // security
} // sun