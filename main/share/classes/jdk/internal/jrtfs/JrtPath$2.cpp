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

$FieldInfo _JrtPath$2_FieldInfo_[] = {
	{"$SwitchMap$java$nio$file$AccessMode", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JrtPath$2, $SwitchMap$java$nio$file$AccessMode)},
	{}
};

$EnclosingMethodInfo _JrtPath$2_EnclosingMethodInfo_ = {
	"jdk.internal.jrtfs.JrtPath",
	nullptr,
	nullptr
};

$InnerClassInfo _JrtPath$2_InnerClassesInfo_[] = {
	{"jdk.internal.jrtfs.JrtPath$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _JrtPath$2_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"jdk.internal.jrtfs.JrtPath$2",
	"java.lang.Object",
	nullptr,
	_JrtPath$2_FieldInfo_,
	nullptr,
	nullptr,
	&_JrtPath$2_EnclosingMethodInfo_,
	_JrtPath$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.jrtfs.JrtPath"
};

$Object* allocate$JrtPath$2($Class* clazz) {
	return $of($alloc(JrtPath$2));
}

$ints* JrtPath$2::$SwitchMap$java$nio$file$AccessMode = nullptr;

void clinit$JrtPath$2($Class* class$) {
	$assignStatic(JrtPath$2::$SwitchMap$java$nio$file$AccessMode, $new($ints, $($AccessMode::values())->length));
	{
		try {
			$nc(JrtPath$2::$SwitchMap$java$nio$file$AccessMode)->set($AccessMode::READ->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JrtPath$2::$SwitchMap$java$nio$file$AccessMode)->set($AccessMode::WRITE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JrtPath$2::$SwitchMap$java$nio$file$AccessMode)->set($AccessMode::EXECUTE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

JrtPath$2::JrtPath$2() {
}

$Class* JrtPath$2::load$($String* name, bool initialize) {
	$loadClass(JrtPath$2, name, initialize, &_JrtPath$2_ClassInfo_, clinit$JrtPath$2, allocate$JrtPath$2);
	return class$;
}

$Class* JrtPath$2::class$ = nullptr;

		} // jrtfs
	} // internal
} // jdk