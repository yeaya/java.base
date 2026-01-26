#include <java/lang/RuntimePermission.h>

#include <java/security/BasicPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicPermission = ::java::security::BasicPermission;

namespace java {
	namespace lang {

$FieldInfo _RuntimePermission_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RuntimePermission, serialVersionUID)},
	{}
};

$MethodInfo _RuntimePermission_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RuntimePermission, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RuntimePermission, init$, void, $String*, $String*)},
	{}
};

$ClassInfo _RuntimePermission_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.lang.RuntimePermission",
	"java.security.BasicPermission",
	nullptr,
	_RuntimePermission_FieldInfo_,
	_RuntimePermission_MethodInfo_
};

$Object* allocate$RuntimePermission($Class* clazz) {
	return $of($alloc(RuntimePermission));
}

void RuntimePermission::init$($String* name) {
	$BasicPermission::init$(name);
}

void RuntimePermission::init$($String* name, $String* actions) {
	$BasicPermission::init$(name, actions);
}

RuntimePermission::RuntimePermission() {
}

$Class* RuntimePermission::load$($String* name, bool initialize) {
	$loadClass(RuntimePermission, name, initialize, &_RuntimePermission_ClassInfo_, allocate$RuntimePermission);
	return class$;
}

$Class* RuntimePermission::class$ = nullptr;

	} // lang
} // java