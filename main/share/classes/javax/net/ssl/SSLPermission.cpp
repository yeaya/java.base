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

void SSLPermission::init$($String* name) {
	$BasicPermission::init$(name);
}

void SSLPermission::init$($String* name, $String* actions) {
	$BasicPermission::init$(name, actions);
}

SSLPermission::SSLPermission() {
}

$Class* SSLPermission::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SSLPermission, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SSLPermission, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SSLPermission, init$, void, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.net.ssl.SSLPermission",
		"java.security.BasicPermission",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SSLPermission, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SSLPermission));
	});
	return class$;
}

$Class* SSLPermission::class$ = nullptr;

		} // ssl
	} // net
} // javax