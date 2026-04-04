#include <java/security/GuardedObject.h>
#include <java/io/ObjectOutputStream.h>
#include <java/security/Guard.h>
#include <jcpp.h>

using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Guard = ::java::security::Guard;

namespace java {
	namespace security {

void GuardedObject::init$(Object$* object, $Guard* guard) {
	$set(this, guard, guard);
	$set(this, object, object);
}

$Object* GuardedObject::getObject() {
	if (this->guard != nullptr) {
		this->guard->checkGuard(this->object);
	}
	return this->object;
}

void GuardedObject::writeObject($ObjectOutputStream* oos) {
	if (this->guard != nullptr) {
		this->guard->checkGuard(this->object);
	}
	$nc(oos)->defaultWriteObject();
}

GuardedObject::GuardedObject() {
}

$Class* GuardedObject::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GuardedObject, serialVersionUID)},
		{"object", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(GuardedObject, object)},
		{"guard", "Ljava/security/Guard;", nullptr, $PRIVATE, $field(GuardedObject, guard)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljava/security/Guard;)V", nullptr, $PUBLIC, $method(GuardedObject, init$, void, Object$*, $Guard*)},
		{"getObject", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(GuardedObject, getObject, $Object*), "java.lang.SecurityException"},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(GuardedObject, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.GuardedObject",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(GuardedObject, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GuardedObject);
	});
	return class$;
}

$Class* GuardedObject::class$ = nullptr;

	} // security
} // java