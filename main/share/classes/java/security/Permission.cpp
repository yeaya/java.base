#include <java/security/Permission.h>
#include <java/lang/SecurityManager.h>
#include <java/security/Guard.h>
#include <java/security/PermissionCollection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $Guard = ::java::security::Guard;
using $PermissionCollection = ::java::security::PermissionCollection;

namespace java {
	namespace security {

bool Permission::equals(Object$* obj) {
	 return this->$Guard::equals(obj);
}

int32_t Permission::hashCode() {
	 return this->$Guard::hashCode();
}

$Object* Permission::clone() {
	 return this->$Guard::clone();
}

void Permission::finalize() {
	this->$Guard::finalize();
}

void Permission::init$($String* name) {
	$set(this, name, name);
}

void Permission::checkGuard(Object$* object) {
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPermission(this);
	}
}

$String* Permission::getName() {
	return this->name;
}

$PermissionCollection* Permission::newPermissionCollection() {
	return nullptr;
}

$String* Permission::toString() {
	$useLocalObjectStack();
	$var($String, actions, getActions());
	if (actions == nullptr || actions->isEmpty()) {
		return $str({"(\""_s, $($of(this)->getClass()->getName()), "\" \""_s, this->name, "\")"_s});
	} else {
		return $str({"(\""_s, $($of(this)->getClass()->getName()), "\" \""_s, this->name, "\" \""_s, actions, "\")"_s});
	}
}

Permission::Permission() {
}

$Class* Permission::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Permission, serialVersionUID)},
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Permission, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(Permission, init$, void, $String*)},
		{"checkGuard", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Permission, checkGuard, void, Object$*), "java.lang.SecurityException"},
		{"getActions", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Permission, getActions, $String*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(Permission, getName, $String*)},
		{"implies", "(Ljava/security/Permission;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Permission, implies, bool, Permission*)},
		{"newPermissionCollection", "()Ljava/security/PermissionCollection;", nullptr, $PUBLIC, $virtualMethod(Permission, newPermissionCollection, $PermissionCollection*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Permission, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.security.Permission",
		"java.lang.Object",
		"java.security.Guard,java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Permission, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Permission));
	});
	return class$;
}

$Class* Permission::class$ = nullptr;

	} // security
} // java