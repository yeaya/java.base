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
using $BidiBase = ::jdk::internal::icu::text::BidiBase;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$FieldInfo _BidiBase$BidiPairedBracketType_FieldInfo_[] = {
	{"NONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BidiBase$BidiPairedBracketType, NONE)},
	{"OPEN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BidiBase$BidiPairedBracketType, OPEN)},
	{"CLOSE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BidiBase$BidiPairedBracketType, CLOSE)},
	{"COUNT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BidiBase$BidiPairedBracketType, COUNT)},
	{}
};

$InnerClassInfo _BidiBase$BidiPairedBracketType_InnerClassesInfo_[] = {
	{"jdk.internal.icu.text.BidiBase$BidiPairedBracketType", "jdk.internal.icu.text.BidiBase", "BidiPairedBracketType", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _BidiBase$BidiPairedBracketType_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.icu.text.BidiBase$BidiPairedBracketType",
	nullptr,
	nullptr,
	_BidiBase$BidiPairedBracketType_FieldInfo_,
	nullptr,
	nullptr,
	nullptr,
	_BidiBase$BidiPairedBracketType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.text.BidiBase"
};

$Object* allocate$BidiBase$BidiPairedBracketType($Class* clazz) {
	return $of($alloc(BidiBase$BidiPairedBracketType));
}

$Class* BidiBase$BidiPairedBracketType::load$($String* name, bool initialize) {
	$loadClass(BidiBase$BidiPairedBracketType, name, initialize, &_BidiBase$BidiPairedBracketType_ClassInfo_, allocate$BidiBase$BidiPairedBracketType);
	return class$;
}

$Class* BidiBase$BidiPairedBracketType::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk