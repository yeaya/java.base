#ifndef _jdk_internal_icu_util_CodePointMap$StringIterator_h_
#define _jdk_internal_icu_util_CodePointMap$StringIterator_h_
//$ class jdk.internal.icu.util.CodePointMap$StringIterator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {
				class CodePointMap;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

class CodePointMap$StringIterator : public ::java::lang::Object {
	$class(CodePointMap$StringIterator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CodePointMap$StringIterator();
	void init$(::jdk::internal::icu::util::CodePointMap* this$0, ::java::lang::CharSequence* s, int32_t sIndex);
	int32_t getCodePoint();
	int32_t getIndex();
	int32_t getValue();
	virtual bool next();
	virtual bool previous();
	virtual void reset(::java::lang::CharSequence* s, int32_t sIndex);
	::jdk::internal::icu::util::CodePointMap* this$0 = nullptr;
	::java::lang::CharSequence* s = nullptr;
	int32_t sIndex = 0;
	int32_t c = 0;
	int32_t value = 0;
};

			} // util
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_util_CodePointMap$StringIterator_h_