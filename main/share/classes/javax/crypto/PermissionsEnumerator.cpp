#include <javax/crypto/PermissionsEnumerator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _PermissionsEnumerator_FieldInfo_[] = {
	{"perms", "Ljava/util/Enumeration;", "Ljava/util/Enumeration<Ljava/security/PermissionCollection;>;", $PRIVATE | $FINAL, $field(PermissionsEnumerator, perms)},
	{"permset", "Ljava/util/Enumeration;", "Ljava/util/Enumeration<Ljava/security/Permission;>;", $PRIVATE, $field(PermissionsEnumerator, permset)},
	{}
};

$MethodInfo _PermissionsEnumerator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Enumeration;)V", "(Ljava/util/Enumeration<Ljava/security/PermissionCollection;>;)V", 0, $method(static_cast<void(PermissionsEnumerator::*)($Enumeration*)>(&PermissionsEnumerator::init$))},
	{"getNextEnumWithMore", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/security/Permission;>;", $PRIVATE, $method(static_cast<$Enumeration*(PermissionsEnumerator::*)()>(&PermissionsEnumerator::getNextEnumWithMore))},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"nextElement", "()Ljava/security/Permission;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$ClassInfo _PermissionsEnumerator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.crypto.PermissionsEnumerator",
	"java.lang.Object",
	"java.util.Enumeration",
	_PermissionsEnumerator_FieldInfo_,
	_PermissionsEnumerator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/security/Permission;>;"
};

$Object* allocate$PermissionsEnumerator($Class* clazz) {
	return $of($alloc(PermissionsEnumerator));
}

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
	while ($nc(this->perms)->hasMoreElements()) {
		$var($PermissionCollection, pc, $cast($PermissionCollection, $nc(this->perms)->nextElement()));
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
	$loadClass(PermissionsEnumerator, name, initialize, &_PermissionsEnumerator_ClassInfo_, allocate$PermissionsEnumerator);
	return class$;
}

$Class* PermissionsEnumerator::class$ = nullptr;

	} // crypto
} // javax