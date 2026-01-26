#include <java/security/Permissions.h>

#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/lang/SecurityException.h>
#include <java/security/AllPermission.h>
#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <java/security/PermissionsEnumerator.h>
#include <java/security/PermissionsHash.h>
#include <java/security/UnresolvedPermission.h>
#include <java/security/UnresolvedPermissionCollection.h>
#include <java/security/cert/Certificate.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <jcpp.h>

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $CertificateArray = $Array<::java::security::cert::Certificate>;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $AllPermission = ::java::security::AllPermission;
using $Permission = ::java::security::Permission;
using $PermissionCollection = ::java::security::PermissionCollection;
using $PermissionsEnumerator = ::java::security::PermissionsEnumerator;
using $PermissionsHash = ::java::security::PermissionsHash;
using $UnresolvedPermission = ::java::security::UnresolvedPermission;
using $UnresolvedPermissionCollection = ::java::security::UnresolvedPermissionCollection;
using $Certificate = ::java::security::cert::Certificate;
using $AbstractMap = ::java::util::AbstractMap;
using $Collection = ::java::util::Collection;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;

namespace java {
	namespace security {

$FieldInfo _Permissions_FieldInfo_[] = {
	{"permsMap", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/lang/Class<*>;Ljava/security/PermissionCollection;>;", $PRIVATE | $TRANSIENT, $field(Permissions, permsMap)},
	{"hasUnresolved", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(Permissions, hasUnresolved)},
	{"allPermission", "Ljava/security/PermissionCollection;", nullptr, 0, $field(Permissions, allPermission)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Permissions, serialVersionUID)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Permissions, serialPersistentFields)},
	{}
};

$MethodInfo _Permissions_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Permissions, init$, void)},
	{"add", "(Ljava/security/Permission;)V", nullptr, $PUBLIC, $virtualMethod(Permissions, add, void, $Permission*)},
	{"createPermissionCollection", "(Ljava/security/Permission;Z)Ljava/security/PermissionCollection;", nullptr, $PRIVATE, $method(Permissions, createPermissionCollection, $PermissionCollection*, $Permission*, bool)},
	{"elements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/security/Permission;>;", $PUBLIC, $virtualMethod(Permissions, elements, $Enumeration*)},
	{"getPermissionCollection", "(Ljava/security/Permission;Z)Ljava/security/PermissionCollection;", nullptr, $PRIVATE, $method(Permissions, getPermissionCollection, $PermissionCollection*, $Permission*, bool)},
	{"getUnresolvedPermissions", "(Ljava/security/Permission;)Ljava/security/PermissionCollection;", nullptr, $PRIVATE, $method(Permissions, getUnresolvedPermissions, $PermissionCollection*, $Permission*)},
	{"implies", "(Ljava/security/Permission;)Z", nullptr, $PUBLIC, $virtualMethod(Permissions, implies, bool, $Permission*)},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(Permissions, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(Permissions, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
	{}
};

$ClassInfo _Permissions_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.security.Permissions",
	"java.security.PermissionCollection",
	nullptr,
	_Permissions_FieldInfo_,
	_Permissions_MethodInfo_
};

$Object* allocate$Permissions($Class* clazz) {
	return $of($alloc(Permissions));
}

$ObjectStreamFieldArray* Permissions::serialPersistentFields = nullptr;

void Permissions::init$() {
	$PermissionCollection::init$();
	this->hasUnresolved = false;
	$set(this, permsMap, $new($ConcurrentHashMap, 11));
	$set(this, allPermission, nullptr);
}

void Permissions::add($Permission* permission) {
	if (isReadOnly()) {
		$throwNew($SecurityException, "attempt to add a Permission to a readonly Permissions object"_s);
	}
	$var($PermissionCollection, pc, getPermissionCollection(permission, true));
	$nc(pc)->add(permission);
	if ($instanceOf($AllPermission, permission)) {
		$set(this, allPermission, pc);
	}
	if ($instanceOf($UnresolvedPermission, permission)) {
		this->hasUnresolved = true;
	}
}

bool Permissions::implies($Permission* permission) {
	if (this->allPermission != nullptr) {
		return true;
	} else {
		$var($PermissionCollection, pc, getPermissionCollection(permission, false));
		if (pc != nullptr) {
			return pc->implies(permission);
		} else {
			return false;
		}
	}
}

$Enumeration* Permissions::elements() {
	$useLocalCurrentObjectStackCache();
	return $new($PermissionsEnumerator, $($nc($($nc(this->permsMap)->values()))->iterator()));
}

$PermissionCollection* Permissions::getPermissionCollection($Permission* p, bool createEmpty) {
	$var($PermissionCollection, pc, $cast($PermissionCollection, $nc(this->permsMap)->get($nc($of(p))->getClass())));
	if ((!this->hasUnresolved && !createEmpty) || pc != nullptr) {
		return pc;
	}
	return createPermissionCollection(p, createEmpty);
}

