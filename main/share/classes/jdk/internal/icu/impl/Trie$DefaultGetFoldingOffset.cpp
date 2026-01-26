#include <jdk/internal/icu/impl/Trie$DefaultGetFoldingOffset.h>

#include <jdk/internal/icu/impl/Trie.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$MethodInfo _Trie$DefaultGetFoldingOffset_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(Trie$DefaultGetFoldingOffset, init$, void)},
	{"getFoldingOffset", "(I)I", nullptr, $PUBLIC, $virtualMethod(Trie$DefaultGetFoldingOffset, getFoldingOffset, int32_t, int32_t)},
	{}
};

$InnerClassInfo _Trie$DefaultGetFoldingOffset_InnerClassesInfo_[] = {
	{"jdk.internal.icu.impl.Trie$DefaultGetFoldingOffset", "jdk.internal.icu.impl.Trie", "DefaultGetFoldingOffset", $PRIVATE | $STATIC},
	{"jdk.internal.icu.impl.Trie$DataManipulate", "jdk.internal.icu.impl.Trie", "DataManipulate", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Trie$DefaultGetFoldingOffset_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.icu.impl.Trie$DefaultGetFoldingOffset",
	"java.lang.Object",
	"jdk.internal.icu.impl.Trie$DataManipulate",
	nullptr,
	_Trie$DefaultGetFoldingOffset_MethodInfo_,
	nullptr,
	nullptr,
	_Trie$DefaultGetFoldingOffset_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.impl.Trie"
};

$Object* allocate$Trie$DefaultGetFoldingOffset($Class* clazz) {
	return $of($alloc(Trie$DefaultGetFoldingOffset));
}

void Trie$DefaultGetFoldingOffset::init$() {
}

int32_t Trie$DefaultGetFoldingOffset::getFoldingOffset(int32_t value) {
	return value;
}

Trie$DefaultGetFoldingOffset::Trie$DefaultGetFoldingOffset() {
}

$Class* Trie$DefaultGetFoldingOffset::load$($String* name, bool initialize) {
	$loadClass(Trie$DefaultGetFoldingOffset, name, initialize, &_Trie$DefaultGetFoldingOffset_ClassInfo_, allocate$Trie$DefaultGetFoldingOffset);
	return class$;
}

$Class* Trie$DefaultGetFoldingOffset::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk