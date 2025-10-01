#include <javax/crypto/CryptoPermissionCollection.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _CryptoPermissionCollection_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CryptoPermissionCollection, serialVersionUID)},
	{"permissions", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/security/Permission;>;", $PRIVATE, $field(CryptoPermissionCollection, permissions)},
	{}
};

$MethodInfo _CryptoPermissionCollection_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CryptoPermissionCollection::*)()>(&CryptoPermissionCollection::init$))},
	{"add", "(Ljava/security/Permission;)V", nullptr, $PUBLIC},
	{"elements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/security/Permission;>;", $PUBLIC},
	{"implies", "(Ljava/security/Permission;)Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CryptoPermissionCollection_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.crypto.CryptoPermissionCollection",
	"java.security.PermissionCollection",
	nullptr,
	_CryptoPermissionCollection_FieldInfo_,
	_CryptoPermissionCollection_MethodInfo_
};

$Object* allocate$CryptoPermissionCollection($Class* clazz) {
	return $of($alloc(CryptoPermissionCollection));
}

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
	$loadClass(CryptoPermissionCollection, name, initialize, &_CryptoPermissionCollection_ClassInfo_, allocate$CryptoPermissionCollection);
	return class$;
}

$Class* CryptoPermissionCollection::class$ = nullptr;

	} // crypto
} // javax