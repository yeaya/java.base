#include <jdk/internal/icu/text/Replaceable.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$MethodInfo _Replaceable_MethodInfo_[] = {
	{"charAt", "(I)C", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Replaceable, charAt, char16_t, int32_t)},
	{"getChars", "(II[CI)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Replaceable, getChars, void, int32_t, int32_t, $chars*, int32_t)},
	{"length", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Replaceable, length, int32_t)},
	{}
};

$ClassInfo _Replaceable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.icu.text.Replaceable",
	nullptr,
	nullptr,
	nullptr,
	_Replaceable_MethodInfo_
};

$Object* allocate$Replaceable($Class* clazz) {
	return $of($alloc(Replaceable));
}

$Class* Replaceable::load$($String* name, bool initialize) {
	$loadClass(Replaceable, name, initialize, &_Replaceable_ClassInfo_, allocate$Replaceable);
	return class$;
}

$Class* Replaceable::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk