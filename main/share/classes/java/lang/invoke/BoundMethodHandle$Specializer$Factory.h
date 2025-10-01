#ifndef _java_lang_invoke_BoundMethodHandle$Specializer$Factory_h_
#define _java_lang_invoke_BoundMethodHandle$Specializer$Factory_h_
//$ class java.lang.invoke.BoundMethodHandle$Specializer$Factory
//$ extends java.lang.invoke.ClassSpecializer$Factory

#include <java/lang/invoke/ClassSpecializer$Factory.h>

namespace java {
	namespace lang {
		namespace invoke {
			class BoundMethodHandle$Specializer;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class BoundMethodHandle$Specializer$Factory : public ::java::lang::invoke::ClassSpecializer$Factory {
	$class(BoundMethodHandle$Specializer$Factory, $NO_CLASS_INIT, ::java::lang::invoke::ClassSpecializer$Factory)
public:
	BoundMethodHandle$Specializer$Factory();
	void init$(::java::lang::invoke::BoundMethodHandle$Specializer* this$0);
	virtual $String* chooseFieldName($Class* type, int32_t index) override;
	::java::lang::invoke::BoundMethodHandle$Specializer* this$0 = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_BoundMethodHandle$Specializer$Factory_h_