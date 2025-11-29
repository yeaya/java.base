#include <jdk/internal/icu/text/NormalizerBase$Unicode32.h>

#include <jdk/internal/icu/text/NormalizerBase.h>
#include <jdk/internal/icu/text/UnicodeSet.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnicodeSet = ::jdk::internal::icu::text::UnicodeSet;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$FieldInfo _NormalizerBase$Unicode32_FieldInfo_[] = {
	{"INSTANCE", "Ljdk/internal/icu/text/UnicodeSet;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NormalizerBase$Unicode32, INSTANCE)},
	{}
};

$MethodInfo _NormalizerBase$Unicode32_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(NormalizerBase$Unicode32::*)()>(&NormalizerBase$Unicode32::init$))},
	{}
};

$InnerClassInfo _NormalizerBase$Unicode32_InnerClassesInfo_[] = {
	{"jdk.internal.icu.text.NormalizerBase$Unicode32", "jdk.internal.icu.text.NormalizerBase", "Unicode32", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _NormalizerBase$Unicode32_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.icu.text.NormalizerBase$Unicode32",
	"java.lang.Object",
	nullptr,
	_NormalizerBase$Unicode32_FieldInfo_,
	_NormalizerBase$Unicode32_MethodInfo_,
	nullptr,
	nullptr,
	_NormalizerBase$Unicode32_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.text.NormalizerBase"
};

$Object* allocate$NormalizerBase$Unicode32($Class* clazz) {
	return $of($alloc(NormalizerBase$Unicode32));
}

$UnicodeSet* NormalizerBase$Unicode32::INSTANCE = nullptr;

void NormalizerBase$Unicode32::init$() {
}

void clinit$NormalizerBase$Unicode32($Class* class$) {
	$assignStatic(NormalizerBase$Unicode32::INSTANCE, $$new($UnicodeSet, "[:age=3.2:]"_s)->freeze());
}

NormalizerBase$Unicode32::NormalizerBase$Unicode32() {
}

$Class* NormalizerBase$Unicode32::load$($String* name, bool initialize) {
	$loadClass(NormalizerBase$Unicode32, name, initialize, &_NormalizerBase$Unicode32_ClassInfo_, clinit$NormalizerBase$Unicode32, allocate$NormalizerBase$Unicode32);
	return class$;
}

$Class* NormalizerBase$Unicode32::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk