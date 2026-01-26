#include <jdk/internal/icu/impl/NormalizerImpl$UTF16Plus.h>

#include <java/lang/CharSequence.h>
#include <jdk/internal/icu/impl/NormalizerImpl.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$MethodInfo _NormalizerImpl$UTF16Plus_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(NormalizerImpl$UTF16Plus, init$, void)},
	{"equal", "(Ljava/lang/CharSequence;IILjava/lang/CharSequence;II)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(NormalizerImpl$UTF16Plus, equal, bool, $CharSequence*, int32_t, int32_t, $CharSequence*, int32_t, int32_t)},
	{"isLeadSurrogate", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(NormalizerImpl$UTF16Plus, isLeadSurrogate, bool, int32_t)},
	{"isSurrogateLead", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(NormalizerImpl$UTF16Plus, isSurrogateLead, bool, int32_t)},
	{}
};

$InnerClassInfo _NormalizerImpl$UTF16Plus_InnerClassesInfo_[] = {
	{"jdk.internal.icu.impl.NormalizerImpl$UTF16Plus", "jdk.internal.icu.impl.NormalizerImpl", "UTF16Plus", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _NormalizerImpl$UTF16Plus_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.icu.impl.NormalizerImpl$UTF16Plus",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NormalizerImpl$UTF16Plus_MethodInfo_,
	nullptr,
	nullptr,
	_NormalizerImpl$UTF16Plus_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.impl.NormalizerImpl"
};

$Object* allocate$NormalizerImpl$UTF16Plus($Class* clazz) {
	return $of($alloc(NormalizerImpl$UTF16Plus));
}

void NormalizerImpl$UTF16Plus::init$() {
}

bool NormalizerImpl$UTF16Plus::isLeadSurrogate(int32_t c) {
	return ((int32_t)(c & (uint32_t)-1024)) == 0x0000D800;
}

bool NormalizerImpl$UTF16Plus::isSurrogateLead(int32_t c) {
	return ((int32_t)(c & (uint32_t)1024)) == 0;
}

bool NormalizerImpl$UTF16Plus::equal($CharSequence* s1, int32_t start1, int32_t limit1, $CharSequence* s2, int32_t start2, int32_t limit2) {
	if ((limit1 - start1) != (limit2 - start2)) {
		return false;
	}
	if (s1 == s2 && start1 == start2) {
		return true;
	}
	while (start1 < limit1) {
		char16_t var$0 = $nc(s1)->charAt(start1++);
		if (var$0 != $nc(s2)->charAt(start2++)) {
			return false;
		}
	}
	return true;
}

NormalizerImpl$UTF16Plus::NormalizerImpl$UTF16Plus() {
}

$Class* NormalizerImpl$UTF16Plus::load$($String* name, bool initialize) {
	$loadClass(NormalizerImpl$UTF16Plus, name, initialize, &_NormalizerImpl$UTF16Plus_ClassInfo_, allocate$NormalizerImpl$UTF16Plus);
	return class$;
}

$Class* NormalizerImpl$UTF16Plus::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk