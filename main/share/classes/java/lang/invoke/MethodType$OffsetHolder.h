#ifndef _java_lang_invoke_MethodType$OffsetHolder_h_
#define _java_lang_invoke_MethodType$OffsetHolder_h_
//$ class java.lang.invoke.MethodType$OffsetHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace invoke {

class MethodType$OffsetHolder : public ::java::lang::Object {
	$class(MethodType$OffsetHolder, 0, ::java::lang::Object)
public:
	MethodType$OffsetHolder();
	void init$();
	static int64_t rtypeOffset;
	static int64_t ptypesOffset;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_MethodType$OffsetHolder_h_