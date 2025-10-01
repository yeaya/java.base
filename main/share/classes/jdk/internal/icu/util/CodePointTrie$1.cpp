#include <jdk/internal/icu/util/CodePointTrie$1.h>

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
#include <jdk/internal/icu/util/CodePointTrie$ValueWidth.h>
#include <jdk/internal/icu/util/CodePointTrie.h>
#include <jcpp.h>

#undef BITS_8
#undef BITS_32
#undef BITS_16

using $CodePointTrie$ValueWidthArray = $Array<::jdk::internal::icu::util::CodePointTrie$ValueWidth>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $CodePointTrie = ::jdk::internal::icu::util::CodePointTrie;
using $CodePointTrie$ValueWidth = ::jdk::internal::icu::util::CodePointTrie$ValueWidth;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

$FieldInfo _CodePointTrie$1_FieldInfo_[] = {
	{"$SwitchMap$jdk$internal$icu$util$CodePointTrie$ValueWidth", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CodePointTrie$1, $SwitchMap$jdk$internal$icu$util$CodePointTrie$ValueWidth)},
	{}
};

$EnclosingMethodInfo _CodePointTrie$1_EnclosingMethodInfo_ = {
	"jdk.internal.icu.util.CodePointTrie",
	nullptr,
	nullptr
};

$InnerClassInfo _CodePointTrie$1_InnerClassesInfo_[] = {
	{"jdk.internal.icu.util.CodePointTrie$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _CodePointTrie$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"jdk.internal.icu.util.CodePointTrie$1",
	"java.lang.Object",
	nullptr,
	_CodePointTrie$1_FieldInfo_,
	nullptr,
	nullptr,
	&_CodePointTrie$1_EnclosingMethodInfo_,
	_CodePointTrie$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.util.CodePointTrie"
};

$Object* allocate$CodePointTrie$1($Class* clazz) {
	return $of($alloc(CodePointTrie$1));
}

$ints* CodePointTrie$1::$SwitchMap$jdk$internal$icu$util$CodePointTrie$ValueWidth = nullptr;

void clinit$CodePointTrie$1($Class* class$) {
	$assignStatic(CodePointTrie$1::$SwitchMap$jdk$internal$icu$util$CodePointTrie$ValueWidth, $new($ints, $($CodePointTrie$ValueWidth::values())->length));
	{
		try {
			$nc(CodePointTrie$1::$SwitchMap$jdk$internal$icu$util$CodePointTrie$ValueWidth)->set($CodePointTrie$ValueWidth::BITS_16->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CodePointTrie$1::$SwitchMap$jdk$internal$icu$util$CodePointTrie$ValueWidth)->set($CodePointTrie$ValueWidth::BITS_32->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CodePointTrie$1::$SwitchMap$jdk$internal$icu$util$CodePointTrie$ValueWidth)->set($CodePointTrie$ValueWidth::BITS_8->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

CodePointTrie$1::CodePointTrie$1() {
}

$Class* CodePointTrie$1::load$($String* name, bool initialize) {
	$loadClass(CodePointTrie$1, name, initialize, &_CodePointTrie$1_ClassInfo_, clinit$CodePointTrie$1, allocate$CodePointTrie$1);
	return class$;
}

$Class* CodePointTrie$1::class$ = nullptr;

			} // util
		} // icu
	} // internal
} // jdk