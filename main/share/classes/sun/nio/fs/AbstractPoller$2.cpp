#include <sun/nio/fs/AbstractPoller$2.h>

#include <java/lang/NoSuchFieldError.h>
#include <sun/nio/fs/AbstractPoller$RequestType.h>
#include <sun/nio/fs/AbstractPoller.h>
#include <jcpp.h>

#undef CANCEL
#undef CLOSE
#undef REGISTER

using $AbstractPoller$RequestTypeArray = $Array<::sun::nio::fs::AbstractPoller$RequestType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $AbstractPoller = ::sun::nio::fs::AbstractPoller;
using $AbstractPoller$RequestType = ::sun::nio::fs::AbstractPoller$RequestType;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _AbstractPoller$2_FieldInfo_[] = {
	{"$SwitchMap$sun$nio$fs$AbstractPoller$RequestType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(AbstractPoller$2, $SwitchMap$sun$nio$fs$AbstractPoller$RequestType)},
	{}
};

$EnclosingMethodInfo _AbstractPoller$2_EnclosingMethodInfo_ = {
	"sun.nio.fs.AbstractPoller",
	nullptr,
	nullptr
};

$InnerClassInfo _AbstractPoller$2_InnerClassesInfo_[] = {
	{"sun.nio.fs.AbstractPoller$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _AbstractPoller$2_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.nio.fs.AbstractPoller$2",
	"java.lang.Object",
	nullptr,
	_AbstractPoller$2_FieldInfo_,
	nullptr,
	nullptr,
	&_AbstractPoller$2_EnclosingMethodInfo_,
	_AbstractPoller$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.AbstractPoller"
};

$Object* allocate$AbstractPoller$2($Class* clazz) {
	return $of($alloc(AbstractPoller$2));
}

$ints* AbstractPoller$2::$SwitchMap$sun$nio$fs$AbstractPoller$RequestType = nullptr;

void clinit$AbstractPoller$2($Class* class$) {
	$assignStatic(AbstractPoller$2::$SwitchMap$sun$nio$fs$AbstractPoller$RequestType, $new($ints, $($AbstractPoller$RequestType::values())->length));
	{
		try {
			$nc(AbstractPoller$2::$SwitchMap$sun$nio$fs$AbstractPoller$RequestType)->set($AbstractPoller$RequestType::REGISTER->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(AbstractPoller$2::$SwitchMap$sun$nio$fs$AbstractPoller$RequestType)->set($AbstractPoller$RequestType::CANCEL->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(AbstractPoller$2::$SwitchMap$sun$nio$fs$AbstractPoller$RequestType)->set($AbstractPoller$RequestType::CLOSE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

AbstractPoller$2::AbstractPoller$2() {
}

$Class* AbstractPoller$2::load$($String* name, bool initialize) {
	$loadClass(AbstractPoller$2, name, initialize, &_AbstractPoller$2_ClassInfo_, clinit$AbstractPoller$2, allocate$AbstractPoller$2);
	return class$;
}

$Class* AbstractPoller$2::class$ = nullptr;

		} // fs
	} // nio
} // sun