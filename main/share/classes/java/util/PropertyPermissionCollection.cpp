#include <java/util/PropertyPermissionCollection.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/lang/SecurityException.h>
#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <java/util/AbstractMap.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <java/util/PropertyPermission.h>
#include <java/util/PropertyPermissionCollection$1.h>
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
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $Permission = ::java::security::Permission;
using $PermissionCollection = ::java::security::PermissionCollection;
using $AbstractMap = ::java::util::AbstractMap;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $PropertyPermission = ::java::util::PropertyPermission;
using $PropertyPermissionCollection$1 = ::java::util::PropertyPermissionCollection$1;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;

namespace java {
	namespace util {

$ObjectStreamFieldArray* PropertyPermissionCollection::serialPersistentFields = nullptr;

void PropertyPermissionCollection::init$() {
	$PermissionCollection::init$();
	$set(this, perms, $new($ConcurrentHashMap, 32));
	this->all_allowed = false;
}

void PropertyPermissionCollection::add($Permission* permission) {
	$useLocalObjectStack();
	$var($PropertyPermission, pp, nullptr);
	bool var$0 = $instanceOf($PropertyPermission, permission);
	if (var$0) {
		$assign(pp, $cast($PropertyPermission, permission));
		var$0 = true;
	}
	if (!(var$0)) {
		$throwNew($IllegalArgumentException, $$str({"invalid permission: "_s, permission}));
	}
	if (isReadOnly()) {
		$throwNew($SecurityException, "attempt to add a Permission to a readonly PermissionCollection"_s);
	}
	$var($String, propName, $nc(pp)->getName());
	$nc(this->perms)->merge(propName, pp, $$new($PropertyPermissionCollection$1, this, propName));
	if (!this->all_allowed) {
		if ($nc(propName)->equals("*"_s)) {
			this->all_allowed = true;
		}
	}
}

bool PropertyPermissionCollection::implies($Permission* permission) {
	$useLocalObjectStack();
	$var($PropertyPermission, pp, nullptr);
	bool var$0 = $instanceOf($PropertyPermission, permission);
	if (var$0) {
		$assign(pp, $cast($PropertyPermission, permission));
		var$0 = true;
	}
	if (!(var$0)) {
		return false;
	}
	$var($PropertyPermission, x, nullptr);
	int32_t desired = $nc(pp)->getMask();
	int32_t effective = 0;
	if (this->all_allowed) {
		$assign(x, $cast($PropertyPermission, $nc(this->perms)->get("*"_s)));
		if (x != nullptr) {
			effective |= x->getMask();
			if ((effective & desired) == desired) {
				return true;
			}
		}
	}
	$var($String, name, pp->getName());
	$assign(x, $cast($PropertyPermission, $nc(this->perms)->get(name)));
	if (x != nullptr) {
		effective |= x->getMask();
		if ((effective & desired) == desired) {
			return true;
		}
	}
	int32_t last = 0;
	int32_t offset = 0;
	offset = $nc(name)->length() - 1;
	while ((last = name->lastIndexOf(u'.', offset)) != -1) {
		$assign(name, $str({$(name->substring(0, last + 1)), "*"_s}));
		$assign(x, $cast($PropertyPermission, $nc(this->perms)->get(name)));
		if (x != nullptr) {
			effective |= x->getMask();
			if ((effective & desired) == desired) {
				return true;
			}
		}
		offset = last - 1;
	}
	return false;
}

$Enumeration* PropertyPermissionCollection::elements() {
	return $nc(this->perms)->elements();
}

void PropertyPermissionCollection::writeObject($ObjectOutputStream* out) {
	$useLocalObjectStack();
	$var($Hashtable, permissions, $new($Hashtable, $nc(this->perms)->size() * 2));
	permissions->putAll($cast($AbstractMap, this->perms));
	$var($ObjectOutputStream$PutField, pfields, $nc(out)->putFields());
	$nc(pfields)->put("all_allowed"_s, this->all_allowed);
	pfields->put("permissions"_s, permissions);
	out->writeFields();
}

void PropertyPermissionCollection::readObject($ObjectInputStream* in) {
	$useLocalObjectStack();
	$var($ObjectInputStream$GetField, gfields, $nc(in)->readFields());
	this->all_allowed = $nc(gfields)->get("all_allowed"_s, false);
	$var($Hashtable, permissions, $cast($Hashtable, gfields->get("permissions"_s, nullptr)));
	$set(this, perms, $new($ConcurrentHashMap, $nc(permissions)->size() * 2));
	this->perms->putAll(permissions);
}

void PropertyPermissionCollection::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$load($Hashtable);
	$assignStatic(PropertyPermissionCollection::serialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "permissions"_s, $Hashtable::class$),
		$$new($ObjectStreamField, "all_allowed"_s, $Boolean::TYPE)
	}));
}

PropertyPermissionCollection::PropertyPermissionCollection() {
}

$Class* PropertyPermissionCollection::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"perms", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/lang/String;Ljava/util/PropertyPermission;>;", $PRIVATE | $TRANSIENT, $field(PropertyPermissionCollection, perms)},
		{"all_allowed", "Z", nullptr, $PRIVATE, $field(PropertyPermissionCollection, all_allowed)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PropertyPermissionCollection, serialVersionUID)},
		{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PropertyPermissionCollection, serialPersistentFields)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PropertyPermissionCollection, init$, void)},
		{"add", "(Ljava/security/Permission;)V", nullptr, $PUBLIC, $virtualMethod(PropertyPermissionCollection, add, void, $Permission*)},
		{"elements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/security/Permission;>;", $PUBLIC, $virtualMethod(PropertyPermissionCollection, elements, $Enumeration*)},
		{"implies", "(Ljava/security/Permission;)Z", nullptr, $PUBLIC, $virtualMethod(PropertyPermissionCollection, implies, bool, $Permission*)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(PropertyPermissionCollection, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(PropertyPermissionCollection, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.PropertyPermissionCollection$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.PropertyPermissionCollection",
		"java.security.PermissionCollection",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.util.PropertyPermissionCollection$1"
	};
	$loadClass(PropertyPermissionCollection, name, initialize, &classInfo$$, PropertyPermissionCollection::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PropertyPermissionCollection);
	});
	return class$;
}

$Class* PropertyPermissionCollection::class$ = nullptr;

	} // util
} // java