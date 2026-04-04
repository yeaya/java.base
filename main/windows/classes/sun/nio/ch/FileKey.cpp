#include <sun/nio/ch/FileKey.h>
#include <java/io/FileDescriptor.h>
#include <sun/nio/ch/IOUtil.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IOUtil = ::sun::nio::ch::IOUtil;

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
	return (int32_t)(this->dwVolumeSerialNumber ^ ((int64_t)((uint64_t)this->dwVolumeSerialNumber >> 32))) + (int32_t)(this->nFileIndexHigh ^ ((int64_t)((uint64_t)this->nFileIndexHigh >> 32))) + (int32_t)(this->nFileIndexLow ^ ((int64_t)((uint64_t)this->nFileIndexHigh >> 32)));
}

bool FileKey::equals(Object$* obj) {
	if ($equals(obj, this)) {
		return true;
	}
	if (!($instanceOf(FileKey, obj))) {
		return false;
	}
	$var(FileKey, other, $cast(FileKey, obj));
	if ((this->dwVolumeSerialNumber != $nc(other)->dwVolumeSerialNumber) || (this->nFileIndexHigh != other->nFileIndexHigh) || (this->nFileIndexLow != other->nFileIndexLow)) {
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
		$IOUtil::load();
		FileKey::initIDs();
	}
}

FileKey::FileKey() {
}

$Class* FileKey::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"dwVolumeSerialNumber", "J", nullptr, $PRIVATE, $field(FileKey, dwVolumeSerialNumber)},
		{"nFileIndexHigh", "J", nullptr, $PRIVATE, $field(FileKey, nFileIndexHigh)},
		{"nFileIndexLow", "J", nullptr, $PRIVATE, $field(FileKey, nFileIndexLow)},
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