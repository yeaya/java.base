#include <sun/net/www/protocol/http/AuthenticatorKeys$AuthenticatorKeyAccess.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/Authenticator.h>
#include <sun/net/www/protocol/http/AuthenticatorKeys.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Authenticator = ::java::net::Authenticator;
using $AuthenticatorKeys = ::sun::net::www::protocol::http::AuthenticatorKeys;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {
$CompoundAttribute _AuthenticatorKeys$AuthenticatorKeyAccess_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};


$MethodInfo _AuthenticatorKeys$AuthenticatorKeyAccess_MethodInfo_[] = {
	{"getKey", "(Ljava/net/Authenticator;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AuthenticatorKeys$AuthenticatorKeyAccess_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.http.AuthenticatorKeys$AuthenticatorKeyAccess", "sun.net.www.protocol.http.AuthenticatorKeys", "AuthenticatorKeyAccess", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AuthenticatorKeys$AuthenticatorKeyAccess_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.net.www.protocol.http.AuthenticatorKeys$AuthenticatorKeyAccess",
	nullptr,
	nullptr,
	nullptr,
	_AuthenticatorKeys$AuthenticatorKeyAccess_MethodInfo_,
	nullptr,
	nullptr,
	_AuthenticatorKeys$AuthenticatorKeyAccess_InnerClassesInfo_,
	_AuthenticatorKeys$AuthenticatorKeyAccess_Annotations_,
	nullptr,
	nullptr,
	"sun.net.www.protocol.http.AuthenticatorKeys"
};

$Object* allocate$AuthenticatorKeys$AuthenticatorKeyAccess($Class* clazz) {
	return $of($alloc(AuthenticatorKeys$AuthenticatorKeyAccess));
}

$Class* AuthenticatorKeys$AuthenticatorKeyAccess::load$($String* name, bool initialize) {
	$loadClass(AuthenticatorKeys$AuthenticatorKeyAccess, name, initialize, &_AuthenticatorKeys$AuthenticatorKeyAccess_ClassInfo_, allocate$AuthenticatorKeys$AuthenticatorKeyAccess);
	return class$;
}

$Class* AuthenticatorKeys$AuthenticatorKeyAccess::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun