#include <jdk/internal/jrtfs/JrtPath$2.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/nio/file/AccessMode.h>
#include <jdk/internal/jrtfs/JrtPath.h>
#include <jcpp.h>

#undef EXECUTE
#undef READ
#undef WRITE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $AccessMode = ::java::nio::file::AccessMode;

namespace jdk {
	namespace internal {
		namespace jrtfs {

$ints* JrtPath$2::$SwitchMap$java$nio$file$AccessMode = nullptr;

void JrtPath$2::clinit$($Class* clazz) {
	$assignStatic(JrtPath$2::$SwitchMap$java$nio$file$AccessMode, $new($ints, $($AccessMode::values())->length));
	{
		try {
			JrtPath$2::$SwitchMap$java$nio$file$AccessMode->set($AccessMode::READ->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JrtPath$2::$SwitchMap$java$nio$file$AccessMode->set($AccessMode::WRITE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JrtPath$2::$SwitchMap$java$nio$file$AccessMode->set($AccessMode::EXECUTE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

JrtPath$2::JrtPath$2() {
}

$Class* JrtPath$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$nio$file$AccessMode", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JrtPath$2, $SwitchMap$java$nio$file$AccessMode)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.jrtfs.JrtPath",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.jrtfs.JrtPath$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"jdk.internal.jrtfs.JrtPath$2",
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
		"jdk.internal.jrtfs.JrtPath"
	};
	$loadClass(JrtPath$2, name, initialize, &classInfo$$, JrtPath$2::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JrtPath$2);
	});
	return class$;
}

$Class* JrtPath$2::class$ = nullptr;

		} // jrtfs
	} // internal
} // jdk