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

$ints* ProcessImpl$1::$SwitchMap$java$lang$ProcessImpl$Platform = nullptr;

void ProcessImpl$1::clinit$($Class* clazz) {
	$assignStatic(ProcessImpl$1::$SwitchMap$java$lang$ProcessImpl$Platform, $new($ints, $($ProcessImpl$Platform::values())->length));
	{
		try {
			ProcessImpl$1::$SwitchMap$java$lang$ProcessImpl$Platform->set($ProcessImpl$Platform::LINUX->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ProcessImpl$1::$SwitchMap$java$lang$ProcessImpl$Platform->set($ProcessImpl$Platform::BSD->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ProcessImpl$1::$SwitchMap$java$lang$ProcessImpl$Platform->set($ProcessImpl$Platform::AIX->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ProcessImpl$1::ProcessImpl$1() {
}

$Class* ProcessImpl$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$lang$ProcessImpl$Platform", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ProcessImpl$1, $SwitchMap$java$lang$ProcessImpl$Platform)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.ProcessImpl",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ProcessImpl$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.lang.ProcessImpl$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.ProcessImpl"
	};
	$loadClass(ProcessImpl$1, name, initialize, &classInfo$$, ProcessImpl$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessImpl$1);
	});
	return class$;
}

$Class* ProcessImpl$1::class$ = nullptr;

	} // lang
} // java