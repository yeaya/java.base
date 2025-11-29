#include <java/lang/runtime/ObjectMethods$1.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/runtime/ObjectMethods.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace runtime {

$MethodInfo _ObjectMethods$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ObjectMethods$1::*)()>(&ObjectMethods$1::init$))},
	{"run", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ObjectMethods$1_EnclosingMethodInfo_ = {
	"java.lang.runtime.ObjectMethods",
	nullptr,
	nullptr
};

$InnerClassInfo _ObjectMethods$1_InnerClassesInfo_[] = {
	{"java.lang.runtime.ObjectMethods$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ObjectMethods$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.runtime.ObjectMethods$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_ObjectMethods$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/ClassLoader;>;",
	&_ObjectMethods$1_EnclosingMethodInfo_,
	_ObjectMethods$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.runtime.ObjectMethods"
};

$Object* allocate$ObjectMethods$1($Class* clazz) {
	return $of($alloc(ObjectMethods$1));
}

void ObjectMethods$1::init$() {
}

$Object* ObjectMethods$1::run() {
	$beforeCallerSensitive();
	return $of($ClassLoader::getPlatformClassLoader());
}

ObjectMethods$1::ObjectMethods$1() {
}

$Class* ObjectMethods$1::load$($String* name, bool initialize) {
	$loadClass(ObjectMethods$1, name, initialize, &_ObjectMethods$1_ClassInfo_, allocate$ObjectMethods$1);
	return class$;
}

$Class* ObjectMethods$1::class$ = nullptr;

		} // runtime
	} // lang
} // java