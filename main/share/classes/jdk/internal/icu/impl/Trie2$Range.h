#ifndef _jdk_internal_icu_impl_Trie2$Range_h_
#define _jdk_internal_icu_impl_Trie2$Range_h_
//$ class jdk.internal.icu.impl.Trie2$Range
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

class Trie2$Range : public ::java::lang::Object {
	$class(Trie2$Range, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Trie2$Range();
	void init$();
	virtual bool equals(Object$* other) override;
	virtual int32_t hashCode() override;
	int32_t startCodePoint = 0;
	int32_t endCodePoint = 0;
	int32_t value = 0;
	bool leadSurrogate = false;
};

			} // impl
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_impl_Trie2$Range_h_