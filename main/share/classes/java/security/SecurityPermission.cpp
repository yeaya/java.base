#include <java/security/SecurityPermission.h>

#include <java/security/BasicPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicPermission = ::java::security::BasicPermission;

namespace java {
	namespace security {

$FieldInfo _SecurityPermission_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SecurityPermission, serialVersionUID)},
	{}
};

$MethodInfo _SecurityPermission_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SecurityPermission, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SecurityPermission, init$, void, $String*, $String*)},
	{}
};

$ClassInfo _SecurityPermission_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.security.SecurityPermission",
	"java.security.BasicPermission",
	nullptr,
	_SecurityPermission_FieldInfo_,
	_SecurityPermission_MethodInfo_
};

$Object* allocate$SecurityPermission($Class* clazz) {
	return $of($alloc(SecurityPermission));
}

void SecurityPermission::init$($String* name) {
	$BasicPermission::init$(name);
}

void SecurityPermission::init$($String* name, $String* actions) {
	$BasicPermission::init$(name, actions);
}

SecurityPermission::SecurityPermission() {
}

$Class* SecurityPermission::load$($String* name, bool initialize) {
	$loadClass(SecurityPermission, name, initialize, &_SecurityPermission_ClassInfo_, allocate$SecurityPermission);
	return class$;
}

$Class* SecurityPermission::class$ = nullptr;

	} // security
} // java