$PermissionCollection* Permissions::createPermissionCollection($Permission* p, bool createEmpty) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->permsMap) {
		$Class* c = $nc($of(p))->getClass();
		$var($PermissionCollection, pc, $cast($PermissionCollection, $nc(this->permsMap)->get(c)));
		if (pc != nullptr) {
			return pc;
		}
		$assign(pc, this->hasUnresolved ? getUnresolvedPermissions(p) : ($PermissionCollection*)nullptr);
		if (pc == nullptr && createEmpty) {
			$assign(pc, p->newPermissionCollection());
			if (pc == nullptr) {
				$assign(pc, $new($PermissionsHash));
			}
		}
		if (pc != nullptr) {
			$var($PermissionCollection, oldPc, $cast($PermissionCollection, $nc(this->permsMap)->putIfAbsent(c, pc)));
			if (oldPc != nullptr) {
				$assign(pc, oldPc);
			}
		}
		return pc;
	}
}

$PermissionCollection* Permissions::getUnresolvedPermissions($Permission* p) {
	$useLocalCurrentObjectStackCache();
	$load($UnresolvedPermission);
	$var($UnresolvedPermissionCollection, uc, $cast($UnresolvedPermissionCollection, $nc(this->permsMap)->get($UnresolvedPermission::class$)));
	if (uc == nullptr) {
		return nullptr;
	}
	$var($List, unresolvedPerms, $nc(uc)->getUnresolvedPermissions(p));
	if (unresolvedPerms == nullptr) {
		return nullptr;
	}
	$var($CertificateArray, certs, nullptr);
	$var($ObjectArray, signers, $nc($of(p))->getClass()->getSigners());
	int32_t n = 0;
	if (signers != nullptr) {
		for (int32_t j = 0; j < signers->length; ++j) {
			if ($instanceOf($Certificate, signers->get(j))) {
				++n;
			}
		}
		$assign(certs, $new($CertificateArray, n));
		n = 0;
		for (int32_t j = 0; j < signers->length; ++j) {
			if ($instanceOf($Certificate, signers->get(j))) {
				certs->set(n++, $cast($Certificate, signers->get(j)));
			}
		}
	}
	$var($PermissionCollection, pc, nullptr);
	$synchronized(unresolvedPerms) {
		int32_t len = $nc(unresolvedPerms)->size();
		for (int32_t i = 0; i < len; ++i) {
			$var($UnresolvedPermission, up, $cast($UnresolvedPermission, unresolvedPerms->get(i)));
			$var($Permission, perm, $nc(up)->resolve(p, certs));
			if (perm != nullptr) {
				if (pc == nullptr) {
					$assign(pc, p->newPermissionCollection());
					if (pc == nullptr) {
						$assign(pc, $new($PermissionsHash));
					}
				}
				$nc(pc)->add(perm);
			}
		}
	}
	return pc;
}

void Permissions::writeObject($ObjectOutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$var($Hashtable, perms, $new($Hashtable, $nc(this->permsMap)->size() * 2));
	perms->putAll(static_cast<$Map*>(static_cast<$AbstractMap*>(this->permsMap)));
	$var($ObjectOutputStream$PutField, pfields, $nc(out)->putFields());
	$nc(pfields)->put("allPermission"_s, $of(this->allPermission));
	pfields->put("perms"_s, $of(perms));
	out->writeFields();
}

void Permissions::readObject($ObjectInputStream* in) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, gfields, $nc(in)->readFields());
	$set(this, allPermission, $cast($PermissionCollection, $nc(gfields)->get("allPermission"_s, ($Object*)nullptr)));
	$var($Hashtable, perms, $cast($Hashtable, gfields->get("perms"_s, ($Object*)nullptr)));
	$set(this, permsMap, $new($ConcurrentHashMap, $nc(perms)->size() * 2));
	$nc(this->permsMap)->putAll(perms);
	{
		$var($Iterator, i$, $nc($($nc(perms)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			{
				$Class* k = $cast($Class, $nc(e)->getKey());
				$var($PermissionCollection, v, $cast($PermissionCollection, e->getValue()));
				$var($Enumeration, en, $nc(v)->elements());
				while ($nc(en)->hasMoreElements()) {
					$var($Permission, p, $cast($Permission, en->nextElement()));
					if (!$nc($of(k))->equals($nc($of(p))->getClass())) {
						$var($String, var$0, $$str({"Permission with class "_s, k, " incorrectly mapped to PermissionCollection containing Permission with "_s}));
						$throwNew($InvalidObjectException, $$concat(var$0, $($nc($of(p))->getClass())));
					}
				}
			}
		}
	}
	$load($UnresolvedPermission);
	$var($UnresolvedPermissionCollection, uc, $cast($UnresolvedPermissionCollection, $nc(this->permsMap)->get($UnresolvedPermission::class$)));
	this->hasUnresolved = (uc != nullptr && $nc($(uc->elements()))->hasMoreElements());
}

void clinit$Permissions($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$load($Hashtable);
	$load($PermissionCollection);
	$assignStatic(Permissions::serialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "perms"_s, $Hashtable::class$),
		$$new($ObjectStreamField, "allPermission"_s, $PermissionCollection::class$)
	}));
}

Permissions::Permissions() {
}

$Class* Permissions::load$($String* name, bool initialize) {
	$loadClass(Permissions, name, initialize, &_Permissions_ClassInfo_, clinit$Permissions, allocate$Permissions);
	return class$;
}

$Class* Permissions::class$ = nullptr;

	} // security
} // java