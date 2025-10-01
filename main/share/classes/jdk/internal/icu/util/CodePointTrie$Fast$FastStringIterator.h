#ifndef _jdk_internal_icu_util_CodePointTrie$Fast$FastStringIterator_h_
#define _jdk_internal_icu_util_CodePointTrie$Fast$FastStringIterator_h_
//$ class jdk.internal.icu.util.CodePointTrie$Fast$FastStringIterator
//$ extends jdk.internal.icu.util.CodePointMap$StringIterator

#include <jdk/internal/icu/util/CodePointMap$StringIterator.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {
				class CodePointTrie$Fast;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

class CodePointTrie$Fast$FastStringIterator : public ::jdk::internal::icu::util::CodePointMap$StringIterator {
	$class(CodePointTrie$Fast$FastStringIterator, $NO_CLASS_INIT, ::jdk::internal::icu::util::CodePointMap$StringIterator)
public:
	CodePointTrie$Fast$FastStringIterator();
	void init$(::jdk::internal::icu::util::CodePointTrie$Fast* this$0, ::java::lang::CharSequence* s, int32_t sIndex);
	virtual bool next() override;
	virtual bool previous() override;
	::jdk::internal::icu::util::CodePointTrie$Fast* this$0 = nullptr;
};

			} // util
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_util_CodePointTrie$Fast$FastStringIterator_h_