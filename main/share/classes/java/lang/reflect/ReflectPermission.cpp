#include <java/lang/reflect/ReflectPermission.h>

#include <java/security/BasicPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicPermission = ::java::security::BasicPermission;

namespace java {
	namespace lang {
		namespace reflect {

$FieldInfo _ReflectPermission_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReflectPermission, serialVersionUID)},
	{}
};

$MethodInfo _ReflectPermission_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ReflectPermission::*)($String*)>(&ReflectPermission::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ReflectPermission::*)($String*,$String*)>(&ReflectPermission::init$))},
	{}
};

$ClassInfo _ReflectPermission_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.lang.reflect.ReflectPermission",
	"java.security.BasicPermission",
	nullptr,
	_ReflectPermission_FieldInfo_,
	_ReflectPermission_MethodInfo_
};

$Object* allocate$ReflectPermission($Class* clazz) {
	return $of($alloc(ReflectPermission));
}

void ReflectPermission::init$($String* name) {
	$BasicPermission::init$(name);
}

void ReflectPermission::init$($String* name, $String* actions) {
	$BasicPermission::init$(name, actions);
}

ReflectPermission::ReflectPermission() {
}

$Class* ReflectPermission::load$($String* name, bool initialize) {
	$loadClass(ReflectPermission, name, initialize, &_ReflectPermission_ClassInfo_, allocate$ReflectPermission);
	return class$;
}

$Class* ReflectPermission::class$ = nullptr;

		} // reflect
	} // lang
} // java