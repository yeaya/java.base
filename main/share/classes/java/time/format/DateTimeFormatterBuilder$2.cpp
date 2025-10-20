#include <java/time/format/DateTimeFormatterBuilder$2.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/time/format/DateTimeFormatterBuilder.h>
#include <java/time/format/SignStyle.h>
#include <java/time/format/TextStyle.h>
#include <jcpp.h>

#undef ALWAYS
#undef EXCEEDS_PAD
#undef FULL_STANDALONE
#undef NARROW_STANDALONE
#undef NORMAL
#undef NOT_NEGATIVE
#undef SHORT_STANDALONE

using $SignStyleArray = $Array<::java::time::format::SignStyle>;
using $TextStyleArray = $Array<::java::time::format::TextStyle>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $DateTimeFormatterBuilder = ::java::time::format::DateTimeFormatterBuilder;
using $SignStyle = ::java::time::format::SignStyle;
using $TextStyle = ::java::time::format::TextStyle;

namespace java {
	namespace time {
		namespace format {

$FieldInfo _DateTimeFormatterBuilder$2_FieldInfo_[] = {
	{"$SwitchMap$java$time$format$SignStyle", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DateTimeFormatterBuilder$2, $SwitchMap$java$time$format$SignStyle)},
	{"$SwitchMap$java$time$format$TextStyle", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DateTimeFormatterBuilder$2, $SwitchMap$java$time$format$TextStyle)},
	{}
};

$EnclosingMethodInfo _DateTimeFormatterBuilder$2_EnclosingMethodInfo_ = {
	"java.time.format.DateTimeFormatterBuilder",
	nullptr,
	nullptr
};

$InnerClassInfo _DateTimeFormatterBuilder$2_InnerClassesInfo_[] = {
	{"java.time.format.DateTimeFormatterBuilder$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _DateTimeFormatterBuilder$2_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.time.format.DateTimeFormatterBuilder$2",
	"java.lang.Object",
	nullptr,
	_DateTimeFormatterBuilder$2_FieldInfo_,
	nullptr,
	nullptr,
	&_DateTimeFormatterBuilder$2_EnclosingMethodInfo_,
	_DateTimeFormatterBuilder$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.format.DateTimeFormatterBuilder"
};

$Object* allocate$DateTimeFormatterBuilder$2($Class* clazz) {
	return $of($alloc(DateTimeFormatterBuilder$2));
}

$ints* DateTimeFormatterBuilder$2::$SwitchMap$java$time$format$SignStyle = nullptr;
$ints* DateTimeFormatterBuilder$2::$SwitchMap$java$time$format$TextStyle = nullptr;

void clinit$DateTimeFormatterBuilder$2($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(DateTimeFormatterBuilder$2::$SwitchMap$java$time$format$SignStyle, $new($ints, $($SignStyle::values())->length));
	{
		try {
			$nc(DateTimeFormatterBuilder$2::$SwitchMap$java$time$format$SignStyle)->set($SignStyle::EXCEEDS_PAD->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(DateTimeFormatterBuilder$2::$SwitchMap$java$time$format$SignStyle)->set($SignStyle::ALWAYS->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(DateTimeFormatterBuilder$2::$SwitchMap$java$time$format$SignStyle)->set($SignStyle::NORMAL->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(DateTimeFormatterBuilder$2::$SwitchMap$java$time$format$SignStyle)->set($SignStyle::NOT_NEGATIVE->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
	$assignStatic(DateTimeFormatterBuilder$2::$SwitchMap$java$time$format$TextStyle, $new($ints, $($TextStyle::values())->length));
	{
		try {
			$nc(DateTimeFormatterBuilder$2::$SwitchMap$java$time$format$TextStyle)->set($TextStyle::FULL_STANDALONE->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(DateTimeFormatterBuilder$2::$SwitchMap$java$time$format$TextStyle)->set($TextStyle::SHORT_STANDALONE->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(DateTimeFormatterBuilder$2::$SwitchMap$java$time$format$TextStyle)->set($TextStyle::NARROW_STANDALONE->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

DateTimeFormatterBuilder$2::DateTimeFormatterBuilder$2() {
}

$Class* DateTimeFormatterBuilder$2::load$($String* name, bool initialize) {
	$loadClass(DateTimeFormatterBuilder$2, name, initialize, &_DateTimeFormatterBuilder$2_ClassInfo_, clinit$DateTimeFormatterBuilder$2, allocate$DateTimeFormatterBuilder$2);
	return class$;
}

$Class* DateTimeFormatterBuilder$2::class$ = nullptr;

		} // format
	} // time
} // java