#ifndef _java_lang_invoke_ConstantGroup$1Impl_h_
#define _java_lang_invoke_ConstantGroup$1Impl_h_
//$ class java.lang.invoke.ConstantGroup$1Impl
//$ extends java.lang.invoke.AbstractConstantGroup$WithCache

#include <java/lang/invoke/AbstractConstantGroup$WithCache.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace java {
	namespace util {
		namespace function {
			class IntFunction;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class ConstantGroup$1Impl : public ::java::lang::invoke::AbstractConstantGroup$WithCache {
	$class(ConstantGroup$1Impl, $NO_CLASS_INIT, ::java::lang::invoke::AbstractConstantGroup$WithCache)
public:
	ConstantGroup$1Impl();
	void init$(::java::util::List* val$constants, Object$* val$ifNotPresent, ::java::util::function::IntFunction* val$constantProvider);
	virtual $Object* fillCache(int32_t index) override;
	::java::util::function::IntFunction* val$constantProvider = nullptr;
	$Object* val$ifNotPresent = nullptr;
	::java::util::List* val$constants = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_ConstantGroup$1Impl_h_