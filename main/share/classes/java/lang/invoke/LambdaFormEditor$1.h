#ifndef _java_lang_invoke_LambdaFormEditor$1_h_
#define _java_lang_invoke_LambdaFormEditor$1_h_
//$ class java.lang.invoke.LambdaFormEditor$1
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

namespace java {
	namespace lang {
		namespace invoke {
			class LambdaForm$Name;
			class LambdaFormEditor;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class LambdaFormEditor$1 : public ::java::util::Comparator {
	$class(LambdaFormEditor$1, $NO_CLASS_INIT, ::java::util::Comparator)
public:
	LambdaFormEditor$1();
	void init$(::java::lang::invoke::LambdaFormEditor* this$0);
	virtual int32_t compare(::java::lang::invoke::LambdaForm$Name* n1, ::java::lang::invoke::LambdaForm$Name* n2);
	virtual int32_t compare(Object$* n1, Object$* n2) override;
	::java::lang::invoke::LambdaFormEditor* this$0 = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_LambdaFormEditor$1_h_