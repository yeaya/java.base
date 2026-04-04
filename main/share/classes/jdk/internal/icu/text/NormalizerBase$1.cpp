#include <jdk/internal/icu/text/NormalizerBase$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/text/Normalizer$Form.h>
#include <java/text/Normalizer.h>
#include <jdk/internal/icu/text/NormalizerBase.h>
#include <jcpp.h>

#undef NFC
#undef NFD
#undef NFKC
#undef NFKD

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $Normalizer$Form = ::java::text::Normalizer$Form;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$ints* NormalizerBase$1::$SwitchMap$java$text$Normalizer$Form = nullptr;

void NormalizerBase$1::clinit$($Class* clazz) {
	$assignStatic(NormalizerBase$1::$SwitchMap$java$text$Normalizer$Form, $new($ints, $($Normalizer$Form::values())->length));
	{
		try {
			NormalizerBase$1::$SwitchMap$java$text$Normalizer$Form->set($Normalizer$Form::NFC->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			NormalizerBase$1::$SwitchMap$java$text$Normalizer$Form->set($Normalizer$Form::NFD->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			NormalizerBase$1::$SwitchMap$java$text$Normalizer$Form->set($Normalizer$Form::NFKC->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			NormalizerBase$1::$SwitchMap$java$text$Normalizer$Form->set($Normalizer$Form::NFKD->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

NormalizerBase$1::NormalizerBase$1() {
}

$Class* NormalizerBase$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$text$Normalizer$Form", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(NormalizerBase$1, $SwitchMap$java$text$Normalizer$Form)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.icu.text.NormalizerBase",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.text.NormalizerBase$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"jdk.internal.icu.text.NormalizerBase$1",
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
		"jdk.internal.icu.text.NormalizerBase"
	};
	$loadClass(NormalizerBase$1, name, initialize, &classInfo$$, NormalizerBase$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NormalizerBase$1);
	});
	return class$;
}

$Class* NormalizerBase$1::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk