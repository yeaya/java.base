#include <jdk/internal/icu/text/StringPrep$StringPrepTrieImpl.h>
#include <jdk/internal/icu/impl/CharTrie.h>
#include <jdk/internal/icu/text/StringPrep.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

void StringPrep$StringPrepTrieImpl::init$() {
	$set(this, sprepTrie, nullptr);
}

int32_t StringPrep$StringPrepTrieImpl::getFoldingOffset(int32_t value) {
	return value;
}

StringPrep$StringPrepTrieImpl::StringPrep$StringPrepTrieImpl() {
}

$Class* StringPrep$StringPrepTrieImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sprepTrie", "Ljdk/internal/icu/impl/CharTrie;", nullptr, $PRIVATE, $field(StringPrep$StringPrepTrieImpl, sprepTrie)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(StringPrep$StringPrepTrieImpl, init$, void)},
		{"getFoldingOffset", "(I)I", nullptr, $PUBLIC, $virtualMethod(StringPrep$StringPrepTrieImpl, getFoldingOffset, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.text.StringPrep$StringPrepTrieImpl", "jdk.internal.icu.text.StringPrep", "StringPrepTrieImpl", $PRIVATE | $STATIC | $FINAL},
		{"jdk.internal.icu.impl.Trie$DataManipulate", "jdk.internal.icu.impl.Trie", "DataManipulate", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.icu.text.StringPrep$StringPrepTrieImpl",
		"java.lang.Object",
		"jdk.internal.icu.impl.Trie$DataManipulate",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.icu.text.StringPrep"
	};
	$loadClass(StringPrep$StringPrepTrieImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StringPrep$StringPrepTrieImpl);
	});
	return class$;
}

$Class* StringPrep$StringPrepTrieImpl::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk