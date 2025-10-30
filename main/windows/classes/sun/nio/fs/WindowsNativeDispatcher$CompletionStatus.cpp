#include <sun/nio/fs/WindowsNativeDispatcher$CompletionStatus.h>

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

$FieldInfo _WindowsNativeDispatcher$CompletionStatus_FieldInfo_[] = {
	{"error", "I", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$CompletionStatus, error$)},
	{"bytesTransferred", "I", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$CompletionStatus, bytesTransferred$)},
	{"completionKey", "J", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$CompletionStatus, completionKey$)},
	{}
};

$MethodInfo _WindowsNativeDispatcher$CompletionStatus_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(WindowsNativeDispatcher$CompletionStatus::*)()>(&WindowsNativeDispatcher$CompletionStatus::init$))},
	{"bytesTransferred", "()I", nullptr, 0},
	{"completionKey", "()J", nullptr, 0},
	{"error", "()I", nullptr, 0},
	{}
};

$InnerClassInfo _WindowsNativeDispatcher$CompletionStatus_InnerClassesInfo_[] = {
	{"sun.nio.fs.WindowsNativeDispatcher$CompletionStatus", "sun.nio.fs.WindowsNativeDispatcher", "CompletionStatus", $STATIC},
	{}
};

$ClassInfo _WindowsNativeDispatcher$CompletionStatus_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.WindowsNativeDispatcher$CompletionStatus",
	"java.lang.Object",
	nullptr,
	_WindowsNativeDispatcher$CompletionStatus_FieldInfo_,
	_WindowsNativeDispatcher$CompletionStatus_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsNativeDispatcher$CompletionStatus_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.WindowsNativeDispatcher"
};

$Object* allocate$WindowsNativeDispatcher$CompletionStatus($Class* clazz) {
	return $of($alloc(WindowsNativeDispatcher$CompletionStatus));
}

void WindowsNativeDispatcher$CompletionStatus::init$() {
}

int32_t WindowsNativeDispatcher$CompletionStatus::error() {
	return this->error$;
}

int32_t WindowsNativeDispatcher$CompletionStatus::bytesTransferred() {
	return this->bytesTransferred$;
}

int64_t WindowsNativeDispatcher$CompletionStatus::completionKey() {
	return this->completionKey$;
}

WindowsNativeDispatcher$CompletionStatus::WindowsNativeDispatcher$CompletionStatus() {
}

$Class* WindowsNativeDispatcher$CompletionStatus::load$($String* name, bool initialize) {
	$loadClass(WindowsNativeDispatcher$CompletionStatus, name, initialize, &_WindowsNativeDispatcher$CompletionStatus_ClassInfo_, allocate$WindowsNativeDispatcher$CompletionStatus);
	return class$;
}

$Class* WindowsNativeDispatcher$CompletionStatus::class$ = nullptr;

		} // fs
	} // nio
} // sun