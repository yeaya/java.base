#ifndef _jdk_internal_icu_util_CodePointMap_h_
#define _jdk_internal_icu_util_CodePointMap_h_
//$ class jdk.internal.icu.util.CodePointMap
//$ extends java.lang.Iterable

#include <java/lang/Iterable.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace util {
		class Iterator;
	}
}
namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {
				class CodePointMap$Range;
				class CodePointMap$RangeOption;
				class CodePointMap$StringIterator;
				class CodePointMap$ValueFilter;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

class CodePointMap : public ::java::lang::Iterable {
	$class(CodePointMap, 0, ::java::lang::Iterable)
public:
	CodePointMap();
	void init$();
	virtual int32_t get(int32_t c) {return 0;}
	virtual bool getRange(int32_t start, ::jdk::internal::icu::util::CodePointMap$ValueFilter* filter, ::jdk::internal::icu::util::CodePointMap$Range* range) {return false;}
	virtual bool getRange(int32_t start, ::jdk::internal::icu::util::CodePointMap$RangeOption* option, int32_t surrogateValue, ::jdk::internal::icu::util::CodePointMap$ValueFilter* filter, ::jdk::internal::icu::util::CodePointMap$Range* range);
	virtual ::java::util::Iterator* iterator() override;
	virtual ::jdk::internal::icu::util::CodePointMap$StringIterator* stringIterator(::java::lang::CharSequence* s, int32_t sIndex);
	static bool $assertionsDisabled;
};

			} // util
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_util_CodePointMap_h_