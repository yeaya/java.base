#include <javax/crypto/CryptoPermissionCollection.h>
#include <java/lang/SecurityException.h>
#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <java/util/Enumeration.h>
#include <java/util/Vector.h>
#include <javax/crypto/CryptoPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $Permission = ::java::security::Permission;
using $PermissionCollection = ::java::security::PermissionCollection;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;
using $CryptoPermission = ::javax::crypto::CryptoPermission;

namespace javax {
	namespace crypto {

void CryptoPermissionCollection::init$() {
	$PermissionCollection::init$();
	$set(this, permissions, $new($Vector, 3));
}

void CryptoPermissionCollection::add($Permission* permission) {
	if (isReadOnly()) {
		$throwNew($SecurityException, "attempt to add a Permission to a readonly PermissionCollection"_s);
	}
	if (!($instanceOf($CryptoPermission, permission))) {
		return;
	}
	$nc(this->permissions)->addElement(permission);
}

bool CryptoPermissionCollection::implies($Permission* permission) {
	$useLocalObjectStack();
	if (!($instanceOf($CryptoPermission, permission))) {
		return false;
	}
	$var($CryptoPermission, cp, $cast($CryptoPermission, permission));
	$var($Enumeration, e, $nc(this->permissions)->elements());
	while ($nc(e)->hasMoreElements()) {
		$var($CryptoPermission, x, $cast($CryptoPermission, e->nextElement()));
		if ($nc(x)->implies(cp)) {
			return true;
		}
	}
	return false;
}

$Enumeration* CryptoPermissionCollection::elements() {
	return $nc(this->permissions)->elements();
}

CryptoPermissionCollection::CryptoPermissionCollection() {
}

$Class* CryptoPermissionCollection::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CryptoPermissionCollection, serialVersionUID)},
		{"permissions", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/security/Permission;>;", $PRIVATE, $field(CryptoPermissionCollection, permissions)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CryptoPermissionCollection, init$, void)},
		{"add", "(Ljava/security/Permission;)V", nullptr, $PUBLIC, $virtualMethod(CryptoPermissionCollection, add, void, $Permission*)},
		{"elements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/security/Permission;>;", $PUBLIC, $virtualMethod(CryptoPermissionCollection, elements, $Enumeration*)},
		{"implies", "(Ljava/security/Permission;)Z", nullptr, $PUBLIC, $virtualMethod(CryptoPermissionCollection, implies, bool, $Permission*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.crypto.CryptoPermissionCollection",
		"java.security.PermissionCollection",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CryptoPermissionCollection, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CryptoPermissionCollection);
	});
	return class$;
}

$Class* CryptoPermissionCollection::class$ = nullptr;

	} // crypto
} // javax