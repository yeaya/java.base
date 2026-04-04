#include <sun/nio/ch/FileKey.h>
#include <java/io/FileDescriptor.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace ch {

void FileKey::init$() {
}

FileKey* FileKey::create($FileDescriptor* fd) {
	$init(FileKey);
	$var(FileKey, fk, $new(FileKey));
	fk->init(fd);
	return fk;
}

int32_t FileKey::hashCode() {
	return (int32_t)(this->st_dev ^ ((int64_t)((uint64_t)this->st_dev >> 32))) + (int32_t)(this->st_ino ^ ((int64_t)((uint64_t)this->st_ino >> 32)));
}

bool FileKey::equals(Object$* obj) {
	if ($equals(obj, this)) {
		return true;
	}
	if (!($instanceOf(FileKey, obj))) {
		return false;
	}
	$var(FileKey, other, $cast(FileKey, obj));
	if ((this->st_dev != $nc(other)->st_dev) || (this->st_ino != other->st_ino)) {
		return false;
	}
	return true;
}

void FileKey::init($FileDescriptor* fd) {
	$prepareNative(init, void, $FileDescriptor* fd);
	$invokeNative(fd);
	$finishNative();
}

void FileKey::initIDs() {
	$init(FileKey);
	$prepareNativeStatic(initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void FileKey::clinit$($Class* clazz) {
	{
		FileKey::initIDs();
	}
}

FileKey::FileKey() {
}

$Class* FileKey::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"st_dev", "J", nullptr, $PRIVATE, $field(FileKey, st_dev)},
		{"st_ino", "J", nullptr, $PRIVATE, $field(FileKey, st_ino)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(FileKey, init$, void)},
		{"create", "(Ljava/io/FileDescriptor;)Lsun/nio/ch/FileKey;", nullptr, $PUBLIC | $STATIC, $staticMethod(FileKey, create, FileKey*, $FileDescriptor*), "java.io.IOException"},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(FileKey, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(FileKey, hashCode, int32_t)},
		{"init", "(Ljava/io/FileDescriptor;)V", nullptr, $PRIVATE | $NATIVE, $method(FileKey, init, void, $FileDescriptor*), "java.io.IOException"},
		{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(FileKey, initIDs, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.nio.ch.FileKey",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FileKey, name, initialize, &classInfo$$, FileKey::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FileKey);
	});
	return class$;
}

$Class* FileKey::class$ = nullptr;

		} // ch
	} // nio
} // sun