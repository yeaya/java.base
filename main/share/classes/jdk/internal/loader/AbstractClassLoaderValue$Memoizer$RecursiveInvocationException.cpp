#include <jdk/internal/loader/AbstractClassLoaderValue$Memoizer$RecursiveInvocationException.h>
#include <java/lang/IllegalStateException.h>
#include <jdk/internal/loader/AbstractClassLoaderValue$Memoizer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace loader {

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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AbstractClassLoaderValue$Memoizer$RecursiveInvocationException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AbstractClassLoaderValue$Memoizer$RecursiveInvocationException, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.loader.AbstractClassLoaderValue$Memoizer", "jdk.internal.loader.AbstractClassLoaderValue", "Memoizer", $PRIVATE | $STATIC | $FINAL},
		{"jdk.internal.loader.AbstractClassLoaderValue$Memoizer$RecursiveInvocationException", "jdk.internal.loader.AbstractClassLoaderValue$Memoizer", "RecursiveInvocationException", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.loader.AbstractClassLoaderValue$Memoizer$RecursiveInvocationException",
		"java.lang.IllegalStateException",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.loader.AbstractClassLoaderValue"
	};
	$loadClass(AbstractClassLoaderValue$Memoizer$RecursiveInvocationException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractClassLoaderValue$Memoizer$RecursiveInvocationException);
	});
	return class$;
}

$Class* AbstractClassLoaderValue$Memoizer$RecursiveInvocationException::class$ = nullptr;

		} // loader
	} // internal
} // jdk