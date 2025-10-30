#ifndef _java_lang_invoke_ResolvedMethodName_h_
#define _java_lang_invoke_ResolvedMethodName_h_
//$ class java.lang.invoke.ResolvedMethodName
//$ extends java.lang.Object

#include <java/lang/Object.h>
namespace java {
	namespace lang {
		namespace reflect {
			class Executable;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class ResolvedMethodName : public ::java::lang::Object {
	$class(ResolvedMethodName, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ResolvedMethodName();
	void init$();
public:
	::java::lang::reflect::Executable* vmtarget = nullptr;
	::java::lang::Class* vmholder = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_ResolvedMethodName_h_