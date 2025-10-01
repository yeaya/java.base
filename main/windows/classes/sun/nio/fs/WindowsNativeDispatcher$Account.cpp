#include <sun/nio/fs/WindowsNativeDispatcher$Account.h>

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

$FieldInfo _WindowsNativeDispatcher$Account_FieldInfo_[] = {
	{"domain", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$Account, domain$)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$Account, name$)},
	{"use", "I", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$Account, use$)},
	{}
};

$MethodInfo _WindowsNativeDispatcher$Account_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(WindowsNativeDispatcher$Account::*)()>(&WindowsNativeDispatcher$Account::init$))},
	{"domain", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"use", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsNativeDispatcher$Account_InnerClassesInfo_[] = {
	{"sun.nio.fs.WindowsNativeDispatcher$Account", "sun.nio.fs.WindowsNativeDispatcher", "Account", $STATIC},
	{}
};

$ClassInfo _WindowsNativeDispatcher$Account_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.WindowsNativeDispatcher$Account",
	"java.lang.Object",
	nullptr,
	_WindowsNativeDispatcher$Account_FieldInfo_,
	_WindowsNativeDispatcher$Account_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsNativeDispatcher$Account_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.WindowsNativeDispatcher"
};

$Object* allocate$WindowsNativeDispatcher$Account($Class* clazz) {
	return $of($alloc(WindowsNativeDispatcher$Account));
}

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
	$loadClass(WindowsNativeDispatcher$Account, name, initialize, &_WindowsNativeDispatcher$Account_ClassInfo_, allocate$WindowsNativeDispatcher$Account);
	return class$;
}

$Class* WindowsNativeDispatcher$Account::class$ = nullptr;

		} // fs
	} // nio
} // sun