#include <javax/crypto/CryptoAllPermissionCollection.h>
#include <java/lang/SecurityException.h>
#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <java/util/Enumeration.h>
#include <java/util/Vector.h>
#include <javax/crypto/CryptoAllPermission.h>
#include <javax/crypto/CryptoPermission.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $Permission = ::java::security::Permission;
using $PermissionCollection = ::java::security::PermissionCollection;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;
using $CryptoAllPermission = ::javax::crypto::CryptoAllPermission;
using $CryptoPermission = ::javax::crypto::CryptoPermission;

namespace javax {
	namespace crypto {

void CryptoAllPermissionCollection::init$() {
	$PermissionCollection::init$();
	this->all_allowed = false;
}

void CryptoAllPermissionCollection::add($Permission* permission) {
	if (isReadOnly()) {
		$throwNew($SecurityException, "attempt to add a Permission to a readonly PermissionCollection"_s);
	}
	$init($CryptoAllPermission);
	if (!$equals(permission, $CryptoAllPermission::INSTANCE)) {
		return;
	}
	this->all_allowed = true;
}

bool CryptoAllPermissionCollection::implies($Permission* permission) {
	if (!($instanceOf($CryptoPermission, permission))) {
		return false;
	}
	return this->all_allowed;
}

$Enumeration* CryptoAllPermissionCollection::elements() {
	$var($Vector, v, $new($Vector, 1));
	if (this->all_allowed) {
		$init($CryptoAllPermission);
		v->add($CryptoAllPermission::INSTANCE);
	}
	return v->elements();
}

CryptoAllPermissionCollection::CryptoAllPermissionCollection() {
}

$Class* CryptoAllPermissionCollection::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CryptoAllPermissionCollection, serialVersionUID)},
		{"all_allowed", "Z", nullptr, $PRIVATE, $field(CryptoAllPermissionCollection, all_allowed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CryptoAllPermissionCollection, init$, void)},
		{"add", "(Ljava/security/Permission;)V", nullptr, $PUBLIC, $virtualMethod(CryptoAllPermissionCollection, add, void, $Permission*)},
		{"elements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/security/Permission;>;", $PUBLIC, $virtualMethod(CryptoAllPermissionCollection, elements, $Enumeration*)},
		{"implies", "(Ljava/security/Permission;)Z", nullptr, $PUBLIC, $virtualMethod(CryptoAllPermissionCollection, implies, bool, $Permission*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.crypto.CryptoAllPermissionCollection",
		"java.security.PermissionCollection",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CryptoAllPermissionCollection, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CryptoAllPermissionCollection);
	});
	return class$;
}

$Class* CryptoAllPermissionCollection::class$ = nullptr;

	} // crypto
} // javax