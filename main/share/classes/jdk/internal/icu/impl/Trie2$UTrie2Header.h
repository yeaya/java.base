#ifndef _jdk_internal_icu_impl_Trie2$UTrie2Header_h_
#define _jdk_internal_icu_impl_Trie2$UTrie2Header_h_
//$ class jdk.internal.icu.impl.Trie2$UTrie2Header
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

class Trie2$UTrie2Header : public ::java::lang::Object {
	$class(Trie2$UTrie2Header, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Trie2$UTrie2Header();
	void init$();
	int32_t signature = 0;
	int32_t options = 0;
	int32_t indexLength = 0;
	int32_t shiftedDataLength = 0;
	int32_t index2NullOffset = 0;
	int32_t dataNullOffset = 0;
	int32_t shiftedHighStart = 0;
};

			} // impl
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_impl_Trie2$UTrie2Header_h_