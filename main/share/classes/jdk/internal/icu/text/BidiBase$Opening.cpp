#include <jdk/internal/icu/text/BidiBase$Opening.h>

#include <jdk/internal/icu/text/BidiBase.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BidiBase = ::jdk::internal::icu::text::BidiBase;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$FieldInfo _BidiBase$Opening_FieldInfo_[] = {
	{"position", "I", nullptr, 0, $field(BidiBase$Opening, position)},
	{"match", "I", nullptr, 0, $field(BidiBase$Opening, match)},
	{"contextPos", "I", nullptr, 0, $field(BidiBase$Opening, contextPos)},
	{"flags", "S", nullptr, 0, $field(BidiBase$Opening, flags)},
	{"contextDir", "B", nullptr, 0, $field(BidiBase$Opening, contextDir)},
	{}
};

$MethodInfo _BidiBase$Opening_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BidiBase$Opening::*)()>(&BidiBase$Opening::init$))},
	{}
};

$InnerClassInfo _BidiBase$Opening_InnerClassesInfo_[] = {
	{"jdk.internal.icu.text.BidiBase$Opening", "jdk.internal.icu.text.BidiBase", "Opening", $STATIC},
	{}
};

$ClassInfo _BidiBase$Opening_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.icu.text.BidiBase$Opening",
	"java.lang.Object",
	nullptr,
	_BidiBase$Opening_FieldInfo_,
	_BidiBase$Opening_MethodInfo_,
	nullptr,
	nullptr,
	_BidiBase$Opening_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.text.BidiBase"
};

$Object* allocate$BidiBase$Opening($Class* clazz) {
	return $of($alloc(BidiBase$Opening));
}

void BidiBase$Opening::init$() {
}

BidiBase$Opening::BidiBase$Opening() {
}

$Class* BidiBase$Opening::load$($String* name, bool initialize) {
	$loadClass(BidiBase$Opening, name, initialize, &_BidiBase$Opening_ClassInfo_, allocate$BidiBase$Opening);
	return class$;
}

$Class* BidiBase$Opening::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk