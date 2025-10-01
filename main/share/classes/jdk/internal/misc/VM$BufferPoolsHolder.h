#ifndef _jdk_internal_misc_VM$BufferPoolsHolder_h_
#define _jdk_internal_misc_VM$BufferPoolsHolder_h_
//$ class jdk.internal.misc.VM$BufferPoolsHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("BUFFER_POOLS")
#undef BUFFER_POOLS

namespace java {
	namespace util {
		class List;
	}
}

namespace jdk {
	namespace internal {
		namespace misc {

class VM$BufferPoolsHolder : public ::java::lang::Object {
	$class(VM$BufferPoolsHolder, 0, ::java::lang::Object)
public:
	VM$BufferPoolsHolder();
	void init$();
	static ::java::util::List* BUFFER_POOLS;
};

		} // misc
	} // internal
} // jdk

#pragma pop_macro("BUFFER_POOLS")

#endif // _jdk_internal_misc_VM$BufferPoolsHolder_h_