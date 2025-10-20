#include <java/util/PropertyPermissionCollection.h>

#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <java/util/AbstractMap.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <java/util/Map.h>
#include <java/util/PropertyPermission.h>
#include <java/util/PropertyPermissionCollection$1.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/function/BiFunction.h>
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
using $Map = ::java::util::Map;
using $PropertyPermission = ::java::util::PropertyPermission;
using $PropertyPermissionCollection$1 = ::java::util::PropertyPermissionCollection$1;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $BiFunction = ::java::util::function::BiFunction;

namespace java {
	namespace util {

$FieldInfo _PropertyPermissionCollection_FieldInfo_[] = {
	{"perms", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/lang/String;Ljava/util/PropertyPermission;>;", $PRIVATE | $TRANSIENT, $field(PropertyPermissionCollection, perms)},
	{"all_allowed", "Z", nullptr, $PRIVATE, $field(PropertyPermissionCollection, all_allowed)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PropertyPermissionCollection, serialVersionUID)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PropertyPermissionCollection, serialPersistentFields)},
	{}
};

$MethodInfo _PropertyPermissionCollection_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PropertyPermissionCollection::*)()>(&PropertyPermissionCollection::init$))},
	{"add", "(Ljava/security/Permission;)V", nullptr, $PUBLIC},
	{"elements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/security/Permission;>;", $PUBLIC},
	{"implies", "(Ljava/security/Permission;)Z", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(PropertyPermissionCollection::*)($ObjectInputStream*)>(&PropertyPermissionCollection::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(PropertyPermissionCollection::*)($ObjectOutputStream*)>(&PropertyPermissionCollection::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _PropertyPermissionCollection_InnerClassesInfo_[] = {
	{"java.util.PropertyPermissionCollection$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PropertyPermissionCollection_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.PropertyPermissionCollection",
	"java.security.PermissionCollection",
	nullptr,
	_PropertyPermissionCollection_FieldInfo_,
	_PropertyPermissionCollection_MethodInfo_,
	nullptr,
	nullptr,
	_PropertyPermissionCollection_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.PropertyPermissionCollection$1"
};

$Object* allocate$PropertyPermissionCollection($Class* clazz) {
	return $of($alloc(PropertyPermissionCollection));
}


$ObjectStreamFieldArray* PropertyPermissionCollection::serialPersistentFields = nullptr;

void PropertyPermissionCollection::init$() {
	$PermissionCollection::init$();
	$set(this, perms, $new($ConcurrentHashMap, 32));
	this->all_allowed = false;
}

void PropertyPermissionCollection::add($Permission* permission) {
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
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
			if (((int32_t)(effective & (uint32_t)desired)) == desired) {
				return true;
			}
		}
	}
	$var($String, name, pp->getName());
	$assign(x, $cast($PropertyPermission, $nc(this->perms)->get(name)));
	if (x != nullptr) {
		effective |= x->getMask();
		if (((int32_t)(effective & (uint32_t)desired)) == desired) {
			return true;
		}
	}
	int32_t last = 0;
	int32_t offset = 0;
	offset = $nc(name)->length() - 1;
	while ((last = name->lastIndexOf((int32_t)u'.', offset)) != -1) {
		$assign(name, $str({$(name->substring(0, last + 1)), "*"_s}));
		$assign(x, $cast($PropertyPermission, $nc(this->perms)->get(name)));
		if (x != nullptr) {
			effective |= x->getMask();
			if (((int32_t)(effective & (uint32_t)desired)) == desired) {
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
	$useLocalCurrentObjectStackCache();
	$var($Hashtable, permissions, $new($Hashtable, $nc(this->perms)->size() * 2));
	permissions->putAll(static_cast<$Map*>(static_cast<$AbstractMap*>(this->perms)));
	$var($ObjectOutputStream$PutField, pfields, $nc(out)->putFields());
	$nc(pfields)->put("all_allowed"_s, this->all_allowed);
	pfields->put("permissions"_s, $of(permissions));
	out->writeFields();
}

void PropertyPermissionCollection::readObject($ObjectInputStream* in) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, gfields, $nc(in)->readFields());
	this->all_allowed = $nc(gfields)->get("all_allowed"_s, false);
	$var($Hashtable, permissions, $cast($Hashtable, gfields->get("permissions"_s, ($Object*)nullptr)));
	$set(this, perms, $new($ConcurrentHashMap, $nc(permissions)->size() * 2));
	$nc(this->perms)->putAll(permissions);
}

void clinit$PropertyPermissionCollection($Class* class$) {
	$useLocalCurrentObjectStackCache();
		$load($Hashtable);
		$init($Boolean);
	$assignStatic(PropertyPermissionCollection::serialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "permissions"_s, $Hashtable::class$),
		$$new($ObjectStreamField, "all_allowed"_s, $Boolean::TYPE)
	}));
}

PropertyPermissionCollection::PropertyPermissionCollection() {
}

$Class* PropertyPermissionCollection::load$($String* name, bool initialize) {
	$loadClass(PropertyPermissionCollection, name, initialize, &_PropertyPermissionCollection_ClassInfo_, clinit$PropertyPermissionCollection, allocate$PropertyPermissionCollection);
	return class$;
}

$Class* PropertyPermissionCollection::class$ = nullptr;

	} // util
} // java