#include <sun/nio/fs/WindowsNativeDispatcher$FirstFile.h>

#include <sun/nio/fs/WindowsNativeDispatcher.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _WindowsNativeDispatcher$FirstFile_FieldInfo_[] = {
	{"handle", "J", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$FirstFile, handle$)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$FirstFile, name$)},
	{"attributes", "I", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$FirstFile, attributes$)},
	{}
};

$MethodInfo _WindowsNativeDispatcher$FirstFile_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(WindowsNativeDispatcher$FirstFile, init$, void)},
	{"attributes", "()I", nullptr, $PUBLIC, $virtualMethod(WindowsNativeDispatcher$FirstFile, attributes, int32_t)},
	{"handle", "()J", nullptr, $PUBLIC, $virtualMethod(WindowsNativeDispatcher$FirstFile, handle, int64_t)},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(WindowsNativeDispatcher$FirstFile, name, $String*)},
	{}
};

$InnerClassInfo _WindowsNativeDispatcher$FirstFile_InnerClassesInfo_[] = {
	{"sun.nio.fs.WindowsNativeDispatcher$FirstFile", "sun.nio.fs.WindowsNativeDispatcher", "FirstFile", $STATIC},
	{}
};

$ClassInfo _WindowsNativeDispatcher$FirstFile_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.WindowsNativeDispatcher$FirstFile",
	"java.lang.Object",
	nullptr,
	_WindowsNativeDispatcher$FirstFile_FieldInfo_,
	_WindowsNativeDispatcher$FirstFile_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsNativeDispatcher$FirstFile_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.WindowsNativeDispatcher"
};

$Object* allocate$WindowsNativeDispatcher$FirstFile($Class* clazz) {
	return $of($alloc(WindowsNativeDispatcher$FirstFile));
}

void WindowsNativeDispatcher$FirstFile::init$() {
}

int64_t WindowsNativeDispatcher$FirstFile::handle() {
	return this->handle$;
}

$String* WindowsNativeDispatcher$FirstFile::name() {
	return this->name$;
}

int32_t WindowsNativeDispatcher$FirstFile::attributes() {
	return this->attributes$;
}

WindowsNativeDispatcher$FirstFile::WindowsNativeDispatcher$FirstFile() {
}

$Class* WindowsNativeDispatcher$FirstFile::load$($String* name, bool initialize) {
	$loadClass(WindowsNativeDispatcher$FirstFile, name, initialize, &_WindowsNativeDispatcher$FirstFile_ClassInfo_, allocate$WindowsNativeDispatcher$FirstFile);
	return class$;
}

$Class* WindowsNativeDispatcher$FirstFile::class$ = nullptr;

		} // fs
	} // nio
} // sun