#include <sun/nio/fs/WindowsNativeDispatcher$FirstStream.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/nio/fs/WindowsNativeDispatcher.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WindowsNativeDispatcher = ::sun::nio::fs::WindowsNativeDispatcher;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _WindowsNativeDispatcher$FirstStream_FieldInfo_[] = {
	{"handle", "J", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$FirstStream, handle$)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$FirstStream, name$)},
	{}
};

$MethodInfo _WindowsNativeDispatcher$FirstStream_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(WindowsNativeDispatcher$FirstStream::*)()>(&WindowsNativeDispatcher$FirstStream::init$))},
	{"handle", "()J", nullptr, $PUBLIC},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsNativeDispatcher$FirstStream_InnerClassesInfo_[] = {
	{"sun.nio.fs.WindowsNativeDispatcher$FirstStream", "sun.nio.fs.WindowsNativeDispatcher", "FirstStream", $STATIC},
	{}
};

$ClassInfo _WindowsNativeDispatcher$FirstStream_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.WindowsNativeDispatcher$FirstStream",
	"java.lang.Object",
	nullptr,
	_WindowsNativeDispatcher$FirstStream_FieldInfo_,
	_WindowsNativeDispatcher$FirstStream_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsNativeDispatcher$FirstStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.WindowsNativeDispatcher"
};

$Object* allocate$WindowsNativeDispatcher$FirstStream($Class* clazz) {
	return $of($alloc(WindowsNativeDispatcher$FirstStream));
}

void WindowsNativeDispatcher$FirstStream::init$() {
}

int64_t WindowsNativeDispatcher$FirstStream::handle() {
	return this->handle$;
}

$String* WindowsNativeDispatcher$FirstStream::name() {
	return this->name$;
}

WindowsNativeDispatcher$FirstStream::WindowsNativeDispatcher$FirstStream() {
}

$Class* WindowsNativeDispatcher$FirstStream::load$($String* name, bool initialize) {
	$loadClass(WindowsNativeDispatcher$FirstStream, name, initialize, &_WindowsNativeDispatcher$FirstStream_ClassInfo_, allocate$WindowsNativeDispatcher$FirstStream);
	return class$;
}

$Class* WindowsNativeDispatcher$FirstStream::class$ = nullptr;

		} // fs
	} // nio
} // sun