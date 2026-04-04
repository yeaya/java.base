#include <sun/reflect/annotation/ExceptionProxy.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace sun {
	namespace reflect {
		namespace annotation {

void ExceptionProxy::init$() {
}

ExceptionProxy::ExceptionProxy() {
}

$Class* ExceptionProxy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ExceptionProxy, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExceptionProxy, init$, void)},
		{"generateException", "()Ljava/lang/RuntimeException;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(ExceptionProxy, generateException, $RuntimeException*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.reflect.annotation.ExceptionProxy",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ExceptionProxy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExceptionProxy);
	});
	return class$;
}

$Class* ExceptionProxy::class$ = nullptr;

		} // annotation
	} // reflect
} // sun