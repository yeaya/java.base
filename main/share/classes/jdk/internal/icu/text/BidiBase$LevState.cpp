#include <jdk/internal/icu/text/BidiBase$LevState.h>

#include <jdk/internal/icu/text/BidiBase.h>
#include <jcpp.h>

using $byteArray2 = $Array<int8_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BidiBase = ::jdk::internal::icu::text::BidiBase;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$FieldInfo _BidiBase$LevState_FieldInfo_[] = {
	{"impTab", "[[B", nullptr, 0, $field(BidiBase$LevState, impTab)},
	{"impAct", "[S", nullptr, 0, $field(BidiBase$LevState, impAct)},
	{"startON", "I", nullptr, 0, $field(BidiBase$LevState, startON)},
	{"startL2EN", "I", nullptr, 0, $field(BidiBase$LevState, startL2EN)},
	{"lastStrongRTL", "I", nullptr, 0, $field(BidiBase$LevState, lastStrongRTL)},
	{"runStart", "I", nullptr, 0, $field(BidiBase$LevState, runStart)},
	{"state", "S", nullptr, 0, $field(BidiBase$LevState, state)},
	{"runLevel", "B", nullptr, 0, $field(BidiBase$LevState, runLevel)},
	{}
};

$MethodInfo _BidiBase$LevState_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(BidiBase$LevState::*)()>(&BidiBase$LevState::init$))},
	{}
};

$InnerClassInfo _BidiBase$LevState_InnerClassesInfo_[] = {
	{"jdk.internal.icu.text.BidiBase$LevState", "jdk.internal.icu.text.BidiBase", "LevState", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BidiBase$LevState_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.icu.text.BidiBase$LevState",
	"java.lang.Object",
	nullptr,
	_BidiBase$LevState_FieldInfo_,
	_BidiBase$LevState_MethodInfo_,
	nullptr,
	nullptr,
	_BidiBase$LevState_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.text.BidiBase"
};

$Object* allocate$BidiBase$LevState($Class* clazz) {
	return $of($alloc(BidiBase$LevState));
}

void BidiBase$LevState::init$() {
}

BidiBase$LevState::BidiBase$LevState() {
}

$Class* BidiBase$LevState::load$($String* name, bool initialize) {
	$loadClass(BidiBase$LevState, name, initialize, &_BidiBase$LevState_ClassInfo_, allocate$BidiBase$LevState);
	return class$;
}

$Class* BidiBase$LevState::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk