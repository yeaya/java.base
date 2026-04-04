#include <sun/nio/fs/WindowsNativeDispatcher$Account.h>
#include <sun/nio/fs/WindowsNativeDispatcher.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace fs {

void WindowsNativeDispatcher$Account::init$() {
}

$String* WindowsNativeDispatcher$Account::domain() {
	return this->domain$;
}

$String* WindowsNativeDispatcher$Account::name() {
	return this->name$;
}

int32_t WindowsNativeDispatcher$Account::use() {
	return this->use$;
}

WindowsNativeDispatcher$Account::WindowsNativeDispatcher$Account() {
}

$Class* WindowsNativeDispatcher$Account::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"domain", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$Account, domain$)},
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$Account, name$)},
		{"use", "I", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$Account, use$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(WindowsNativeDispatcher$Account, init$, void)},
		{"domain", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(WindowsNativeDispatcher$Account, domain, $String*)},
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(WindowsNativeDispatcher$Account, name, $String*)},
		{"use", "()I", nullptr, $PUBLIC, $virtualMethod(WindowsNativeDispatcher$Account, use, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.WindowsNativeDispatcher$Account", "sun.nio.fs.WindowsNativeDispatcher", "Account", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.WindowsNativeDispatcher$Account",
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
	$loadClass(WindowsNativeDispatcher$Account, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsNativeDispatcher$Account);
	});
	return class$;
}

$Class* WindowsNativeDispatcher$Account::class$ = nullptr;

		} // fs
	} // nio
} // sun