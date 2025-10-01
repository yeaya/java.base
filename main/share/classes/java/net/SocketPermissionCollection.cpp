#include <java/net/SocketPermissionCollection.h>

#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/lang/Array.h>
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
#include <java/net/SocketPermission.h>
#include <java/net/SocketPermissionCollection$1.h>
#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Vector.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/function/BiFunction.h>
#include <jcpp.h>

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $SocketPermission = ::java::net::SocketPermission;
using $SocketPermissionCollection$1 = ::java::net::SocketPermissionCollection$1;
using $Permission = ::java::security::Permission;
using $PermissionCollection = ::java::security::PermissionCollection;
using $AbstractMap = ::java::util::AbstractMap;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Vector = ::java::util::Vector;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $BiFunction = ::java::util::function::BiFunction;

namespace java {
	namespace net {

$FieldInfo _SocketPermissionCollection_FieldInfo_[] = {
	{"perms", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/net/SocketPermission;>;", $PRIVATE | $TRANSIENT, $field(SocketPermissionCollection, perms)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SocketPermissionCollection, serialVersionUID)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SocketPermissionCollection, serialPersistentFields)},
	{}
};

$MethodInfo _SocketPermissionCollection_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SocketPermissionCollection::*)()>(&SocketPermissionCollection::init$))},
	{"add", "(Ljava/security/Permission;)V", nullptr, $PUBLIC},
	{"elements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/security/Permission;>;", $PUBLIC},
	{"implies", "(Ljava/security/Permission;)Z", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(SocketPermissionCollection::*)($ObjectInputStream*)>(&SocketPermissionCollection::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(SocketPermissionCollection::*)($ObjectOutputStream*)>(&SocketPermissionCollection::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _SocketPermissionCollection_InnerClassesInfo_[] = {
	{"java.net.SocketPermissionCollection$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SocketPermissionCollection_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.net.SocketPermissionCollection",
	"java.security.PermissionCollection",
	nullptr,
	_SocketPermissionCollection_FieldInfo_,
	_SocketPermissionCollection_MethodInfo_,
	nullptr,
	nullptr,
	_SocketPermissionCollection_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.net.SocketPermissionCollection$1"
};

$Object* allocate$SocketPermissionCollection($Class* clazz) {
	return $of($alloc(SocketPermissionCollection));
}


$ObjectStreamFieldArray* SocketPermissionCollection::serialPersistentFields = nullptr;

void SocketPermissionCollection::init$() {
	$PermissionCollection::init$();
	$set(this, perms, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
}

void SocketPermissionCollection::add($Permission* permission) {
	$var($SocketPermission, sp, nullptr);
	bool var$0 = $instanceOf($SocketPermission, permission);
	if (var$0) {
		$assign(sp, $cast($SocketPermission, permission));
		var$0 = true;
	}
	if (!(var$0)) {
		$throwNew($IllegalArgumentException, $$str({"invalid permission: "_s, permission}));
	}
	if (isReadOnly()) {
		$throwNew($SecurityException, "attempt to add a Permission to a readonly PermissionCollection"_s);
	}
	$var($Object, var$1, $of($nc(sp)->getName()));
	$var($Object, var$2, $of(sp));
	$nc(this->perms)->merge(var$1, var$2, $$new($SocketPermissionCollection$1, this, sp));
}

bool SocketPermissionCollection::implies($Permission* permission) {
	$var($SocketPermission, np, nullptr);
	bool var$0 = $instanceOf($SocketPermission, permission);
	if (var$0) {
		$assign(np, $cast($SocketPermission, permission));
		var$0 = true;
	}
	if (!(var$0)) {
		return false;
	}
	int32_t desired = $nc(np)->getMask();
	int32_t effective = 0;
	int32_t needed = desired;
	$var($SocketPermission, hit, $cast($SocketPermission, $nc(this->perms)->get($(np->getName()))));
	if (hit != nullptr) {
		bool var$1 = (((int32_t)(needed & (uint32_t)hit->getMask())) != 0);
		if (var$1 && hit->impliesIgnoreMask(np)) {
			effective |= hit->getMask();
			if (((int32_t)(effective & (uint32_t)desired)) == desired) {
				return true;
			}
			needed = ((int32_t)(desired & (uint32_t)~effective));
		}
	}
	{
		$var($Iterator, i$, $nc($($nc(this->perms)->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SocketPermission, x, $cast($SocketPermission, i$->next()));
			{
				bool var$2 = (((int32_t)(needed & (uint32_t)$nc(x)->getMask())) != 0);
				if (var$2 && x->impliesIgnoreMask(np)) {
					effective |= x->getMask();
					if (((int32_t)(effective & (uint32_t)desired)) == desired) {
						return true;
					}
					needed = ((int32_t)(desired & (uint32_t)~effective));
				}
			}
		}
	}
	return false;
}

$Enumeration* SocketPermissionCollection::elements() {
	return $Collections::enumeration($($nc(this->perms)->values()));
}

void SocketPermissionCollection::writeObject($ObjectOutputStream* out) {
	$var($Vector, permissions, $new($Vector, $($nc(this->perms)->values())));
	$var($ObjectOutputStream$PutField, pfields, $nc(out)->putFields());
	$nc(pfields)->put("permissions"_s, $of(permissions));
	out->writeFields();
}

void SocketPermissionCollection::readObject($ObjectInputStream* in) {
	$var($ObjectInputStream$GetField, gfields, $nc(in)->readFields());
	$var($Vector, permissions, $cast($Vector, $nc(gfields)->get("permissions"_s, ($Object*)nullptr)));
	$set(this, perms, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap, $nc(permissions)->size()))));
	{
		$var($Iterator, i$, $nc(permissions)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SocketPermission, sp, $cast($SocketPermission, i$->next()));
			{
				$nc(this->perms)->put($($nc(sp)->getName()), sp);
			}
		}
	}
}

void clinit$SocketPermissionCollection($Class* class$) {
	$load($Vector);
	$assignStatic(SocketPermissionCollection::serialPersistentFields, $new($ObjectStreamFieldArray, {$$new($ObjectStreamField, "permissions"_s, $Vector::class$)}));
}

SocketPermissionCollection::SocketPermissionCollection() {
}

$Class* SocketPermissionCollection::load$($String* name, bool initialize) {
	$loadClass(SocketPermissionCollection, name, initialize, &_SocketPermissionCollection_ClassInfo_, clinit$SocketPermissionCollection, allocate$SocketPermissionCollection);
	return class$;
}

$Class* SocketPermissionCollection::class$ = nullptr;

	} // net
} // java