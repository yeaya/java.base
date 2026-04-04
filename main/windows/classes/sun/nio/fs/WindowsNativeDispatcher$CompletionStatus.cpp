#include <sun/nio/fs/WindowsNativeDispatcher$CompletionStatus.h>
#include <sun/nio/fs/WindowsNativeDispatcher.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace fs {

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
	$FieldInfo fieldInfos$$[] = {
		{"error", "I", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$CompletionStatus, error$)},
		{"bytesTransferred", "I", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$CompletionStatus, bytesTransferred$)},
		{"completionKey", "J", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$CompletionStatus, completionKey$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(WindowsNativeDispatcher$CompletionStatus, init$, void)},
		{"bytesTransferred", "()I", nullptr, 0, $virtualMethod(WindowsNativeDispatcher$CompletionStatus, bytesTransferred, int32_t)},
		{"completionKey", "()J", nullptr, 0, $virtualMethod(WindowsNativeDispatcher$CompletionStatus, completionKey, int64_t)},
		{"error", "()I", nullptr, 0, $virtualMethod(WindowsNativeDispatcher$CompletionStatus, error, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.WindowsNativeDispatcher$CompletionStatus", "sun.nio.fs.WindowsNativeDispatcher", "CompletionStatus", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.WindowsNativeDispatcher$CompletionStatus",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.fs.WindowsNativeDispatcher"
	};
	$loadClass(WindowsNativeDispatcher$CompletionStatus, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsNativeDispatcher$CompletionStatus);
	});
	return class$;
}

$Class* WindowsNativeDispatcher$CompletionStatus::class$ = nullptr;

		} // fs
	} // nio
} // sun