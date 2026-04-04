#include <java/net/SocketPermissionCollection.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/lang/SecurityException.h>
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
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $Vector = ::java::util::Vector;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;

namespace java {
	namespace net {

$ObjectStreamFieldArray* SocketPermissionCollection::serialPersistentFields = nullptr;

void SocketPermissionCollection::init$() {
	$PermissionCollection::init$();
	$set(this, perms, $cast($AbstractMap, $new($ConcurrentHashMap)));
}

void SocketPermissionCollection::add($Permission* permission) {
	$useLocalObjectStack();
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
	$var($Object, var$1, $nc(sp)->getName());
	$nc(this->perms)->merge(var$1, sp, $$new($SocketPermissionCollection$1, this, sp));
}

bool SocketPermissionCollection::implies($Permission* permission) {
	$useLocalObjectStack();
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
		bool var$1 = (needed & hit->getMask()) != 0;
		if (var$1 && hit->impliesIgnoreMask(np)) {
			effective |= hit->getMask();
			if ((effective & desired) == desired) {
				return true;
			}
			needed = (desired & ~effective);
		}
	}
	{
		$var($Iterator, i$, $$nc(this->perms->values())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SocketPermission, x, $cast($SocketPermission, i$->next()));
			{
				bool var$2 = (needed & $nc(x)->getMask()) != 0;
				if (var$2 && x->impliesIgnoreMask(np)) {
					effective |= x->getMask();
					if ((effective & desired) == desired) {
						return true;
					}
					needed = (desired & ~effective);
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
	$useLocalObjectStack();
	$var($Vector, permissions, $new($Vector, $($nc(this->perms)->values())));
	$var($ObjectOutputStream$PutField, pfields, $nc(out)->putFields());
	$nc(pfields)->put("permissions"_s, permissions);
	out->writeFields();
}

void SocketPermissionCollection::readObject($ObjectInputStream* in) {
	$useLocalObjectStack();
	$var($ObjectInputStream$GetField, gfields, $nc(in)->readFields());
	$var($Vector, permissions, $cast($Vector, $nc(gfields)->get("permissions"_s, nullptr)));
	$set(this, perms, $cast($AbstractMap, $new($ConcurrentHashMap, $nc(permissions)->size())));
	{
		$var($Iterator, i$, permissions->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SocketPermission, sp, $cast($SocketPermission, i$->next()));
			{
				this->perms->put($($nc(sp)->getName()), sp);
			}
		}
	}
}

void SocketPermissionCollection::clinit$($Class* clazz) {
	$load($Vector);
	$assignStatic(SocketPermissionCollection::serialPersistentFields, $new($ObjectStreamFieldArray, {$$new($ObjectStreamField, "permissions"_s, $Vector::class$)}));
}

SocketPermissionCollection::SocketPermissionCollection() {
}

$Class* SocketPermissionCollection::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"perms", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/net/SocketPermission;>;", $PRIVATE | $TRANSIENT, $field(SocketPermissionCollection, perms)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SocketPermissionCollection, serialVersionUID)},
		{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SocketPermissionCollection, serialPersistentFields)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SocketPermissionCollection, init$, void)},
		{"add", "(Ljava/security/Permission;)V", nullptr, $PUBLIC, $virtualMethod(SocketPermissionCollection, add, void, $Permission*)},
		{"elements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/security/Permission;>;", $PUBLIC, $virtualMethod(SocketPermissionCollection, elements, $Enumeration*)},
		{"implies", "(Ljava/security/Permission;)Z", nullptr, $PUBLIC, $virtualMethod(SocketPermissionCollection, implies, bool, $Permission*)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(SocketPermissionCollection, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(SocketPermissionCollection, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.SocketPermissionCollection$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.net.SocketPermissionCollection",
		"java.security.PermissionCollection",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.net.SocketPermissionCollection$1"
	};
	$loadClass(SocketPermissionCollection, name, initialize, &classInfo$$, SocketPermissionCollection::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SocketPermissionCollection);
	});
	return class$;
}

$Class* SocketPermissionCollection::class$ = nullptr;

	} // net
} // java