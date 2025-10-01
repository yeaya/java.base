#include <sun/nio/fs/WindowsChannelFactory$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenOption = ::java::nio::file::OpenOption;

namespace sun {
	namespace nio {
		namespace fs {

$MethodInfo _WindowsChannelFactory$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(WindowsChannelFactory$1::*)()>(&WindowsChannelFactory$1::init$))},
	{}
};

$EnclosingMethodInfo _WindowsChannelFactory$1_EnclosingMethodInfo_ = {
	"sun.nio.fs.WindowsChannelFactory",
	nullptr,
	nullptr
};

$InnerClassInfo _WindowsChannelFactory$1_InnerClassesInfo_[] = {
	{"sun.nio.fs.WindowsChannelFactory$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsChannelFactory$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.WindowsChannelFactory$1",
	"java.lang.Object",
	"java.nio.file.OpenOption",
	nullptr,
	_WindowsChannelFactory$1_MethodInfo_,
	nullptr,
	&_WindowsChannelFactory$1_EnclosingMethodInfo_,
	_WindowsChannelFactory$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.WindowsChannelFactory"
};

$Object* allocate$WindowsChannelFactory$1($Class* clazz) {
	return $of($alloc(WindowsChannelFactory$1));
}

void WindowsChannelFactory$1::init$() {
}

WindowsChannelFactory$1::WindowsChannelFactory$1() {
}

$Class* WindowsChannelFactory$1::load$($String* name, bool initialize) {
	$loadClass(WindowsChannelFactory$1, name, initialize, &_WindowsChannelFactory$1_ClassInfo_, allocate$WindowsChannelFactory$1);
	return class$;
}

$Class* WindowsChannelFactory$1::class$ = nullptr;

		} // fs
	} // nio
} // sun