#include <jdk/internal/loader/AbstractClassLoaderValue$Memoizer$RecursiveInvocationException.h>

#include <java/lang/IllegalStateException.h>
#include <jdk/internal/loader/AbstractClassLoaderValue$Memoizer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractClassLoaderValue$Memoizer = ::jdk::internal::loader::AbstractClassLoaderValue$Memoizer;

namespace jdk {
	namespace internal {
		namespace loader {

$FieldInfo _AbstractClassLoaderValue$Memoizer$RecursiveInvocationException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AbstractClassLoaderValue$Memoizer$RecursiveInvocationException, serialVersionUID)},
	{}
};

$MethodInfo _AbstractClassLoaderValue$Memoizer$RecursiveInvocationException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AbstractClassLoaderValue$Memoizer$RecursiveInvocationException::*)()>(&AbstractClassLoaderValue$Memoizer$RecursiveInvocationException::init$))},
	{}
};

$InnerClassInfo _AbstractClassLoaderValue$Memoizer$RecursiveInvocationException_InnerClassesInfo_[] = {
	{"jdk.internal.loader.AbstractClassLoaderValue$Memoizer", "jdk.internal.loader.AbstractClassLoaderValue", "Memoizer", $PRIVATE | $STATIC | $FINAL},
	{"jdk.internal.loader.AbstractClassLoaderValue$Memoizer$RecursiveInvocationException", "jdk.internal.loader.AbstractClassLoaderValue$Memoizer", "RecursiveInvocationException", $STATIC},
	{}
};

$ClassInfo _AbstractClassLoaderValue$Memoizer$RecursiveInvocationException_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.loader.AbstractClassLoaderValue$Memoizer$RecursiveInvocationException",
	"java.lang.IllegalStateException",
	nullptr,
	_AbstractClassLoaderValue$Memoizer$RecursiveInvocationException_FieldInfo_,
	_AbstractClassLoaderValue$Memoizer$RecursiveInvocationException_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractClassLoaderValue$Memoizer$RecursiveInvocationException_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.loader.AbstractClassLoaderValue"
};

$Object* allocate$AbstractClassLoaderValue$Memoizer$RecursiveInvocationException($Class* clazz) {
	return $of($alloc(AbstractClassLoaderValue$Memoizer$RecursiveInvocationException));
}

void AbstractClassLoaderValue$Memoizer$RecursiveInvocationException::init$() {
	$IllegalStateException::init$("Recursive call"_s);
}

AbstractClassLoaderValue$Memoizer$RecursiveInvocationException::AbstractClassLoaderValue$Memoizer$RecursiveInvocationException() {
}

AbstractClassLoaderValue$Memoizer$RecursiveInvocationException::AbstractClassLoaderValue$Memoizer$RecursiveInvocationException(const AbstractClassLoaderValue$Memoizer$RecursiveInvocationException& e) : $IllegalStateException(e) {
}

void AbstractClassLoaderValue$Memoizer$RecursiveInvocationException::throw$() {
	throw *this;
}

$Class* AbstractClassLoaderValue$Memoizer$RecursiveInvocationException::load$($String* name, bool initialize) {
	$loadClass(AbstractClassLoaderValue$Memoizer$RecursiveInvocationException, name, initialize, &_AbstractClassLoaderValue$Memoizer$RecursiveInvocationException_ClassInfo_, allocate$AbstractClassLoaderValue$Memoizer$RecursiveInvocationException);
	return class$;
}

$Class* AbstractClassLoaderValue$Memoizer$RecursiveInvocationException::class$ = nullptr;

		} // loader
	} // internal
} // jdk