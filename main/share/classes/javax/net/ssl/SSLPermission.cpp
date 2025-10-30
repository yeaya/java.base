#include <javax/net/ssl/SSLPermission.h>

#include <java/security/BasicPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicPermission = ::java::security::BasicPermission;

namespace javax {
	namespace net {
		namespace ssl {

$FieldInfo _SSLPermission_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SSLPermission, serialVersionUID)},
	{}
};

$MethodInfo _SSLPermission_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SSLPermission::*)($String*)>(&SSLPermission::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SSLPermission::*)($String*,$String*)>(&SSLPermission::init$))},
	{}
};

$ClassInfo _SSLPermission_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.net.ssl.SSLPermission",
	"java.security.BasicPermission",
	nullptr,
	_SSLPermission_FieldInfo_,
	_SSLPermission_MethodInfo_
};

$Object* allocate$SSLPermission($Class* clazz) {
	return $of($alloc(SSLPermission));
}

void SSLPermission::init$($String* name) {
	$BasicPermission::init$(name);
}

void SSLPermission::init$($String* name, $String* actions) {
	$BasicPermission::init$(name, actions);
}

SSLPermission::SSLPermission() {
}

$Class* SSLPermission::load$($String* name, bool initialize) {
	$loadClass(SSLPermission, name, initialize, &_SSLPermission_ClassInfo_, allocate$SSLPermission);
	return class$;
}

$Class* SSLPermission::class$ = nullptr;

		} // ssl
	} // net
} // javax