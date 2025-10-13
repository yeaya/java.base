#include <jdk/internal/icu/text/NormalizerBase$1.h>

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
#include <java/text/Normalizer$Form.h>
#include <java/text/Normalizer.h>
#include <jdk/internal/icu/text/NormalizerBase.h>
#include <jcpp.h>

#undef NFC
#undef NFD
#undef NFKC
#undef NFKD

using $Normalizer$FormArray = $Array<::java::text::Normalizer$Form>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $Normalizer = ::java::text::Normalizer;
using $Normalizer$Form = ::java::text::Normalizer$Form;
using $NormalizerBase = ::jdk::internal::icu::text::NormalizerBase;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$FieldInfo _NormalizerBase$1_FieldInfo_[] = {
	{"$SwitchMap$java$text$Normalizer$Form", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(NormalizerBase$1, $SwitchMap$java$text$Normalizer$Form)},
	{}
};

$EnclosingMethodInfo _NormalizerBase$1_EnclosingMethodInfo_ = {
	"jdk.internal.icu.text.NormalizerBase",
	nullptr,
	nullptr
};

$InnerClassInfo _NormalizerBase$1_InnerClassesInfo_[] = {
	{"jdk.internal.icu.text.NormalizerBase$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _NormalizerBase$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"jdk.internal.icu.text.NormalizerBase$1",
	"java.lang.Object",
	nullptr,
	_NormalizerBase$1_FieldInfo_,
	nullptr,
	nullptr,
	&_NormalizerBase$1_EnclosingMethodInfo_,
	_NormalizerBase$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.text.NormalizerBase"
};

$Object* allocate$NormalizerBase$1($Class* clazz) {
	return $of($alloc(NormalizerBase$1));
}

$ints* NormalizerBase$1::$SwitchMap$java$text$Normalizer$Form = nullptr;

void clinit$NormalizerBase$1($Class* class$) {
	$assignStatic(NormalizerBase$1::$SwitchMap$java$text$Normalizer$Form, $new($ints, $($Normalizer$Form::values())->length));
	{
		try {
			$nc(NormalizerBase$1::$SwitchMap$java$text$Normalizer$Form)->set($Normalizer$Form::NFC->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(NormalizerBase$1::$SwitchMap$java$text$Normalizer$Form)->set($Normalizer$Form::NFD->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(NormalizerBase$1::$SwitchMap$java$text$Normalizer$Form)->set($Normalizer$Form::NFKC->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(NormalizerBase$1::$SwitchMap$java$text$Normalizer$Form)->set($Normalizer$Form::NFKD->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

NormalizerBase$1::NormalizerBase$1() {
}

$Class* NormalizerBase$1::load$($String* name, bool initialize) {
	$loadClass(NormalizerBase$1, name, initialize, &_NormalizerBase$1_ClassInfo_, clinit$NormalizerBase$1, allocate$NormalizerBase$1);
	return class$;
}

$Class* NormalizerBase$1::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk