#include <java/lang/ProcessImpl$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <java/lang/ProcessImpl$Platform.h>
#include <java/lang/ProcessImpl.h>
#include <jcpp.h>

#undef AIX
#undef BSD
#undef LINUX

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ProcessImpl$Platform = ::java::lang::ProcessImpl$Platform;

namespace java {
	namespace lang {

$FieldInfo _ProcessImpl$1_FieldInfo_[] = {
	{"$SwitchMap$java$lang$ProcessImpl$Platform", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ProcessImpl$1, $SwitchMap$java$lang$ProcessImpl$Platform)},
	{}
};

$EnclosingMethodInfo _ProcessImpl$1_EnclosingMethodInfo_ = {
	"java.lang.ProcessImpl",
	nullptr,
	nullptr
};

$InnerClassInfo _ProcessImpl$1_InnerClassesInfo_[] = {
	{"java.lang.ProcessImpl$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ProcessImpl$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.lang.ProcessImpl$1",
	"java.lang.Object",
	nullptr,
	_ProcessImpl$1_FieldInfo_,
	nullptr,
	nullptr,
	&_ProcessImpl$1_EnclosingMethodInfo_,
	_ProcessImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessImpl"
};

$Object* allocate$ProcessImpl$1($Class* clazz) {
	return $of($alloc(ProcessImpl$1));
}

$ints* ProcessImpl$1::$SwitchMap$java$lang$ProcessImpl$Platform = nullptr;

void clinit$ProcessImpl$1($Class* class$) {
	$assignStatic(ProcessImpl$1::$SwitchMap$java$lang$ProcessImpl$Platform, $new($ints, $($ProcessImpl$Platform::values())->length));
	{
		try {
			$nc(ProcessImpl$1::$SwitchMap$java$lang$ProcessImpl$Platform)->set($ProcessImpl$Platform::LINUX->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ProcessImpl$1::$SwitchMap$java$lang$ProcessImpl$Platform)->set($ProcessImpl$Platform::BSD->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ProcessImpl$1::$SwitchMap$java$lang$ProcessImpl$Platform)->set($ProcessImpl$Platform::AIX->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ProcessImpl$1::ProcessImpl$1() {
}

$Class* ProcessImpl$1::load$($String* name, bool initialize) {
	$loadClass(ProcessImpl$1, name, initialize, &_ProcessImpl$1_ClassInfo_, clinit$ProcessImpl$1, allocate$ProcessImpl$1);
	return class$;
}

$Class* ProcessImpl$1::class$ = nullptr;

	} // lang
} // java