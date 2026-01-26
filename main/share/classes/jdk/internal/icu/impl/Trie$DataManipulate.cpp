#include <jdk/internal/icu/impl/Trie$DataManipulate.h>

#include <jdk/internal/icu/impl/Trie.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$MethodInfo _Trie$DataManipulate_MethodInfo_[] = {
	{"getFoldingOffset", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Trie$DataManipulate, getFoldingOffset, int32_t, int32_t)},
	{}
};

$InnerClassInfo _Trie$DataManipulate_InnerClassesInfo_[] = {
	{"jdk.internal.icu.impl.Trie$DataManipulate", "jdk.internal.icu.impl.Trie", "DataManipulate", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Trie$DataManipulate_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.icu.impl.Trie$DataManipulate",
	nullptr,
	nullptr,
	nullptr,
	_Trie$DataManipulate_MethodInfo_,
	nullptr,
	nullptr,
	_Trie$DataManipulate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.impl.Trie"
};

$Object* allocate$Trie$DataManipulate($Class* clazz) {
	return $of($alloc(Trie$DataManipulate));
}

$Class* Trie$DataManipulate::load$($String* name, bool initialize) {
	$loadClass(Trie$DataManipulate, name, initialize, &_Trie$DataManipulate_ClassInfo_, allocate$Trie$DataManipulate);
	return class$;
}

$Class* Trie$DataManipulate::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk