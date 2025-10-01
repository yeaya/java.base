#ifndef _jdk_internal_icu_impl_Trie$DataManipulate_h_
#define _jdk_internal_icu_impl_Trie$DataManipulate_h_
//$ interface jdk.internal.icu.impl.Trie$DataManipulate
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

class $import Trie$DataManipulate : public ::java::lang::Object {
	$interface(Trie$DataManipulate, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getFoldingOffset(int32_t value) {return 0;}
};

			} // impl
		} // icu
	} // internal
} // jdk

#endif // _jdk_internal_icu_impl_Trie$DataManipulate_h_