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

$FieldInfo _FilePermissionCollection$1_FieldInfo_[] = {
	{"this$0", "Ljava/io/FilePermissionCollection;", nullptr, $FINAL | $SYNTHETIC, $field(FilePermissionCollection$1, this$0)},
	{}
};

$MethodInfo _FilePermissionCollection$1_MethodInfo_[] = {
	{"<init>", "(Ljava/io/FilePermissionCollection;)V", nullptr, 0, $method(static_cast<void(FilePermissionCollection$1::*)($FilePermissionCollection*)>(&FilePermissionCollection$1::init$))},
	{"apply", "(Ljava/security/Permission;Ljava/security/Permission;)Ljava/security/Permission;", nullptr, $PUBLIC},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _FilePermissionCollection$1_EnclosingMethodInfo_ = {
	"java.io.FilePermissionCollection",
	"add",
	"(Ljava/security/Permission;)V"
};

$InnerClassInfo _FilePermissionCollection$1_InnerClassesInfo_[] = {
	{"java.io.FilePermissionCollection$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FilePermissionCollection$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.FilePermissionCollection$1",
	"java.lang.Object",
	"java.util.function.BiFunction",
	_FilePermissionCollection$1_FieldInfo_,
	_FilePermissionCollection$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/function/BiFunction<Ljava/security/Permission;Ljava/security/Permission;Ljava/security/Permission;>;",
	&_FilePermissionCollection$1_EnclosingMethodInfo_,
	_FilePermissionCollection$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.FilePermissionCollection"
};

$Object* allocate$FilePermissionCollection$1($Class* clazz) {
	return $of($alloc(FilePermissionCollection$1));
}

void FilePermissionCollection$1::init$($FilePermissionCollection* this$0) {
	$set(this, this$0, this$0);
}

$Permission* FilePermissionCollection$1::apply($Permission* existingVal, $Permission* newVal) {
	int32_t oldMask = $nc(($cast($FilePermission, existingVal)))->getMask();
	int32_t newMask = $nc(($cast($FilePermission, newVal)))->getMask();
	if (oldMask != newMask) {
		int32_t effective = oldMask | newMask;
		if (effective == newMask) {
			return newVal;
		}
		if (effective != oldMask) {
			return ($cast($FilePermission, newVal))->withNewActions(effective);
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
	$loadClass(FilePermissionCollection$1, name, initialize, &_FilePermissionCollection$1_ClassInfo_, allocate$FilePermissionCollection$1);
	return class$;
}

$Class* FilePermissionCollection$1::class$ = nullptr;

	} // io
} // java