#include <java/security/GuardedObject.h>

#include <java/io/ObjectOutputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Guard.h>
#include <jcpp.h>

using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Guard = ::java::security::Guard;

namespace java {
	namespace security {

$FieldInfo _GuardedObject_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GuardedObject, serialVersionUID)},
	{"object", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(GuardedObject, object)},
	{"guard", "Ljava/security/Guard;", nullptr, $PRIVATE, $field(GuardedObject, guard)},
	{}
};

$MethodInfo _GuardedObject_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/security/Guard;)V", nullptr, $PUBLIC, $method(static_cast<void(GuardedObject::*)(Object$*,$Guard*)>(&GuardedObject::init$))},
	{"getObject", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.SecurityException"},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(GuardedObject::*)($ObjectOutputStream*)>(&GuardedObject::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _GuardedObject_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.GuardedObject",
	"java.lang.Object",
	"java.io.Serializable",
	_GuardedObject_FieldInfo_,
	_GuardedObject_MethodInfo_
};

$Object* allocate$GuardedObject($Class* clazz) {
	return $of($alloc(GuardedObject));
}

void GuardedObject::init$(Object$* object, $Guard* guard) {
	$set(this, guard, guard);
	$set(this, object, object);
}

$Object* GuardedObject::getObject() {
	if (this->guard != nullptr) {
		$nc(this->guard)->checkGuard(this->object);
	}
	return $of(this->object);
}

void GuardedObject::writeObject($ObjectOutputStream* oos) {
	if (this->guard != nullptr) {
		$nc(this->guard)->checkGuard(this->object);
	}
	$nc(oos)->defaultWriteObject();
}

GuardedObject::GuardedObject() {
}

$Class* GuardedObject::load$($String* name, bool initialize) {
	$loadClass(GuardedObject, name, initialize, &_GuardedObject_ClassInfo_, allocate$GuardedObject);
	return class$;
}

$Class* GuardedObject::class$ = nullptr;

	} // security
} // java