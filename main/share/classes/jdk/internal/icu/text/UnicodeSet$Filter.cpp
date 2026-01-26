#include <jdk/internal/icu/text/UnicodeSet$Filter.h>

#include <jdk/internal/icu/text/UnicodeSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$MethodInfo _UnicodeSet$Filter_MethodInfo_[] = {
	{"contains", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UnicodeSet$Filter, contains, bool, int32_t)},
	{}
};

$InnerClassInfo _UnicodeSet$Filter_InnerClassesInfo_[] = {
	{"jdk.internal.icu.text.UnicodeSet$Filter", "jdk.internal.icu.text.UnicodeSet", "Filter", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _UnicodeSet$Filter_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"jdk.internal.icu.text.UnicodeSet$Filter",
	nullptr,
	nullptr,
	nullptr,
	_UnicodeSet$Filter_MethodInfo_,
	nullptr,
	nullptr,
	_UnicodeSet$Filter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.text.UnicodeSet"
};

$Object* allocate$UnicodeSet$Filter($Class* clazz) {
	return $of($alloc(UnicodeSet$Filter));
}

$Class* UnicodeSet$Filter::load$($String* name, bool initialize) {
	$loadClass(UnicodeSet$Filter, name, initialize, &_UnicodeSet$Filter_ClassInfo_, allocate$UnicodeSet$Filter);
	return class$;
}

$Class* UnicodeSet$Filter::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk