#include <sun/nio/fs/WindowsNativeDispatcher$FirstStream.h>
#include <sun/nio/fs/WindowsNativeDispatcher.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace fs {

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
	$FieldInfo fieldInfos$$[] = {
		{"handle", "J", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$FirstStream, handle$)},
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$FirstStream, name$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(WindowsNativeDispatcher$FirstStream, init$, void)},
		{"handle", "()J", nullptr, $PUBLIC, $virtualMethod(WindowsNativeDispatcher$FirstStream, handle, int64_t)},
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(WindowsNativeDispatcher$FirstStream, name, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.WindowsNativeDispatcher$FirstStream", "sun.nio.fs.WindowsNativeDispatcher", "FirstStream", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.WindowsNativeDispatcher$FirstStream",
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
	$loadClass(WindowsNativeDispatcher$FirstStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsNativeDispatcher$FirstStream);
	});
	return class$;
}

$Class* WindowsNativeDispatcher$FirstStream::class$ = nullptr;

		} // fs
	} // nio
} // sun