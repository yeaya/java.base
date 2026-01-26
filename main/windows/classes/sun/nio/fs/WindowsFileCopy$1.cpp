#include <sun/nio/fs/WindowsFileCopy$1.h>

#include <sun/nio/fs/Cancellable.h>
#include <sun/nio/fs/WindowsException.h>
#include <sun/nio/fs/WindowsFileCopy.h>
#include <sun/nio/fs/WindowsNativeDispatcher.h>
#include <sun/nio/fs/WindowsPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Cancellable = ::sun::nio::fs::Cancellable;
using $WindowsException = ::sun::nio::fs::WindowsException;
using $WindowsNativeDispatcher = ::sun::nio::fs::WindowsNativeDispatcher;
using $WindowsPath = ::sun::nio::fs::WindowsPath;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _WindowsFileCopy$1_FieldInfo_[] = {
	{"val$target", "Lsun/nio/fs/WindowsPath;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileCopy$1, val$target)},
	{"val$source", "Lsun/nio/fs/WindowsPath;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileCopy$1, val$source)},
	{"val$flags", "I", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileCopy$1, val$flags)},
	{"val$targetPath", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileCopy$1, val$targetPath)},
	{"val$sourcePath", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileCopy$1, val$sourcePath)},
	{}
};

$MethodInfo _WindowsFileCopy$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;ILsun/nio/fs/WindowsPath;Lsun/nio/fs/WindowsPath;)V", nullptr, 0, $method(WindowsFileCopy$1, init$, void, $String*, $String*, int32_t, $WindowsPath*, $WindowsPath*)},
	{"cancelValue", "()I", nullptr, $PUBLIC, $virtualMethod(WindowsFileCopy$1, cancelValue, int32_t)},
	{"implRun", "()V", nullptr, $PUBLIC, $virtualMethod(WindowsFileCopy$1, implRun, void), "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _WindowsFileCopy$1_EnclosingMethodInfo_ = {
	"sun.nio.fs.WindowsFileCopy",
	"copy",
	"(Lsun/nio/fs/WindowsPath;Lsun/nio/fs/WindowsPath;[Ljava/nio/file/CopyOption;)V"
};

$InnerClassInfo _WindowsFileCopy$1_InnerClassesInfo_[] = {
	{"sun.nio.fs.WindowsFileCopy$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsFileCopy$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.WindowsFileCopy$1",
	"sun.nio.fs.Cancellable",
	nullptr,
	_WindowsFileCopy$1_FieldInfo_,
	_WindowsFileCopy$1_MethodInfo_,
	nullptr,
	&_WindowsFileCopy$1_EnclosingMethodInfo_,
	_WindowsFileCopy$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.WindowsFileCopy"
};

$Object* allocate$WindowsFileCopy$1($Class* clazz) {
	return $of($alloc(WindowsFileCopy$1));
}

void WindowsFileCopy$1::init$($String* val$sourcePath, $String* val$targetPath, int32_t val$flags, $WindowsPath* val$source, $WindowsPath* val$target) {
	$set(this, val$sourcePath, val$sourcePath);
	$set(this, val$targetPath, val$targetPath);
	this->val$flags = val$flags;
	$set(this, val$source, val$source);
	$set(this, val$target, val$target);
	$Cancellable::init$();
}

int32_t WindowsFileCopy$1::cancelValue() {
	return 1;
}

void WindowsFileCopy$1::implRun() {
	try {
		$WindowsNativeDispatcher::CopyFileEx(this->val$sourcePath, this->val$targetPath, this->val$flags, addressToPollForCancel());
	} catch ($WindowsException& x) {
		x->rethrowAsIOException(this->val$source, this->val$target);
	}
}

WindowsFileCopy$1::WindowsFileCopy$1() {
}

$Class* WindowsFileCopy$1::load$($String* name, bool initialize) {
	$loadClass(WindowsFileCopy$1, name, initialize, &_WindowsFileCopy$1_ClassInfo_, allocate$WindowsFileCopy$1);
	return class$;
}

$Class* WindowsFileCopy$1::class$ = nullptr;

		} // fs
	} // nio
} // sun