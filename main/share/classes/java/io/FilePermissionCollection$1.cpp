#include <java/io/FilePermissionCollection$1.h>
#include <java/io/FilePermission.h>
#include <java/io/FilePermissionCollection.h>
#include <java/security/Permission.h>
#include <jcpp.h>

using $FilePermission = ::java::io::FilePermission;
using $FilePermissionCollection = ::java::io::FilePermissionCollection;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Permission = ::java::security::Permission;

namespace java {
	namespace io {

void FilePermissionCollection$1::init$($FilePermissionCollection* this$0) {
	$set(this, this$0, this$0);
}

$Permission* FilePermissionCollection$1::apply($Permission* existingVal, $Permission* newVal) {
	int32_t oldMask = $nc($cast($FilePermission, existingVal))->getMask();
	int32_t newMask = $nc($cast($FilePermission, newVal))->getMask();
	if (oldMask != newMask) {
		int32_t effective = oldMask | newMask;
		if (effective == newMask) {
			return newVal;
		}
		if (effective != oldMask) {
			return $cast($FilePermission, newVal)->withNewActions(effective);
		}
	}
	return existingVal;
}

$Object* FilePermissionCollection$1::apply(Object$* existingVal, Object$* newVal) {
	return $of(this->apply($cast($Permission, existingVal), $cast($Permission, newVal)));
}

FilePermissionCollection$1::FilePermissionCollection$1() {
}

$Class* FilePermissionCollection$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/io/FilePermissionCollection;", nullptr, $FINAL | $SYNTHETIC, $field(FilePermissionCollection$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/FilePermissionCollection;)V", nullptr, 0, $method(FilePermissionCollection$1, init$, void, $FilePermissionCollection*)},
		{"apply", "(Ljava/security/Permission;Ljava/security/Permission;)Ljava/security/Permission;", nullptr, $PUBLIC, $virtualMethod(FilePermissionCollection$1, apply, $Permission*, $Permission*, $Permission*)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(FilePermissionCollection$1, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.io.FilePermissionCollection",
		"add",
		"(Ljava/security/Permission;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.FilePermissionCollection$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.FilePermissionCollection$1",
		"java.lang.Object",
		"java.util.function.BiFunction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/function/BiFunction<Ljava/security/Permission;Ljava/security/Permission;Ljava/security/Permission;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.io.FilePermissionCollection"
	};
	$loadClass(FilePermissionCollection$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FilePermissionCollection$1);
	});
	return class$;
}

$Class* FilePermissionCollection$1::class$ = nullptr;

	} // io
} // java