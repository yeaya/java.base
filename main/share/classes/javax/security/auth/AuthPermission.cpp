#include <javax/security/auth/AuthPermission.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/BasicPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicPermission = ::java::security::BasicPermission;

namespace javax {
	namespace security {
		namespace auth {

$FieldInfo _AuthPermission_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AuthPermission, serialVersionUID)},
	{}
};

$MethodInfo _AuthPermission_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AuthPermission::*)($String*)>(&AuthPermission::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AuthPermission::*)($String*,$String*)>(&AuthPermission::init$))},
	{}
};

$ClassInfo _AuthPermission_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.security.auth.AuthPermission",
	"java.security.BasicPermission",
	nullptr,
	_AuthPermission_FieldInfo_,
	_AuthPermission_MethodInfo_
};

$Object* allocate$AuthPermission($Class* clazz) {
	return $of($alloc(AuthPermission));
}

void AuthPermission::init$($String* name) {
	$BasicPermission::init$("createLoginContext"_s->equals(name) ? "createLoginContext.*"_s : name);
}

void AuthPermission::init$($String* name, $String* actions) {
	$BasicPermission::init$("createLoginContext"_s->equals(name) ? "createLoginContext.*"_s : name, actions);
}

AuthPermission::AuthPermission() {
}

$Class* AuthPermission::load$($String* name, bool initialize) {
	$loadClass(AuthPermission, name, initialize, &_AuthPermission_ClassInfo_, allocate$AuthPermission);
	return class$;
}

$Class* AuthPermission::class$ = nullptr;

		} // auth
	} // security
} // javax