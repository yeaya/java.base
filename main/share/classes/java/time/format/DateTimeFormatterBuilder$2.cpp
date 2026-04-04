#include <java/time/format/DateTimeFormatterBuilder$2.h>
#include <java/lang/NoSuchFieldError.h>
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

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $SignStyle = ::java::time::format::SignStyle;
using $TextStyle = ::java::time::format::TextStyle;

namespace java {
	namespace time {
		namespace format {

$ints* DateTimeFormatterBuilder$2::$SwitchMap$java$time$format$SignStyle = nullptr;
$ints* DateTimeFormatterBuilder$2::$SwitchMap$java$time$format$TextStyle = nullptr;

void DateTimeFormatterBuilder$2::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(DateTimeFormatterBuilder$2::$SwitchMap$java$time$format$SignStyle, $new($ints, $($SignStyle::values())->length));
	{
		try {
			DateTimeFormatterBuilder$2::$SwitchMap$java$time$format$SignStyle->set($SignStyle::EXCEEDS_PAD->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DateTimeFormatterBuilder$2::$SwitchMap$java$time$format$SignStyle->set($SignStyle::ALWAYS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DateTimeFormatterBuilder$2::$SwitchMap$java$time$format$SignStyle->set($SignStyle::NORMAL->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DateTimeFormatterBuilder$2::$SwitchMap$java$time$format$SignStyle->set($SignStyle::NOT_NEGATIVE->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(DateTimeFormatterBuilder$2::$SwitchMap$java$time$format$TextStyle, $new($ints, $($TextStyle::values())->length));
	{
		try {
			DateTimeFormatterBuilder$2::$SwitchMap$java$time$format$TextStyle->set($TextStyle::FULL_STANDALONE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DateTimeFormatterBuilder$2::$SwitchMap$java$time$format$TextStyle->set($TextStyle::SHORT_STANDALONE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DateTimeFormatterBuilder$2::$SwitchMap$java$time$format$TextStyle->set($TextStyle::NARROW_STANDALONE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

DateTimeFormatterBuilder$2::DateTimeFormatterBuilder$2() {
}

$Class* DateTimeFormatterBuilder$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$time$format$SignStyle", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DateTimeFormatterBuilder$2, $SwitchMap$java$time$format$SignStyle)},
		{"$SwitchMap$java$time$format$TextStyle", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DateTimeFormatterBuilder$2, $SwitchMap$java$time$format$TextStyle)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.time.format.DateTimeFormatterBuilder",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.format.DateTimeFormatterBuilder$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.time.format.DateTimeFormatterBuilder$2",
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
		"java.time.format.DateTimeFormatterBuilder"
	};
	$loadClass(DateTimeFormatterBuilder$2, name, initialize, &classInfo$$, DateTimeFormatterBuilder$2::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DateTimeFormatterBuilder$2);
	});
	return class$;
}

$Class* DateTimeFormatterBuilder$2::class$ = nullptr;

		} // format
	} // time
} // java