#include <java/io/SerializablePermission.h>

#include <java/security/BasicPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicPermission = ::java::security::BasicPermission;

namespace java {
	namespace io {

$FieldInfo _SerializablePermission_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SerializablePermission, serialVersionUID)},
	{"actions", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SerializablePermission, actions)},
	{}
};

$MethodInfo _SerializablePermission_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SerializablePermission::*)($String*)>(&SerializablePermission::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SerializablePermission::*)($String*,$String*)>(&SerializablePermission::init$))},
	{}
};

$ClassInfo _SerializablePermission_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.io.SerializablePermission",
	"java.security.BasicPermission",
	nullptr,
	_SerializablePermission_FieldInfo_,
	_SerializablePermission_MethodInfo_
};

$Object* allocate$SerializablePermission($Class* clazz) {
	return $of($alloc(SerializablePermission));
}

void SerializablePermission::init$($String* name) {
	$BasicPermission::init$(name);
}

void SerializablePermission::init$($String* name, $String* actions) {
	$BasicPermission::init$(name, actions);
}

SerializablePermission::SerializablePermission() {
}

$Class* SerializablePermission::load$($String* name, bool initialize) {
	$loadClass(SerializablePermission, name, initialize, &_SerializablePermission_ClassInfo_, allocate$SerializablePermission);
	return class$;
}

$Class* SerializablePermission::class$ = nullptr;

	} // io
} // java