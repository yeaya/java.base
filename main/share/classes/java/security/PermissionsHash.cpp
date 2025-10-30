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
#include <java/util/Map.h>
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
using $Collection = ::java::util::Collection;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;

namespace java {
	namespace security {

$FieldInfo _PermissionsHash_FieldInfo_[] = {
	{"permsMap", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/security/Permission;Ljava/security/Permission;>;", $PRIVATE | $TRANSIENT, $field(PermissionsHash, permsMap)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PermissionsHash, serialVersionUID)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PermissionsHash, serialPersistentFields)},
	{}
};

$MethodInfo _PermissionsHash_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(PermissionsHash::*)()>(&PermissionsHash::init$))},
	{"add", "(Ljava/security/Permission;)V", nullptr, $PUBLIC},
	{"elements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/security/Permission;>;", $PUBLIC},
	{"implies", "(Ljava/security/Permission;)Z", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(PermissionsHash::*)($ObjectInputStream*)>(&PermissionsHash::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(PermissionsHash::*)($ObjectOutputStream*)>(&PermissionsHash::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _PermissionsHash_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.security.PermissionsHash",
	"java.security.PermissionCollection",
	nullptr,
	_PermissionsHash_FieldInfo_,
	_PermissionsHash_MethodInfo_
};

$Object* allocate$PermissionsHash($Class* clazz) {
	return $of($alloc(PermissionsHash));
}

$ObjectStreamFieldArray* PermissionsHash::serialPersistentFields = nullptr;

void PermissionsHash::init$() {
	$PermissionCollection::init$();
	$set(this, permsMap, $new($ConcurrentHashMap, 11));
}

void PermissionsHash::add($Permission* permission) {
	$nc(this->permsMap)->put(permission, permission);
}

bool PermissionsHash::implies($Permission* permission) {
	$useLocalCurrentObjectStackCache();
	$var($Permission, p, $cast($Permission, $nc(this->permsMap)->get(permission)));
	if (p == nullptr) {
		{
			$var($Iterator, i$, $nc($($nc(this->permsMap)->values()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Permission, p_, $cast($Permission, i$->next()));
				{
					if ($nc(p_)->implies(permission)) {
						return true;
					}
				}
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
	$useLocalCurrentObjectStackCache();
	$var($Hashtable, perms, $new($Hashtable, $nc(this->permsMap)->size() * 2));
	perms->putAll(static_cast<$Map*>(static_cast<$AbstractMap*>(this->permsMap)));
	$var($ObjectOutputStream$PutField, pfields, $nc(out)->putFields());
	$nc(pfields)->put("perms"_s, $of(perms));
	out->writeFields();
}

void PermissionsHash::readObject($ObjectInputStream* in) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, gfields, $nc(in)->readFields());
	$var($Hashtable, perms, $cast($Hashtable, $nc(gfields)->get("perms"_s, ($Object*)nullptr)));
	$set(this, permsMap, $new($ConcurrentHashMap, $nc(perms)->size() * 2));
	$nc(this->permsMap)->putAll(perms);
	{
		$var($Iterator, i$, $nc($($nc(perms)->entrySet()))->iterator());
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

void clinit$PermissionsHash($Class* class$) {
	$load($Hashtable);
	$assignStatic(PermissionsHash::serialPersistentFields, $new($ObjectStreamFieldArray, {$$new($ObjectStreamField, "perms"_s, $Hashtable::class$)}));
}

PermissionsHash::PermissionsHash() {
}

$Class* PermissionsHash::load$($String* name, bool initialize) {
	$loadClass(PermissionsHash, name, initialize, &_PermissionsHash_ClassInfo_, clinit$PermissionsHash, allocate$PermissionsHash);
	return class$;
}

$Class* PermissionsHash::class$ = nullptr;

	} // security
} // java