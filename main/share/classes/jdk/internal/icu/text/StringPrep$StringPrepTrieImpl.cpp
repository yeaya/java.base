#include <jdk/internal/icu/text/StringPrep$StringPrepTrieImpl.h>

#include <jdk/internal/icu/impl/CharTrie.h>
#include <jdk/internal/icu/text/StringPrep.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharTrie = ::jdk::internal::icu::impl::CharTrie;
using $Trie$DataManipulate = ::jdk::internal::icu::impl::Trie$DataManipulate;
using $StringPrep = ::jdk::internal::icu::text::StringPrep;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$FieldInfo _StringPrep$StringPrepTrieImpl_FieldInfo_[] = {
	{"sprepTrie", "Ljdk/internal/icu/impl/CharTrie;", nullptr, $PRIVATE, $field(StringPrep$StringPrepTrieImpl, sprepTrie)},
	{}
};

$MethodInfo _StringPrep$StringPrepTrieImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(StringPrep$StringPrepTrieImpl::*)()>(&StringPrep$StringPrepTrieImpl::init$))},
	{"getFoldingOffset", "(I)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StringPrep$StringPrepTrieImpl_InnerClassesInfo_[] = {
	{"jdk.internal.icu.text.StringPrep$StringPrepTrieImpl", "jdk.internal.icu.text.StringPrep", "StringPrepTrieImpl", $PRIVATE | $STATIC | $FINAL},
	{"jdk.internal.icu.impl.Trie$DataManipulate", "jdk.internal.icu.impl.Trie", "DataManipulate", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StringPrep$StringPrepTrieImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.icu.text.StringPrep$StringPrepTrieImpl",
	"java.lang.Object",
	"jdk.internal.icu.impl.Trie$DataManipulate",
	_StringPrep$StringPrepTrieImpl_FieldInfo_,
	_StringPrep$StringPrepTrieImpl_MethodInfo_,
	nullptr,
	nullptr,
	_StringPrep$StringPrepTrieImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.text.StringPrep"
};

$Object* allocate$StringPrep$StringPrepTrieImpl($Class* clazz) {
	return $of($alloc(StringPrep$StringPrepTrieImpl));
}

void StringPrep$StringPrepTrieImpl::init$() {
	$set(this, sprepTrie, nullptr);
}

int32_t StringPrep$StringPrepTrieImpl::getFoldingOffset(int32_t value) {
	return value;
}

StringPrep$StringPrepTrieImpl::StringPrep$StringPrepTrieImpl() {
}

$Class* StringPrep$StringPrepTrieImpl::load$($String* name, bool initialize) {
	$loadClass(StringPrep$StringPrepTrieImpl, name, initialize, &_StringPrep$StringPrepTrieImpl_ClassInfo_, allocate$StringPrep$StringPrepTrieImpl);
	return class$;
}

$Class* StringPrep$StringPrepTrieImpl::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk