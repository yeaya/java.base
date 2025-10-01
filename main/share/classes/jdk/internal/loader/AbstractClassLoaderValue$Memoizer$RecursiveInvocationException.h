#ifndef _jdk_internal_loader_AbstractClassLoaderValue$Memoizer$RecursiveInvocationException_h_
#define _jdk_internal_loader_AbstractClassLoaderValue$Memoizer$RecursiveInvocationException_h_
//$ class jdk.internal.loader.AbstractClassLoaderValue$Memoizer$RecursiveInvocationException
//$ extends java.lang.IllegalStateException

#include <java/lang/IllegalStateException.h>

namespace jdk {
	namespace internal {
		namespace loader {

class AbstractClassLoaderValue$Memoizer$RecursiveInvocationException : public ::java::lang::IllegalStateException {
	$class(AbstractClassLoaderValue$Memoizer$RecursiveInvocationException, $NO_CLASS_INIT, ::java::lang::IllegalStateException)
public:
	AbstractClassLoaderValue$Memoizer$RecursiveInvocationException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)1;
	AbstractClassLoaderValue$Memoizer$RecursiveInvocationException(const AbstractClassLoaderValue$Memoizer$RecursiveInvocationException& e);
	AbstractClassLoaderValue$Memoizer$RecursiveInvocationException wrapper$();
	virtual void throwWrapper$() override;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_AbstractClassLoaderValue$Memoizer$RecursiveInvocationException_h_