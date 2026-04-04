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
	$FieldInfo fieldInfos$$[] = {
		{"handle", "J", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$FirstFile, handle$)},
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$FirstFile, name$)},
		{"attributes", "I", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$FirstFile, attributes$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(WindowsNativeDispatcher$FirstFile, init$, void)},
		{"attributes", "()I", nullptr, $PUBLIC, $virtualMethod(WindowsNativeDispatcher$FirstFile, attributes, int32_t)},
		{"handle", "()J", nullptr, $PUBLIC, $virtualMethod(WindowsNativeDispatcher$FirstFile, handle, int64_t)},
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(WindowsNativeDispatcher$FirstFile, name, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.WindowsNativeDispatcher$FirstFile", "sun.nio.fs.WindowsNativeDispatcher", "FirstFile", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.WindowsNativeDispatcher$FirstFile",
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
	$loadClass(WindowsNativeDispatcher$FirstFile, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsNativeDispatcher$FirstFile);
	});
	return class$;
}

$Class* WindowsNativeDispatcher$FirstFile::class$ = nullptr;

		} // fs
	} // nio
} // sun