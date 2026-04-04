#include <java/security/BasicPermissionCollection.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/lang/SecurityException.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <java/util/AbstractMap.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <jcpp.h>

#undef TYPE

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PermissionCollection = ::java::security::PermissionCollection;
using $AbstractMap = ::java::util::AbstractMap;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;

namespace java {
	namespace security {

$ObjectStreamFieldArray* BasicPermissionCollection::serialPersistentFields = nullptr;

void BasicPermissionCollection::init$($Class* clazz) {
	$PermissionCollection::init$();
	$set(this, perms, $new($ConcurrentHashMap, 11));
	this->all_allowed = false;
	$set(this, permClass, clazz);
}

void BasicPermissionCollection::add($Permission* permission) {
	$useLocalObjectStack();
	$var($BasicPermission, basicPermission, nullptr);
	bool var$0 = $instanceOf($BasicPermission, permission);
	if (var$0) {
		$assign(basicPermission, $cast($BasicPermission, permission));
		var$0 = true;
	}
	if (!(var$0)) {
		$throwNew($IllegalArgumentException, $$str({"invalid permission: "_s, permission}));
	}
	if (isReadOnly()) {
		$throwNew($SecurityException, "attempt to add a Permission to a readonly PermissionCollection"_s);
	}
	if (this->permClass == nullptr) {
		$set(this, permClass, $nc($of(basicPermission))->getClass());
	} else if ($nc($of(basicPermission))->getClass() != this->permClass) {
		$throwNew($IllegalArgumentException, $$str({"invalid permission: "_s, permission}));
	}
	$var($String, canonName, $nc(basicPermission)->getCanonicalName());
	$nc(this->perms)->put(canonName, permission);
	if (!this->all_allowed) {
		if ($nc(canonName)->equals("*"_s)) {
			this->all_allowed = true;
		}
	}
}

bool BasicPermissionCollection::implies($Permission* permission) {
	$useLocalObjectStack();
	$var($BasicPermission, basicPermission, nullptr);
	bool var$0 = $instanceOf($BasicPermission, permission);
	if (var$0) {
		$assign(basicPermission, $cast($BasicPermission, permission));
		var$0 = true;
	}
	if (!(var$0)) {
		return false;
	}
	if ($nc($of(basicPermission))->getClass() != this->permClass) {
		return false;
	}
	if (this->all_allowed) {
		return true;
	}
	$var($String, path, basicPermission->getCanonicalName());
	$var($Permission, x, $cast($Permission, $nc(this->perms)->get(path)));
	if (x != nullptr) {
		return x->implies(permission);
	}
	int32_t last = 0;
	int32_t offset = 0;
	offset = $nc(path)->length() - 1;
	while ((last = path->lastIndexOf(u'.', offset)) != -1) {
		$assign(path, $str({$(path->substring(0, last + 1)), "*"_s}));
		$assign(x, $cast($Permission, $nc(this->perms)->get(path)));
		if (x != nullptr) {
			return x->implies(permission);
		}
		offset = last - 1;
	}
	return false;
}

$Enumeration* BasicPermissionCollection::elements() {
	return $nc(this->perms)->elements();
}

void BasicPermissionCollection::writeObject($ObjectOutputStream* out) {
	$useLocalObjectStack();
	$var($Hashtable, permissions, $new($Hashtable, $nc(this->perms)->size() * 2));
	permissions->putAll($cast($AbstractMap, this->perms));
	$var($ObjectOutputStream$PutField, pfields, $nc(out)->putFields());
	$nc(pfields)->put("all_allowed"_s, this->all_allowed);
	pfields->put("permissions"_s, permissions);
	pfields->put("permClass"_s, this->permClass);
	out->writeFields();
}

void BasicPermissionCollection::readObject($ObjectInputStream* in) {
	$useLocalObjectStack();
	$var($ObjectInputStream$GetField, gfields, $nc(in)->readFields());
	$var($Hashtable, permissions, $cast($Hashtable, $nc(gfields)->get("permissions"_s, nullptr)));
	$set(this, perms, $new($ConcurrentHashMap, $nc(permissions)->size() * 2));
	this->perms->putAll(permissions);
	this->all_allowed = gfields->get("all_allowed"_s, false);
	$set(this, permClass, $cast($Class, gfields->get("permClass"_s, nullptr)));
	if (this->permClass == nullptr) {
		$var($Enumeration, e, permissions->elements());
		if ($nc(e)->hasMoreElements()) {
			$var($Permission, p, $cast($Permission, e->nextElement()));
			$set(this, permClass, $nc($of(p))->getClass());
		}
	}
}

void BasicPermissionCollection::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$load($Hashtable);
	$assignStatic(BasicPermissionCollection::serialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "permissions"_s, $Hashtable::class$),
		$$new($ObjectStreamField, "all_allowed"_s, $Boolean::TYPE),
		$$new($ObjectStreamField, "permClass"_s, $Class::class$)
	}));
}

BasicPermissionCollection::BasicPermissionCollection() {
}

$Class* BasicPermissionCollection::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BasicPermissionCollection, serialVersionUID)},
		{"perms", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/lang/String;Ljava/security/Permission;>;", $PRIVATE | $TRANSIENT, $field(BasicPermissionCollection, perms)},
		{"all_allowed", "Z", nullptr, $PRIVATE, $field(BasicPermissionCollection, all_allowed)},
		{"permClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE, $field(BasicPermissionCollection, permClass)},
		{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicPermissionCollection, serialPersistentFields)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PUBLIC, $method(BasicPermissionCollection, init$, void, $Class*)},
		{"add", "(Ljava/security/Permission;)V", nullptr, $PUBLIC, $virtualMethod(BasicPermissionCollection, add, void, $Permission*)},
		{"elements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/security/Permission;>;", $PUBLIC, $virtualMethod(BasicPermissionCollection, elements, $Enumeration*)},
		{"implies", "(Ljava/security/Permission;)Z", nullptr, $PUBLIC, $virtualMethod(BasicPermissionCollection, implies, bool, $Permission*)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(BasicPermissionCollection, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(BasicPermissionCollection, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.security.BasicPermissionCollection",
		"java.security.PermissionCollection",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BasicPermissionCollection, name, initialize, &classInfo$$, BasicPermissionCollection::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BasicPermissionCollection);
	});
	return class$;
}

$Class* BasicPermissionCollection::class$ = nullptr;

	} // security
} // java