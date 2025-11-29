#include <jdk/internal/icu/impl/Trie2$ValueMapper.h>

#include <jdk/internal/icu/impl/Trie2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$MethodInfo _Trie2$ValueMapper_MethodInfo_[] = {
	{"map", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Trie2$ValueMapper_InnerClassesInfo_[] = {
	{"jdk.internal.icu.impl.Trie2$ValueMapper", "jdk.internal.icu.impl.Trie2", "ValueMapper", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Trie2$ValueMapper_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.icu.impl.Trie2$ValueMapper",
	nullptr,
	nullptr,
	nullptr,
	_Trie2$ValueMapper_MethodInfo_,
	nullptr,
	nullptr,
	_Trie2$ValueMapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.impl.Trie2"
};

$Object* allocate$Trie2$ValueMapper($Class* clazz) {
	return $of($alloc(Trie2$ValueMapper));
}

$Class* Trie2$ValueMapper::load$($String* name, bool initialize) {
	$loadClass(Trie2$ValueMapper, name, initialize, &_Trie2$ValueMapper_ClassInfo_, allocate$Trie2$ValueMapper);
	return class$;
}

$Class* Trie2$ValueMapper::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk