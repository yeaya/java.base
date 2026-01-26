#include <java/security/UnresolvedPermissionCollection.h>

#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <java/security/UnresolvedPermission.h>
#include <java/security/UnresolvedPermissionCollection$1.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Set.h>
#include <java/util/Vector.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/CopyOnWriteArrayList.h>
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
using $Permission = ::java::security::Permission;
using $PermissionCollection = ::java::security::PermissionCollection;
using $UnresolvedPermission = ::java::security::UnresolvedPermission;
using $UnresolvedPermissionCollection$1 = ::java::security::UnresolvedPermissionCollection$1;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Vector = ::java::util::Vector;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $CopyOnWriteArrayList = ::java::util::concurrent::CopyOnWriteArrayList;
using $BiFunction = ::java::util::function::BiFunction;

namespace java {
	namespace security {

$FieldInfo _UnresolvedPermissionCollection_FieldInfo_[] = {
	{"perms", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/lang/String;Ljava/util/List<Ljava/security/UnresolvedPermission;>;>;", $PRIVATE | $TRANSIENT, $field(UnresolvedPermissionCollection, perms)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnresolvedPermissionCollection, serialVersionUID)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UnresolvedPermissionCollection, serialPersistentFields)},
	{}
};

$MethodInfo _UnresolvedPermissionCollection_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(UnresolvedPermissionCollection, init$, void)},
	{"add", "(Ljava/security/Permission;)V", nullptr, $PUBLIC, $virtualMethod(UnresolvedPermissionCollection, add, void, $Permission*)},
	{"elements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/security/Permission;>;", $PUBLIC, $virtualMethod(UnresolvedPermissionCollection, elements, $Enumeration*)},
	{"getUnresolvedPermissions", "(Ljava/security/Permission;)Ljava/util/List;", "(Ljava/security/Permission;)Ljava/util/List<Ljava/security/UnresolvedPermission;>;", 0, $method(UnresolvedPermissionCollection, getUnresolvedPermissions, $List*, $Permission*)},
	{"implies", "(Ljava/security/Permission;)Z", nullptr, $PUBLIC, $virtualMethod(UnresolvedPermissionCollection, implies, bool, $Permission*)},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(UnresolvedPermissionCollection, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(UnresolvedPermissionCollection, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
	{}
};

$InnerClassInfo _UnresolvedPermissionCollection_InnerClassesInfo_[] = {
	{"java.security.UnresolvedPermissionCollection$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _UnresolvedPermissionCollection_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.security.UnresolvedPermissionCollection",
	"java.security.PermissionCollection",
	nullptr,
	_UnresolvedPermissionCollection_FieldInfo_,
	_UnresolvedPermissionCollection_MethodInfo_,
	nullptr,
	nullptr,
	_UnresolvedPermissionCollection_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.security.UnresolvedPermissionCollection$1"
};

$Object* allocate$UnresolvedPermissionCollection($Class* clazz) {
	return $of($alloc(UnresolvedPermissionCollection));
}

$ObjectStreamFieldArray* UnresolvedPermissionCollection::serialPersistentFields = nullptr;

void UnresolvedPermissionCollection::init$() {
	$PermissionCollection::init$();
	$set(this, perms, $new($ConcurrentHashMap, 11));
}

void UnresolvedPermissionCollection::add($Permission* permission) {
	$useLocalCurrentObjectStackCache();
	$var($UnresolvedPermission, unresolvedPermission, nullptr);
	bool var$0 = $instanceOf($UnresolvedPermission, permission);
	if (var$0) {
		$assign(unresolvedPermission, $cast($UnresolvedPermission, permission));
		var$0 = true;
	}
	if (!(var$0)) {
		$throwNew($IllegalArgumentException, $$str({"invalid permission: "_s, permission}));
	}
	$var($Object, var$1, $of($nc(unresolvedPermission)->getName()));
	$nc(this->perms)->compute(var$1, $$new($UnresolvedPermissionCollection$1, this, unresolvedPermission));
}

$List* UnresolvedPermissionCollection::getUnresolvedPermissions($Permission* p) {
	return $cast($List, $nc(this->perms)->get($($nc($of(p))->getClass()->getName())));
}

bool UnresolvedPermissionCollection::implies($Permission* permission) {
	return false;
}

$Enumeration* UnresolvedPermissionCollection::elements() {
	$useLocalCurrentObjectStackCache();
	$var($List, results, $new($ArrayList));
	{
		$var($Iterator, i$, $nc($($nc(this->perms)->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($List, l, $cast($List, i$->next()));
			{
				results->addAll(l);
			}
		}
	}
	return $Collections::enumeration(results);
}

void UnresolvedPermissionCollection::writeObject($ObjectOutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$var($Hashtable, permissions, $new($Hashtable, $nc(this->perms)->size() * 2));
	$var($Set, set, $nc(this->perms)->entrySet());
	{
		$var($Iterator, i$, $nc(set)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			{
				$var($List, list, $cast($List, $nc(e)->getValue()));
				$var($Vector, vec, $new($Vector, static_cast<$Collection*>(list)));
				permissions->put($cast($String, $(e->getKey())), vec);
			}
		}
	}
	$var($ObjectOutputStream$PutField, pfields, $nc(out)->putFields());
	$nc(pfields)->put("permissions"_s, $of(permissions));
	out->writeFields();
}

void UnresolvedPermissionCollection::readObject($ObjectInputStream* in) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, gfields, $nc(in)->readFields());
	$var($Hashtable, permissions, $cast($Hashtable, $nc(gfields)->get("permissions"_s, ($Object*)nullptr)));
	$set(this, perms, $new($ConcurrentHashMap, $nc(permissions)->size() * 2));
	$var($Set, set, $nc(permissions)->entrySet());
	{
		$var($Iterator, i$, $nc(set)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			{
				$var($Vector, vec, $cast($Vector, $nc(e)->getValue()));
				$var($List, list, $new($CopyOnWriteArrayList, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(vec)))));
				$nc(this->perms)->put($cast($String, $(e->getKey())), list);
			}
		}
	}
}

void clinit$UnresolvedPermissionCollection($Class* class$) {
	$load($Hashtable);
	$assignStatic(UnresolvedPermissionCollection::serialPersistentFields, $new($ObjectStreamFieldArray, {$$new($ObjectStreamField, "permissions"_s, $Hashtable::class$)}));
}

UnresolvedPermissionCollection::UnresolvedPermissionCollection() {
}

$Class* UnresolvedPermissionCollection::load$($String* name, bool initialize) {
	$loadClass(UnresolvedPermissionCollection, name, initialize, &_UnresolvedPermissionCollection_ClassInfo_, clinit$UnresolvedPermissionCollection, allocate$UnresolvedPermissionCollection);
	return class$;
}

$Class* UnresolvedPermissionCollection::class$ = nullptr;

	} // security
} // java