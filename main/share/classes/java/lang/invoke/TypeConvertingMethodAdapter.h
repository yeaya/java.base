#ifndef _java_lang_invoke_TypeConvertingMethodAdapter_h_
#define _java_lang_invoke_TypeConvertingMethodAdapter_h_
//$ class java.lang.invoke.TypeConvertingMethodAdapter
//$ extends jdk.internal.org.objectweb.asm.MethodVisitor

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>

#pragma push_macro("FROM_TYPE_SORT")
#undef FROM_TYPE_SORT
#pragma push_macro("FROM_WRAPPER_NAME")
#undef FROM_WRAPPER_NAME
#pragma push_macro("NAME_BOX_METHOD")
#undef NAME_BOX_METHOD
#pragma push_macro("NAME_OBJECT")
#undef NAME_OBJECT
#pragma push_macro("NUM_WRAPPERS")
#undef NUM_WRAPPERS
#pragma push_macro("WRAPPER_PREFIX")
#undef WRAPPER_PREFIX

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class Type;
				}
			}
		}
	}
}
namespace sun {
	namespace invoke {
		namespace util {
			class Wrapper;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class TypeConvertingMethodAdapter : public ::jdk::internal::org::objectweb::asm$::MethodVisitor {
	$class(TypeConvertingMethodAdapter, 0, ::jdk::internal::org::objectweb::asm$::MethodVisitor)
public:
	TypeConvertingMethodAdapter();
	void init$(::jdk::internal::org::objectweb::asm$::MethodVisitor* mv);
	virtual void box(::sun::invoke::util::Wrapper* w);
	virtual void boxIfTypePrimitive(::jdk::internal::org::objectweb::asm$::Type* t);
	static $String* boxingDescriptor(::sun::invoke::util::Wrapper* w);
	virtual void cast($String* ds, $String* dt);
	virtual void convertType($Class* arg, $Class* target, $Class* functional);
	$String* descriptorToName($String* desc);
	static int32_t hashWrapperName($String* xn);
	virtual void iconst(int32_t cst);
	static void initWidening(::sun::invoke::util::Wrapper* to, int32_t opcode, $Array<::sun::invoke::util::Wrapper>* from);
	::sun::invoke::util::Wrapper* toWrapper($String* desc);
	virtual void unbox($String* sname, ::sun::invoke::util::Wrapper* wt);
	static $String* unboxMethod(::sun::invoke::util::Wrapper* w);
	static $String* unboxingDescriptor(::sun::invoke::util::Wrapper* w);
	virtual void widen(::sun::invoke::util::Wrapper* ws, ::sun::invoke::util::Wrapper* wt);
	static $String* wrapperName(::sun::invoke::util::Wrapper* w);
	::sun::invoke::util::Wrapper* wrapperOrNullFromDescriptor($String* desc);
	static bool $assertionsDisabled;
	static const int32_t NUM_WRAPPERS = 10; // Wrapper.COUNT
	static $String* NAME_OBJECT;
	static $String* WRAPPER_PREFIX;
	static $String* NAME_BOX_METHOD;
	static $Array<int32_t, 2>* wideningOpcodes;
	static $Array<::sun::invoke::util::Wrapper>* FROM_WRAPPER_NAME;
	static $Array<::sun::invoke::util::Wrapper>* FROM_TYPE_SORT;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FROM_TYPE_SORT")
#pragma pop_macro("FROM_WRAPPER_NAME")
#pragma pop_macro("NAME_BOX_METHOD")
#pragma pop_macro("NAME_OBJECT")
#pragma pop_macro("NUM_WRAPPERS")
#pragma pop_macro("WRAPPER_PREFIX")

#endif // _java_lang_invoke_TypeConvertingMethodAdapter_h_