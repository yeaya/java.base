#ifndef _jdk_internal_util_Preconditions$1_h_
#define _jdk_internal_util_Preconditions$1_h_
//$ class jdk.internal.util.Preconditions$1
//$ extends java.util.function.BiFunction

#include <java/util/function/BiFunction.h>

namespace java {
	namespace lang {
		class RuntimeException;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Function;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace util {

class Preconditions$1 : public ::java::util::function::BiFunction {
	$class(Preconditions$1, $NO_CLASS_INIT, ::java::util::function::BiFunction)
public:
	Preconditions$1();
	void init$(::java::util::function::Function* val$f);
	virtual ::java::lang::RuntimeException* apply($String* checkKind, ::java::util::List* args);
	virtual $Object* apply(Object$* checkKind, Object$* args) override;
	::java::util::function::Function* val$f = nullptr;
};

		} // util
	} // internal
} // jdk

#endif // _jdk_internal_util_Preconditions$1_h_