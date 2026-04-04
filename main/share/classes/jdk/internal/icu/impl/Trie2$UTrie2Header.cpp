#include <jdk/internal/icu/impl/Trie2$UTrie2Header.h>
#include <jdk/internal/icu/impl/Trie2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

void Trie2$UTrie2Header::init$() {
}

Trie2$UTrie2Header::Trie2$UTrie2Header() {
}

$Class* Trie2$UTrie2Header::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"signature", "I", nullptr, 0, $field(Trie2$UTrie2Header, signature)},
		{"options", "I", nullptr, 0, $field(Trie2$UTrie2Header, options)},
		{"indexLength", "I", nullptr, 0, $field(Trie2$UTrie2Header, indexLength)},
		{"shiftedDataLength", "I", nullptr, 0, $field(Trie2$UTrie2Header, shiftedDataLength)},
		{"index2NullOffset", "I", nullptr, 0, $field(Trie2$UTrie2Header, index2NullOffset)},
		{"dataNullOffset", "I", nullptr, 0, $field(Trie2$UTrie2Header, dataNullOffset)},
		{"shiftedHighStart", "I", nullptr, 0, $field(Trie2$UTrie2Header, shiftedHighStart)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Trie2$UTrie2Header, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.impl.Trie2$UTrie2Header", "jdk.internal.icu.impl.Trie2", "UTrie2Header", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.icu.impl.Trie2$UTrie2Header",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.icu.impl.Trie2"
	};
	$loadClass(Trie2$UTrie2Header, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Trie2$UTrie2Header);
	});
	return class$;
}

$Class* Trie2$UTrie2Header::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk