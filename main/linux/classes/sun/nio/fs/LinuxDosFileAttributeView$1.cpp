#include <sun/nio/fs/LinuxDosFileAttributeView$1.h>
#include <java/nio/file/attribute/FileTime.h>
#include <sun/nio/fs/LinuxDosFileAttributeView.h>
#include <sun/nio/fs/UnixFileAttributes.h>
#include <sun/nio/fs/UnixFileKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileTime = ::java::nio::file::attribute::FileTime;
using $LinuxDosFileAttributeView = ::sun::nio::fs::LinuxDosFileAttributeView;
using $UnixFileAttributes = ::sun::nio::fs::UnixFileAttributes;

namespace sun {
	namespace nio {
		namespace fs {

void LinuxDosFileAttributeView$1::init$($LinuxDosFileAttributeView* this$0, $UnixFileAttributes* val$attrs, int32_t val$dosAttribute) {
	$set(this, this$0, this$0);
	$set(this, val$attrs, val$attrs);
	this->val$dosAttribute = val$dosAttribute;
}

$FileTime* LinuxDosFileAttributeView$1::lastModifiedTime() {
	return $nc(this->val$attrs)->lastModifiedTime();
}

$FileTime* LinuxDosFileAttributeView$1::lastAccessTime() {
	return $nc(this->val$attrs)->lastAccessTime();
}

$FileTime* LinuxDosFileAttributeView$1::creationTime() {
	return $nc(this->val$attrs)->creationTime();
}

bool LinuxDosFileAttributeView$1::isRegularFile() {
	return $nc(this->val$attrs)->isRegularFile();
}

bool LinuxDosFileAttributeView$1::isDirectory() {
	return $nc(this->val$attrs)->isDirectory();
}

bool LinuxDosFileAttributeView$1::isSymbolicLink() {
	return $nc(this->val$attrs)->isSymbolicLink();
}

bool LinuxDosFileAttributeView$1::isOther() {
	return $nc(this->val$attrs)->isOther();
}

int64_t LinuxDosFileAttributeView$1::size() {
	return $nc(this->val$attrs)->size();
}

$Object* LinuxDosFileAttributeView$1::fileKey() {
	return $nc(this->val$attrs)->fileKey();
}

bool LinuxDosFileAttributeView$1::isReadOnly() {
	return (this->val$dosAttribute & 1) != 0;
}

bool LinuxDosFileAttributeView$1::isHidden() {
	return (this->val$dosAttribute & 2) != 0;
}

bool LinuxDosFileAttributeView$1::isArchive() {
	return (this->val$dosAttribute & 0x20) != 0;
}

bool LinuxDosFileAttributeView$1::isSystem() {
	return (this->val$dosAttribute & 4) != 0;
}

LinuxDosFileAttributeView$1::LinuxDosFileAttributeView$1() {
}

$Class* LinuxDosFileAttributeView$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/fs/LinuxDosFileAttributeView;", nullptr, $FINAL | $SYNTHETIC, $field(LinuxDosFileAttributeView$1, this$0)},
		{"val$dosAttribute", "I", nullptr, $FINAL | $SYNTHETIC, $field(LinuxDosFileAttributeView$1, val$dosAttribute)},
		{"val$attrs", "Lsun/nio/fs/UnixFileAttributes;", nullptr, $FINAL | $SYNTHETIC, $field(LinuxDosFileAttributeView$1, val$attrs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/fs/LinuxDosFileAttributeView;Lsun/nio/fs/UnixFileAttributes;I)V", "()V", 0, $method(LinuxDosFileAttributeView$1, init$, void, $LinuxDosFileAttributeView*, $UnixFileAttributes*, int32_t)},
		{"creationTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC, $virtualMethod(LinuxDosFileAttributeView$1, creationTime, $FileTime*)},
		{"fileKey", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(LinuxDosFileAttributeView$1, fileKey, $Object*)},
		{"isArchive", "()Z", nullptr, $PUBLIC, $virtualMethod(LinuxDosFileAttributeView$1, isArchive, bool)},
		{"isDirectory", "()Z", nullptr, $PUBLIC, $virtualMethod(LinuxDosFileAttributeView$1, isDirectory, bool)},
		{"isHidden", "()Z", nullptr, $PUBLIC, $virtualMethod(LinuxDosFileAttributeView$1, isHidden, bool)},
		{"isOther", "()Z", nullptr, $PUBLIC, $virtualMethod(LinuxDosFileAttributeView$1, isOther, bool)},
		{"isReadOnly", "()Z", nullptr, $PUBLIC, $virtualMethod(LinuxDosFileAttributeView$1, isReadOnly, bool)},
		{"isRegularFile", "()Z", nullptr, $PUBLIC, $virtualMethod(LinuxDosFileAttributeView$1, isRegularFile, bool)},
		{"isSymbolicLink", "()Z", nullptr, $PUBLIC, $virtualMethod(LinuxDosFileAttributeView$1, isSymbolicLink, bool)},
		{"isSystem", "()Z", nullptr, $PUBLIC, $virtualMethod(LinuxDosFileAttributeView$1, isSystem, bool)},
		{"lastAccessTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC, $virtualMethod(LinuxDosFileAttributeView$1, lastAccessTime, $FileTime*)},
		{"lastModifiedTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC, $virtualMethod(LinuxDosFileAttributeView$1, lastModifiedTime, $FileTime*)},
		{"size", "()J", nullptr, $PUBLIC, $virtualMethod(LinuxDosFileAttributeView$1, size, int64_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.fs.LinuxDosFileAttributeView",
		"readAttributes",
		"()Ljava/nio/file/attribute/DosFileAttributes;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.LinuxDosFileAttributeView$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.LinuxDosFileAttributeView$1",
		"java.lang.Object",
		"java.nio.file.attribute.DosFileAttributes",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.fs.LinuxDosFileAttributeView"
	};
	$loadClass(LinuxDosFileAttributeView$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LinuxDosFileAttributeView$1);
	});
	return class$;
}

$Class* LinuxDosFileAttributeView$1::class$ = nullptr;

		} // fs
	} // nio
} // sun