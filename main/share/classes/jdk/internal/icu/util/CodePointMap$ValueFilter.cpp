#include <jdk/internal/icu/util/CodePointMap$ValueFilter.h>

#include <jdk/internal/icu/util/CodePointMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

$MethodInfo _CodePointMap$ValueFilter_MethodInfo_[] = {
	{"apply", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CodePointMap$ValueFilter, apply, int32_t, int32_t)},
	{}
};

$InnerClassInfo _CodePointMap$ValueFilter_InnerClassesInfo_[] = {
	{"jdk.internal.icu.util.CodePointMap$ValueFilter", "jdk.internal.icu.util.CodePointMap", "ValueFilter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CodePointMap$ValueFilter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.icu.util.CodePointMap$ValueFilter",
	nullptr,
	nullptr,
	nullptr,
	_CodePointMap$ValueFilter_MethodInfo_,
	nullptr,
	nullptr,
	_CodePointMap$ValueFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.util.CodePointMap"
};

$Object* allocate$CodePointMap$ValueFilter($Class* clazz) {
	return $of($alloc(CodePointMap$ValueFilter));
}

$Class* CodePointMap$ValueFilter::load$($String* name, bool initialize) {
	$loadClass(CodePointMap$ValueFilter, name, initialize, &_CodePointMap$ValueFilter_ClassInfo_, allocate$CodePointMap$ValueFilter);
	return class$;
}

$Class* CodePointMap$ValueFilter::class$ = nullptr;

			} // util
		} // icu
	} // internal
} // jdk