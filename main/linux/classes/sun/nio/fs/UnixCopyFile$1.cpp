#include <sun/nio/fs/UnixCopyFile$1.h>

#include <sun/nio/fs/Cancellable.h>
#include <sun/nio/fs/UnixCopyFile$Flags.h>
#include <sun/nio/fs/UnixCopyFile.h>
#include <sun/nio/fs/UnixFileAttributes.h>
#include <sun/nio/fs/UnixPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Cancellable = ::sun::nio::fs::Cancellable;
using $UnixCopyFile = ::sun::nio::fs::UnixCopyFile;
using $UnixCopyFile$Flags = ::sun::nio::fs::UnixCopyFile$Flags;
using $UnixFileAttributes = ::sun::nio::fs::UnixFileAttributes;
using $UnixPath = ::sun::nio::fs::UnixPath;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _UnixCopyFile$1_FieldInfo_[] = {
	{"val$flags", "Lsun/nio/fs/UnixCopyFile$Flags;", nullptr, $FINAL | $SYNTHETIC, $field(UnixCopyFile$1, val$flags)},
	{"val$target", "Lsun/nio/fs/UnixPath;", nullptr, $FINAL | $SYNTHETIC, $field(UnixCopyFile$1, val$target)},
	{"val$attrsToCopy", "Lsun/nio/fs/UnixFileAttributes;", nullptr, $FINAL | $SYNTHETIC, $field(UnixCopyFile$1, val$attrsToCopy)},
	{"val$source", "Lsun/nio/fs/UnixPath;", nullptr, $FINAL | $SYNTHETIC, $field(UnixCopyFile$1, val$source)},
	{}
};

$MethodInfo _UnixCopyFile$1_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/UnixPath;Lsun/nio/fs/UnixFileAttributes;Lsun/nio/fs/UnixPath;Lsun/nio/fs/UnixCopyFile$Flags;)V", nullptr, 0, $method(static_cast<void(UnixCopyFile$1::*)($UnixPath*,$UnixFileAttributes*,$UnixPath*,$UnixCopyFile$Flags*)>(&UnixCopyFile$1::init$))},
	{"implRun", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _UnixCopyFile$1_EnclosingMethodInfo_ = {
	"sun.nio.fs.UnixCopyFile",
	"copy",
	"(Lsun/nio/fs/UnixPath;Lsun/nio/fs/UnixPath;[Ljava/nio/file/CopyOption;)V"
};

$InnerClassInfo _UnixCopyFile$1_InnerClassesInfo_[] = {
	{"sun.nio.fs.UnixCopyFile$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _UnixCopyFile$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.UnixCopyFile$1",
	"sun.nio.fs.Cancellable",
	nullptr,
	_UnixCopyFile$1_FieldInfo_,
	_UnixCopyFile$1_MethodInfo_,
	nullptr,
	&_UnixCopyFile$1_EnclosingMethodInfo_,
	_UnixCopyFile$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.UnixCopyFile"
};

$Object* allocate$UnixCopyFile$1($Class* clazz) {
	return $of($alloc(UnixCopyFile$1));
}

void UnixCopyFile$1::init$($UnixPath* val$source, $UnixFileAttributes* val$attrsToCopy, $UnixPath* val$target, $UnixCopyFile$Flags* val$flags) {
	$set(this, val$source, val$source);
	$set(this, val$attrsToCopy, val$attrsToCopy);
	$set(this, val$target, val$target);
	$set(this, val$flags, val$flags);
	$Cancellable::init$();
}

void UnixCopyFile$1::implRun() {
	$UnixCopyFile::copyFile(this->val$source, this->val$attrsToCopy, this->val$target, this->val$flags, addressToPollForCancel());
}

UnixCopyFile$1::UnixCopyFile$1() {
}

$Class* UnixCopyFile$1::load$($String* name, bool initialize) {
	$loadClass(UnixCopyFile$1, name, initialize, &_UnixCopyFile$1_ClassInfo_, allocate$UnixCopyFile$1);
	return class$;
}

$Class* UnixCopyFile$1::class$ = nullptr;

		} // fs
	} // nio
} // sun