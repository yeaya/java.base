#ifndef _jdk_internal_loader_BuiltinClassLoader$5_h_
#define _jdk_internal_loader_BuiltinClassLoader$5_h_
//$ class jdk.internal.loader.BuiltinClassLoader$5
//$ extends java.util.function.Function

#include <java/util/function/Function.h>

namespace java {
	namespace lang {
		namespace module {
			class ModuleReader;
			class ModuleReference;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace loader {
			class BuiltinClassLoader;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace loader {

class BuiltinClassLoader$5 : public ::java::util::function::Function {
	$class(BuiltinClassLoader$5, $NO_CLASS_INIT, ::java::util::function::Function)
public:
	BuiltinClassLoader$5();
	void init$(::jdk::internal::loader::BuiltinClassLoader* this$0, ::java::lang::module::ModuleReference* val$mref);
	virtual ::java::lang::module::ModuleReader* apply(::java::lang::module::ModuleReference* moduleReference);
	virtual $Object* apply(Object$* moduleReference) override;
	::jdk::internal::loader::BuiltinClassLoader* this$0 = nullptr;
	::java::lang::module::ModuleReference* val$mref = nullptr;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_BuiltinClassLoader$5_h_