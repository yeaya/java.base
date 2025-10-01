#include <java/net/NetPermission.h>

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

namespace java {
	namespace net {

$FieldInfo _NetPermission_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NetPermission, serialVersionUID)},
	{}
};

$MethodInfo _NetPermission_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NetPermission::*)($String*)>(&NetPermission::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NetPermission::*)($String*,$String*)>(&NetPermission::init$))},
	{}
};

$ClassInfo _NetPermission_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.net.NetPermission",
	"java.security.BasicPermission",
	nullptr,
	_NetPermission_FieldInfo_,
	_NetPermission_MethodInfo_
};

$Object* allocate$NetPermission($Class* clazz) {
	return $of($alloc(NetPermission));
}

void NetPermission::init$($String* name) {
	$BasicPermission::init$(name);
}

void NetPermission::init$($String* name, $String* actions) {
	$BasicPermission::init$(name, actions);
}

NetPermission::NetPermission() {
}

$Class* NetPermission::load$($String* name, bool initialize) {
	$loadClass(NetPermission, name, initialize, &_NetPermission_ClassInfo_, allocate$NetPermission);
	return class$;
}

$Class* NetPermission::class$ = nullptr;

	} // net
} // java