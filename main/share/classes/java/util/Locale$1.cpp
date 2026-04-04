#include <java/util/Locale$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/util/Locale$Category.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef DISPLAY
#undef FORMAT

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $Locale$Category = ::java::util::Locale$Category;

namespace java {
	namespace util {

$ints* Locale$1::$SwitchMap$java$util$Locale$Category = nullptr;

void Locale$1::clinit$($Class* clazz) {
	$assignStatic(Locale$1::$SwitchMap$java$util$Locale$Category, $new($ints, $($Locale$Category::values())->length));
	{
		try {
			Locale$1::$SwitchMap$java$util$Locale$Category->set($Locale$Category::DISPLAY->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Locale$1::$SwitchMap$java$util$Locale$Category->set($Locale$Category::FORMAT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Locale$1::Locale$1() {
}

$Class* Locale$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$util$Locale$Category", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Locale$1, $SwitchMap$java$util$Locale$Category)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.Locale",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Locale$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.util.Locale$1",
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
		"java.util.Locale"
	};
	$loadClass(Locale$1, name, initialize, &classInfo$$, Locale$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Locale$1);
	});
	return class$;
}

$Class* Locale$1::class$ = nullptr;

	} // util
} // java