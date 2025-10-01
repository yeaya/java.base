#ifndef _java_lang_ref_Cleaner$1_h_
#define _java_lang_ref_Cleaner$1_h_
//$ class java.lang.ref.Cleaner$1
//$ extends java.util.function.Function

#include <java/util/function/Function.h>

namespace java {
	namespace lang {
		namespace ref {
			class Cleaner;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace ref {
			class CleanerImpl;
		}
	}
}

namespace java {
	namespace lang {
		namespace ref {

class Cleaner$1 : public ::java::util::function::Function {
	$class(Cleaner$1, $NO_CLASS_INIT, ::java::util::function::Function)
public:
	Cleaner$1();
	void init$();
	virtual ::jdk::internal::ref::CleanerImpl* apply(::java::lang::ref::Cleaner* cleaner);
	virtual $Object* apply(Object$* cleaner) override;
};

		} // ref
	} // lang
} // java

#endif // _java_lang_ref_Cleaner$1_h_