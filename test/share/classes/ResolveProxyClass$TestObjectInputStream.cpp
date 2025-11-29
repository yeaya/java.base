#include <ResolveProxyClass$TestObjectInputStream.h>

#include <ResolveProxyClass.h>
#include <java/io/ObjectInputStream.h>
#include <jcpp.h>

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ResolveProxyClass$TestObjectInputStream_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ResolveProxyClass$TestObjectInputStream::*)()>(&ResolveProxyClass$TestObjectInputStream::init$)), "java.io.IOException"},
	{"resolveProxyClass", "([Ljava/lang/String;)Ljava/lang/Class;", "([Ljava/lang/String;)Ljava/lang/Class<*>;", $PROTECTED, nullptr, "java.io.IOException,java.lang.ClassNotFoundException"},
	{}
};

$InnerClassInfo _ResolveProxyClass$TestObjectInputStream_InnerClassesInfo_[] = {
	{"ResolveProxyClass$TestObjectInputStream", "ResolveProxyClass", "TestObjectInputStream", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ResolveProxyClass$TestObjectInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"ResolveProxyClass$TestObjectInputStream",
	"java.io.ObjectInputStream",
	nullptr,
	nullptr,
	_ResolveProxyClass$TestObjectInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_ResolveProxyClass$TestObjectInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ResolveProxyClass"
};

$Object* allocate$ResolveProxyClass$TestObjectInputStream($Class* clazz) {
	return $of($alloc(ResolveProxyClass$TestObjectInputStream));
}

void ResolveProxyClass$TestObjectInputStream::init$() {
	$ObjectInputStream::init$();
}

$Class* ResolveProxyClass$TestObjectInputStream::resolveProxyClass($StringArray* interfaces) {
	return $ObjectInputStream::resolveProxyClass(interfaces);
}

ResolveProxyClass$TestObjectInputStream::ResolveProxyClass$TestObjectInputStream() {
}

$Class* ResolveProxyClass$TestObjectInputStream::load$($String* name, bool initialize) {
	$loadClass(ResolveProxyClass$TestObjectInputStream, name, initialize, &_ResolveProxyClass$TestObjectInputStream_ClassInfo_, allocate$ResolveProxyClass$TestObjectInputStream);
	return class$;
}

$Class* ResolveProxyClass$TestObjectInputStream::class$ = nullptr;