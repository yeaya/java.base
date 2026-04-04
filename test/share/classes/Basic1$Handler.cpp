#include <Basic1$Handler.h>
#include <Basic1.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Method = ::java::lang::reflect::Method;

void Basic1$Handler::init$() {
}

$Object* Basic1$Handler::invoke(Object$* proxy, $Method* method, $ObjectArray* args) {
	if (!$equals(proxy, this->currentProxy)) {
		$throwNew($RuntimeException, "wrong proxy instance passed to invoke method"_s);
	}
	$set(this, lastMethod, method);
	return nullptr;
}

Basic1$Handler::Basic1$Handler() {
}

$Class* Basic1$Handler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"currentProxy", "Ljava/lang/Object;", nullptr, 0, $field(Basic1$Handler, currentProxy)},
		{"lastMethod", "Ljava/lang/reflect/Method;", nullptr, 0, $field(Basic1$Handler, lastMethod)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Basic1$Handler, init$, void)},
		{"invoke", "(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Basic1$Handler, invoke, $Object*, Object$*, $Method*, $ObjectArray*), "java.lang.Throwable"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Basic1$Handler", "Basic1", "Handler", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Basic1$Handler",
		"java.lang.Object",
		"java.lang.reflect.InvocationHandler",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Basic1"
	};
	$loadClass(Basic1$Handler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Basic1$Handler);
	});
	return class$;
}

$Class* Basic1$Handler::class$ = nullptr;