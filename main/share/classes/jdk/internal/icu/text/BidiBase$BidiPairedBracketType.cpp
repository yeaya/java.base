#include <jdk/internal/icu/text/BidiBase$BidiPairedBracketType.h>
#include <jdk/internal/icu/text/BidiBase.h>
#include <jcpp.h>

#undef CLOSE
#undef COUNT
#undef NONE
#undef OPEN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$Class* BidiBase$BidiPairedBracketType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BidiBase$BidiPairedBracketType, NONE)},
		{"OPEN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BidiBase$BidiPairedBracketType, OPEN)},
		{"CLOSE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BidiBase$BidiPairedBracketType, CLOSE)},
		{"COUNT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BidiBase$BidiPairedBracketType, COUNT)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.text.BidiBase$BidiPairedBracketType", "jdk.internal.icu.text.BidiBase", "BidiPairedBracketType", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.icu.text.BidiBase$BidiPairedBracketType",
		nullptr,
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.icu.text.BidiBase"
	};
	$loadClass(BidiBase$BidiPairedBracketType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BidiBase$BidiPairedBracketType);
	});
	return class$;
}

$Class* BidiBase$BidiPairedBracketType::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk