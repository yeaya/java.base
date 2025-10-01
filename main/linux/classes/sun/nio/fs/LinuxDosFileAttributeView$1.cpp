#include <sun/nio/fs/LinuxDosFileAttributeView$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $DosFileAttributes = ::java::nio::file::attribute::DosFileAttributes;
using $FileTime = ::java::nio::file::attribute::FileTime;
using $LinuxDosFileAttributeView = ::sun::nio::fs::LinuxDosFileAttributeView;
using $UnixFileAttributes = ::sun::nio::fs::UnixFileAttributes;
using $UnixFileKey = ::sun::nio::fs::UnixFileKey;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _LinuxDosFileAttributeView$1_FieldInfo_[] = {
	{"this$0", "Lsun/nio/fs/LinuxDosFileAttributeView;", nullptr, $FINAL | $SYNTHETIC, $field(LinuxDosFileAttributeView$1, this$0)},
	{"val$dosAttribute", "I", nullptr, $FINAL | $SYNTHETIC, $field(LinuxDosFileAttributeView$1, val$dosAttribute)},
	{"val$attrs", "Lsun/nio/fs/UnixFileAttributes;", nullptr, $FINAL | $SYNTHETIC, $field(LinuxDosFileAttributeView$1, val$attrs)},
	{}
};

$MethodInfo _LinuxDosFileAttributeView$1_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/LinuxDosFileAttributeView;Lsun/nio/fs/UnixFileAttributes;I)V", "()V", 0, $method(static_cast<void(LinuxDosFileAttributeView$1::*)($LinuxDosFileAttributeView*,$UnixFileAttributes*,int32_t)>(&LinuxDosFileAttributeView$1::init$))},
	{"creationTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC},
	{"fileKey", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"isArchive", "()Z", nullptr, $PUBLIC},
	{"isDirectory", "()Z", nullptr, $PUBLIC},
	{"isHidden", "()Z", nullptr, $PUBLIC},
	{"isOther", "()Z", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"isRegularFile", "()Z", nullptr, $PUBLIC},
	{"isSymbolicLink", "()Z", nullptr, $PUBLIC},
	{"isSystem", "()Z", nullptr, $PUBLIC},
	{"lastAccessTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC},
	{"lastModifiedTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC},
	{"size", "()J", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _LinuxDosFileAttributeView$1_EnclosingMethodInfo_ = {
	"sun.nio.fs.LinuxDosFileAttributeView",
	"readAttributes",
	"()Ljava/nio/file/attribute/DosFileAttributes;"
};

$InnerClassInfo _LinuxDosFileAttributeView$1_InnerClassesInfo_[] = {
	{"sun.nio.fs.LinuxDosFileAttributeView$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LinuxDosFileAttributeView$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.LinuxDosFileAttributeView$1",
	"java.lang.Object",
	"java.nio.file.attribute.DosFileAttributes",
	_LinuxDosFileAttributeView$1_FieldInfo_,
	_LinuxDosFileAttributeView$1_MethodInfo_,
	nullptr,
	&_LinuxDosFileAttributeView$1_EnclosingMethodInfo_,
	_LinuxDosFileAttributeView$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.LinuxDosFileAttributeView"
};

$Object* allocate$LinuxDosFileAttributeView$1($Class* clazz) {
	return $of($alloc(LinuxDosFileAttributeView$1));
}

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
	return $of($nc(this->val$attrs)->fileKey());
}

bool LinuxDosFileAttributeView$1::isReadOnly() {
	return ((int32_t)(this->val$dosAttribute & (uint32_t)1)) != 0;
}

bool LinuxDosFileAttributeView$1::isHidden() {
	return ((int32_t)(this->val$dosAttribute & (uint32_t)2)) != 0;
}

bool LinuxDosFileAttributeView$1::isArchive() {
	return ((int32_t)(this->val$dosAttribute & (uint32_t)32)) != 0;
}

bool LinuxDosFileAttributeView$1::isSystem() {
	return ((int32_t)(this->val$dosAttribute & (uint32_t)4)) != 0;
}

LinuxDosFileAttributeView$1::LinuxDosFileAttributeView$1() {
}

$Class* LinuxDosFileAttributeView$1::load$($String* name, bool initialize) {
	$loadClass(LinuxDosFileAttributeView$1, name, initialize, &_LinuxDosFileAttributeView$1_ClassInfo_, allocate$LinuxDosFileAttributeView$1);
	return class$;
}

$Class* LinuxDosFileAttributeView$1::class$ = nullptr;

		} // fs
	} // nio
} // sun