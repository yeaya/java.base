#include <javax/crypto/PermissionsEnumerator.h>
#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <java/util/Enumeration.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Permission = ::java::security::Permission;
using $PermissionCollection = ::java::security::PermissionCollection;
using $Enumeration = ::java::util::Enumeration;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace javax {
	namespace crypto {

void PermissionsEnumerator::init$($Enumeration* e) {
	$set(this, perms, e);
	$set(this, permset, getNextEnumWithMore());
}

bool PermissionsEnumerator::hasMoreElements() {
	$synchronized(this) {
		if (this->permset == nullptr) {
			return false;
		}
		if ($nc(this->permset)->hasMoreElements()) {
			return true;
		}
		$set(this, permset, getNextEnumWithMore());
		return (this->permset != nullptr);
	}
}

$Object* PermissionsEnumerator::nextElement() {
	$synchronized(this) {
		if (hasMoreElements()) {
			return $of($cast($Permission, $nc(this->permset)->nextElement()));
		} else {
			$throwNew($NoSuchElementException, "PermissionsEnumerator"_s);
		}
	}
}

$Enumeration* PermissionsEnumerator::getNextEnumWithMore() {
	$useLocalObjectStack();
	while ($nc(this->perms)->hasMoreElements()) {
		$var($PermissionCollection, pc, $cast($PermissionCollection, this->perms->nextElement()));
		$var($Enumeration, next, $nc(pc)->elements());
		if ($nc(next)->hasMoreElements()) {
			return next;
		}
	}
	return nullptr;
}

PermissionsEnumerator::PermissionsEnumerator() {
}

$Class* PermissionsEnumerator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"perms", "Ljava/util/Enumeration;", "Ljava/util/Enumeration<Ljava/security/PermissionCollection;>;", $PRIVATE | $FINAL, $field(PermissionsEnumerator, perms)},
		{"permset", "Ljava/util/Enumeration;", "Ljava/util/Enumeration<Ljava/security/Permission;>;", $PRIVATE, $field(PermissionsEnumerator, permset)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Enumeration;)V", "(Ljava/util/Enumeration<Ljava/security/PermissionCollection;>;)V", 0, $method(PermissionsEnumerator, init$, void, $Enumeration*)},
		{"getNextEnumWithMore", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/security/Permission;>;", $PRIVATE, $method(PermissionsEnumerator, getNextEnumWithMore, $Enumeration*)},
		{"hasMoreElements", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(PermissionsEnumerator, hasMoreElements, bool)},
		{"nextElement", "()Ljava/security/Permission;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(PermissionsEnumerator, nextElement, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.crypto.PermissionsEnumerator",
		"java.lang.Object",
		"java.util.Enumeration",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/security/Permission;>;"
	};
	$loadClass(PermissionsEnumerator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PermissionsEnumerator);
	});
	return class$;
}

$Class* PermissionsEnumerator::class$ = nullptr;

	} // crypto
} // javax