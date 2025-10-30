#include <java/security/PermissionsEnumerator.h>

#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Permission = ::java::security::Permission;
using $PermissionCollection = ::java::security::PermissionCollection;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace security {

$FieldInfo _PermissionsEnumerator_FieldInfo_[] = {
	{"perms", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/security/PermissionCollection;>;", $PRIVATE, $field(PermissionsEnumerator, perms)},
	{"permset", "Ljava/util/Enumeration;", "Ljava/util/Enumeration<Ljava/security/Permission;>;", $PRIVATE, $field(PermissionsEnumerator, permset)},
	{}
};

$MethodInfo _PermissionsEnumerator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Iterator;)V", "(Ljava/util/Iterator<Ljava/security/PermissionCollection;>;)V", 0, $method(static_cast<void(PermissionsEnumerator::*)($Iterator*)>(&PermissionsEnumerator::init$))},
	{"getNextEnumWithMore", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/security/Permission;>;", $PRIVATE, $method(static_cast<$Enumeration*(PermissionsEnumerator::*)()>(&PermissionsEnumerator::getNextEnumWithMore))},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"nextElement", "()Ljava/security/Permission;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PermissionsEnumerator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.security.PermissionsEnumerator",
	"java.lang.Object",
	"java.util.Enumeration",
	_PermissionsEnumerator_FieldInfo_,
	_PermissionsEnumerator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/security/Permission;>;"
};

$Object* allocate$PermissionsEnumerator($Class* clazz) {
	return $of($alloc(PermissionsEnumerator));
}

void PermissionsEnumerator::init$($Iterator* e) {
	$set(this, perms, e);
	$set(this, permset, getNextEnumWithMore());
}

bool PermissionsEnumerator::hasMoreElements() {
	if (this->permset == nullptr) {
		return false;
	}
	if ($nc(this->permset)->hasMoreElements()) {
		return true;
	}
	$set(this, permset, getNextEnumWithMore());
	return (this->permset != nullptr);
}

$Object* PermissionsEnumerator::nextElement() {
	if (hasMoreElements()) {
		return $of($cast($Permission, $nc(this->permset)->nextElement()));
	} else {
		$throwNew($NoSuchElementException, "PermissionsEnumerator"_s);
	}
}

$Enumeration* PermissionsEnumerator::getNextEnumWithMore() {
	$useLocalCurrentObjectStackCache();
	while ($nc(this->perms)->hasNext()) {
		$var($PermissionCollection, pc, $cast($PermissionCollection, $nc(this->perms)->next()));
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

	} // security
} // java