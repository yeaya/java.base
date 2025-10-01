#ifndef _jdk_internal_icu_util_CodePointMap$RangeIterator_h_
#define _jdk_internal_icu_util_CodePointMap$RangeIterator_h_
//$ class jdk.internal.icu.util.CodePointMap$RangeIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {
				class CodePointMap;
				class CodePointMap$Range;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

class CodePointMap$RangeIterator : public ::java::util::Iterator {
	$class(CodePointMap$RangeIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	CodePointMap$RangeIterator();
	void init$(::jdk::internal::icu::util::CodePointMap* this$0);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::jdk::internal::icu::util::CodePointMap* this$0 = nullptr;
	::jdk::internal::icu::util::CodePointMap$Range* range = nullptr;
};

			} // util
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_util_CodePointMap$RangeIterator_h_