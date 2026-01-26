#include <jdk/internal/icu/impl/Trie2$1.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$MethodInfo _Trie2$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Trie2$1, init$, void)},
	{"map", "(I)I", nullptr, $PUBLIC, $virtualMethod(Trie2$1, map, int32_t, int32_t)},
	{}
};

$EnclosingMethodInfo _Trie2$1_EnclosingMethodInfo_ = {
	"jdk.internal.icu.impl.Trie2",
	nullptr,
	nullptr
};

$InnerClassInfo _Trie2$1_InnerClassesInfo_[] = {
	{"jdk.internal.icu.impl.Trie2$1", nullptr, nullptr, 0},
	{"jdk.internal.icu.impl.Trie2$ValueMapper", "jdk.internal.icu.impl.Trie2", "ValueMapper", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Trie2$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.icu.impl.Trie2$1",
	"java.lang.Object",
	"jdk.internal.icu.impl.Trie2$ValueMapper",
	nullptr,
	_Trie2$1_MethodInfo_,
	nullptr,
	&_Trie2$1_EnclosingMethodInfo_,
	_Trie2$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.impl.Trie2"
};

$Object* allocate$Trie2$1($Class* clazz) {
	return $of($alloc(Trie2$1));
}

void Trie2$1::init$() {
}

int32_t Trie2$1::map(int32_t in) {
	return in;
}

Trie2$1::Trie2$1() {
}

$Class* Trie2$1::load$($String* name, bool initialize) {
	$loadClass(Trie2$1, name, initialize, &_Trie2$1_ClassInfo_, allocate$Trie2$1);
	return class$;
}

$Class* Trie2$1::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk