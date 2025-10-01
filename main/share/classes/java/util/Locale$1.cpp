#include <java/util/Locale$1.h>

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
#include <java/util/Locale$Category.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef DISPLAY
#undef FORMAT

using $Locale$CategoryArray = $Array<::java::util::Locale$Category>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $Locale = ::java::util::Locale;
using $Locale$Category = ::java::util::Locale$Category;

namespace java {
	namespace util {

$FieldInfo _Locale$1_FieldInfo_[] = {
	{"$SwitchMap$java$util$Locale$Category", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Locale$1, $SwitchMap$java$util$Locale$Category)},
	{}
};

$EnclosingMethodInfo _Locale$1_EnclosingMethodInfo_ = {
	"java.util.Locale",
	nullptr,
	nullptr
};

$InnerClassInfo _Locale$1_InnerClassesInfo_[] = {
	{"java.util.Locale$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Locale$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.util.Locale$1",
	"java.lang.Object",
	nullptr,
	_Locale$1_FieldInfo_,
	nullptr,
	nullptr,
	&_Locale$1_EnclosingMethodInfo_,
	_Locale$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Locale"
};

$Object* allocate$Locale$1($Class* clazz) {
	return $of($alloc(Locale$1));
}

$ints* Locale$1::$SwitchMap$java$util$Locale$Category = nullptr;

void clinit$Locale$1($Class* class$) {
	$assignStatic(Locale$1::$SwitchMap$java$util$Locale$Category, $new($ints, $($Locale$Category::values())->length));
	{
		try {
			$nc(Locale$1::$SwitchMap$java$util$Locale$Category)->set($Locale$Category::DISPLAY->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Locale$1::$SwitchMap$java$util$Locale$Category)->set($Locale$Category::FORMAT->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

Locale$1::Locale$1() {
}

$Class* Locale$1::load$($String* name, bool initialize) {
	$loadClass(Locale$1, name, initialize, &_Locale$1_ClassInfo_, clinit$Locale$1, allocate$Locale$1);
	return class$;
}

$Class* Locale$1::class$ = nullptr;

	} // util
} // java