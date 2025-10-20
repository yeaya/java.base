#include <java/io/FilePermissionCollection.h>

#include <java/io/FilePermission.h>
#include <java/io/FilePermissionCollection$1.h>
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
#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <java/util/Collection.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/Vector.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/function/BiFunction.h>
#include <jcpp.h>

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $FilePermission = ::java::io::FilePermission;
using $FilePermissionCollection$1 = ::java::io::FilePermissionCollection$1;
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
using $Permission = ::java::security::Permission;
using $PermissionCollection = ::java::security::PermissionCollection;
using $Collection = ::java::util::Collection;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $Vector = ::java::util::Vector;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $BiFunction = ::java::util::function::BiFunction;

namespace java {
	namespace io {

$FieldInfo _FilePermissionCollection_FieldInfo_[] = {
	{"perms", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/lang/String;Ljava/security/Permission;>;", $PRIVATE | $TRANSIENT, $field(FilePermissionCollection, perms)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FilePermissionCollection, serialVersionUID)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FilePermissionCollection, serialPersistentFields)},
	{}
};

$MethodInfo _FilePermissionCollection_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FilePermissionCollection::*)()>(&FilePermissionCollection::init$))},
	{"add", "(Ljava/security/Permission;)V", nullptr, $PUBLIC},
	{"elements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/security/Permission;>;", $PUBLIC},
	{"implies", "(Ljava/security/Permission;)Z", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(FilePermissionCollection::*)($ObjectInputStream*)>(&FilePermissionCollection::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(FilePermissionCollection::*)($ObjectOutputStream*)>(&FilePermissionCollection::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _FilePermissionCollection_InnerClassesInfo_[] = {
	{"java.io.FilePermissionCollection$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FilePermissionCollection_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.io.FilePermissionCollection",
	"java.security.PermissionCollection",
	nullptr,
	_FilePermissionCollection_FieldInfo_,
	_FilePermissionCollection_MethodInfo_,
	nullptr,
	nullptr,
	_FilePermissionCollection_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.io.FilePermissionCollection$1"
};

$Object* allocate$FilePermissionCollection($Class* clazz) {
	return $of($alloc(FilePermissionCollection));
}


$ObjectStreamFieldArray* FilePermissionCollection::serialPersistentFields = nullptr;

void FilePermissionCollection::init$() {
	$PermissionCollection::init$();
	$set(this, perms, $new($ConcurrentHashMap));
}

void FilePermissionCollection::add($Permission* permission) {
	$useLocalCurrentObjectStackCache();
	$var($FilePermission, fp, nullptr);
	bool var$0 = $instanceOf($FilePermission, permission);
	if (var$0) {
		$assign(fp, $cast($FilePermission, permission));
		var$0 = true;
	}
	if (!(var$0)) {
		$throwNew($IllegalArgumentException, $$str({"invalid permission: "_s, permission}));
	}
	if (isReadOnly()) {
		$throwNew($SecurityException, "attempt to add a Permission to a readonly PermissionCollection"_s);
	}
	$var($Object, var$1, $of($nc(fp)->getName()));
	$var($Object, var$2, $of(fp));
	$nc(this->perms)->merge(var$1, var$2, $$new($FilePermissionCollection$1, this));
}

bool FilePermissionCollection::implies($Permission* permission) {
	$useLocalCurrentObjectStackCache();
	$var($FilePermission, fperm, nullptr);
	bool var$0 = $instanceOf($FilePermission, permission);
	if (var$0) {
		$assign(fperm, $cast($FilePermission, permission));
		var$0 = true;
	}
	if (!(var$0)) {
		return false;
	}
	int32_t desired = $nc(fperm)->getMask();
	int32_t effective = 0;
	int32_t needed = desired;
	{
		$var($Iterator, i$, $nc($($nc(this->perms)->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Permission, perm, $cast($Permission, i$->next()));
			{
				$var($FilePermission, fp, $cast($FilePermission, perm));
				bool var$1 = (((int32_t)(needed & (uint32_t)$nc(fp)->getMask())) != 0);
				if (var$1 && fp->impliesIgnoreMask(fperm)) {
					effective |= fp->getMask();
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

$Enumeration* FilePermissionCollection::elements() {
	return $nc(this->perms)->elements();
}

void FilePermissionCollection::writeObject($ObjectOutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$var($Vector, permissions, $new($Vector, $($nc(this->perms)->values())));
	$var($ObjectOutputStream$PutField, pfields, $nc(out)->putFields());
	$nc(pfields)->put("permissions"_s, $of(permissions));
	out->writeFields();
}

void FilePermissionCollection::readObject($ObjectInputStream* in) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, gfields, $nc(in)->readFields());
	$var($Vector, permissions, $cast($Vector, $nc(gfields)->get("permissions"_s, ($Object*)nullptr)));
	$set(this, perms, $new($ConcurrentHashMap, $nc(permissions)->size()));
	{
		$var($Iterator, i$, $nc(permissions)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Permission, perm, $cast($Permission, i$->next()));
			{
				$nc(this->perms)->put($($nc(perm)->getName()), perm);
			}
		}
	}
}

void clinit$FilePermissionCollection($Class* class$) {
	$load($Vector);
	$assignStatic(FilePermissionCollection::serialPersistentFields, $new($ObjectStreamFieldArray, {$$new($ObjectStreamField, "permissions"_s, $Vector::class$)}));
}

FilePermissionCollection::FilePermissionCollection() {
}

$Class* FilePermissionCollection::load$($String* name, bool initialize) {
	$loadClass(FilePermissionCollection, name, initialize, &_FilePermissionCollection_ClassInfo_, clinit$FilePermissionCollection, allocate$FilePermissionCollection);
	return class$;
}

$Class* FilePermissionCollection::class$ = nullptr;

	} // io
} // java