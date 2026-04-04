#include <ResolveProxyClass$TestObjectInputStream.h>
#include <ResolveProxyClass.h>
#include <java/io/ObjectInputStream.h>
#include <jcpp.h>

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ResolveProxyClass$TestObjectInputStream::init$() {
	$ObjectInputStream::init$();
}

$Class* ResolveProxyClass$TestObjectInputStream::resolveProxyClass($StringArray* interfaces) {
	return $ObjectInputStream::resolveProxyClass(interfaces);
}

ResolveProxyClass$TestObjectInputStream::ResolveProxyClass$TestObjectInputStream() {
}

$Class* ResolveProxyClass$TestObjectInputStream::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ResolveProxyClass$TestObjectInputStream, init$, void), "java.io.IOException"},
		{"resolveProxyClass", "([Ljava/lang/String;)Ljava/lang/Class;", "([Ljava/lang/String;)Ljava/lang/Class<*>;", $PROTECTED, $virtualMethod(ResolveProxyClass$TestObjectInputStream, resolveProxyClass, $Class*, $StringArray*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ResolveProxyClass$TestObjectInputStream", "ResolveProxyClass", "TestObjectInputStream", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ResolveProxyClass$TestObjectInputStream",
		"java.io.ObjectInputStream",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ResolveProxyClass"
	};
	$loadClass(ResolveProxyClass$TestObjectInputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ResolveProxyClass$TestObjectInputStream));
	});
	return class$;
}

$Class* ResolveProxyClass$TestObjectInputStream::class$ = nullptr;