#ifndef _jdk_internal_reflect_Label_h_
#define _jdk_internal_reflect_Label_h_
//$ class jdk.internal.reflect.Label
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace jdk {
	namespace internal {
		namespace reflect {
			class ClassFileAssembler;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace reflect {

class Label : public ::java::lang::Object {
	$class(Label, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Label();
	void init$();
	virtual void add(::jdk::internal::reflect::ClassFileAssembler* asm$, int16_t instrBCI, int16_t patchBCI, int32_t stackDepth);
	virtual void bind();
	::java::util::List* patches = nullptr;
};

		} // reflect
	} // internal
} // jdk

#endif // _jdk_internal_reflect_Label_h_