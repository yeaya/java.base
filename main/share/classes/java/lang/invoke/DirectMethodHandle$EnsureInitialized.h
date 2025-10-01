#ifndef _java_lang_invoke_DirectMethodHandle$EnsureInitialized_h_
#define _java_lang_invoke_DirectMethodHandle$EnsureInitialized_h_
//$ class java.lang.invoke.DirectMethodHandle$EnsureInitialized
//$ extends java.lang.ClassValue

#include <java/lang/ClassValue.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace lang {
		namespace invoke {

class DirectMethodHandle$EnsureInitialized : public ::java::lang::ClassValue {
	$class(DirectMethodHandle$EnsureInitialized, 0, ::java::lang::ClassValue)
public:
	DirectMethodHandle$EnsureInitialized();
	void init$();
	virtual $Object* computeValue($Class* type) override;
	static ::java::lang::invoke::DirectMethodHandle$EnsureInitialized* INSTANCE;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("INSTANCE")

#endif // _java_lang_invoke_DirectMethodHandle$EnsureInitialized_h_