#ifndef _jdk_internal_loader_AbstractClassLoaderValue$Memoizer_h_
#define _jdk_internal_loader_AbstractClassLoaderValue$Memoizer_h_
//$ class jdk.internal.loader.AbstractClassLoaderValue$Memoizer
//$ extends java.util.function.Supplier

#include <java/util/function/Supplier.h>

namespace java {
	namespace lang {
		class ClassLoader;
		class Throwable;
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiFunction;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace loader {
			class AbstractClassLoaderValue;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace loader {

class AbstractClassLoaderValue$Memoizer : public ::java::util::function::Supplier {
	$class(AbstractClassLoaderValue$Memoizer, $NO_CLASS_INIT, ::java::util::function::Supplier)
public:
	AbstractClassLoaderValue$Memoizer();
	void init$(::java::lang::ClassLoader* cl, ::jdk::internal::loader::AbstractClassLoaderValue* clv, ::java::util::function::BiFunction* mappingFunction);
	virtual $Object* get() override;
	::java::lang::ClassLoader* cl = nullptr;
	::jdk::internal::loader::AbstractClassLoaderValue* clv = nullptr;
	::java::util::function::BiFunction* mappingFunction = nullptr;
	$volatile($Object*) v = nullptr;
	$volatile($Throwable*) t = nullptr;
	bool inCall = false;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_AbstractClassLoaderValue$Memoizer_h_