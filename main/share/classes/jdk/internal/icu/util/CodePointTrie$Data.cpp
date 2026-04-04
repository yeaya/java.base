#include <jdk/internal/icu/util/CodePointTrie$Data.h>
#include <java/io/DataOutputStream.h>
#include <jdk/internal/icu/util/CodePointTrie$ValueWidth.h>
#include <jdk/internal/icu/util/CodePointTrie.h>
#include <jcpp.h>

using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CodePointTrie$ValueWidth = ::jdk::internal::icu::util::CodePointTrie$ValueWidth;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

void CodePointTrie$Data::init$() {
}

CodePointTrie$Data::CodePointTrie$Data() {
}

$Class* CodePointTrie$Data::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CodePointTrie$Data, init$, void)},
		{"getDataLength", "()I", nullptr, $ABSTRACT, $virtualMethod(CodePointTrie$Data, getDataLength, int32_t)},
		{"getFromIndex", "(I)I", nullptr, $ABSTRACT, $virtualMethod(CodePointTrie$Data, getFromIndex, int32_t, int32_t)},
		{"getValueWidth", "()Ljdk/internal/icu/util/CodePointTrie$ValueWidth;", nullptr, $ABSTRACT, $virtualMethod(CodePointTrie$Data, getValueWidth, $CodePointTrie$ValueWidth*)},
		{"write", "(Ljava/io/DataOutputStream;)I", nullptr, $ABSTRACT, $virtualMethod(CodePointTrie$Data, write, int32_t, $DataOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.util.CodePointTrie$Data", "jdk.internal.icu.util.CodePointTrie", "Data", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"jdk.internal.icu.util.CodePointTrie$Data",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.icu.util.CodePointTrie"
	};
	$loadClass(CodePointTrie$Data, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CodePointTrie$Data);
	});
	return class$;
}

$Class* CodePointTrie$Data::class$ = nullptr;

			} // util
		} // icu
	} // internal
} // jdk