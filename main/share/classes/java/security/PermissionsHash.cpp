#include <java/security/PermissionsHash.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Set.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <jcpp.h>

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Permission = ::java::security::Permission;
using $PermissionCollection = ::java::security::PermissionCollection;
using $AbstractMap = ::java::util::AbstractMap;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;

namespace java {
	namespace security {

$ObjectStreamFieldArray* PermissionsHash::serialPersistentFields = nullptr;

void PermissionsHash::init$() {
	$PermissionCollection::init$();
	$set(this, permsMap, $new($ConcurrentHashMap, 11));
}

void PermissionsHash::add($Permission* permission) {
	$nc(this->permsMap)->put(permission, permission);
}

bool PermissionsHash::implies($Permission* permission) {
	$useLocalObjectStack();
	$var($Permission, p, $cast($Permission, $nc(this->permsMap)->get(permission)));
	if (p == nullptr) {
		$var($Iterator, i$, $$nc($nc(this->permsMap)->values())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Permission, p_, $cast($Permission, i$->next()));
			if ($nc(p_)->implies(permission)) {
				return true;
			}
		}
		return false;
	} else {
		return true;
	}
}

$Enumeration* PermissionsHash::elements() {
	return $nc(this->permsMap)->elements();
}

void PermissionsHash::writeObject($ObjectOutputStream* out) {
	$useLocalObjectStack();
	$var($Hashtable, perms, $new($Hashtable, $nc(this->permsMap)->size() * 2));
	perms->putAll($cast($AbstractMap, this->permsMap));
	$var($ObjectOutputStream$PutField, pfields, $nc(out)->putFields());
	$nc(pfields)->put("perms"_s, perms);
	out->writeFields();
}

void PermissionsHash::readObject($ObjectInputStream* in) {
	$useLocalObjectStack();
	$var($ObjectInputStream$GetField, gfields, $nc(in)->readFields());
	$var($Hashtable, perms, $cast($Hashtable, $nc(gfields)->get("perms"_s, nullptr)));
	$set(this, permsMap, $new($ConcurrentHashMap, $nc(perms)->size() * 2));
	this->permsMap->putAll(perms);
	{
		$var($Iterator, i$, $$nc(perms->entrySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			{
				$var($Permission, k, $cast($Permission, $nc(e)->getKey()));
				$var($Permission, v, $cast($Permission, e->getValue()));
				if (k != v) {
					$throwNew($InvalidObjectException, $$str({"Permission ("_s, k, ") incorrectly mapped to Permission ("_s, v, ")"_s}));
				}
			}
		}
	}
}

void PermissionsHash::clinit$($Class* clazz) {
	$load($Hashtable);
	$assignStatic(PermissionsHash::serialPersistentFields, $new($ObjectStreamFieldArray, {$$new($ObjectStreamField, "perms"_s, $Hashtable::class$)}));
}

PermissionsHash::PermissionsHash() {
}

$Class* PermissionsHash::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"permsMap", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/security/Permission;Ljava/security/Permission;>;", $PRIVATE | $TRANSIENT, $field(PermissionsHash, permsMap)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PermissionsHash, serialVersionUID)},
		{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PermissionsHash, serialPersistentFields)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(PermissionsHash, init$, void)},
		{"add", "(Ljava/security/Permission;)V", nullptr, $PUBLIC, $virtualMethod(PermissionsHash, add, void, $Permission*)},
		{"elements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/security/Permission;>;", $PUBLIC, $virtualMethod(PermissionsHash, elements, $Enumeration*)},
		{"implies", "(Ljava/security/Permission;)Z", nullptr, $PUBLIC, $virtualMethod(PermissionsHash, implies, bool, $Permission*)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(PermissionsHash, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(PermissionsHash, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.security.PermissionsHash",
		"java.security.PermissionCollection",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PermissionsHash, name, initialize, &classInfo$$, PermissionsHash::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PermissionsHash);
	});
	return class$;
}

$Class* PermissionsHash::class$ = nullptr;

	} // security
} // java