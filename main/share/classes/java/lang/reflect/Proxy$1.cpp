#include <java/lang/reflect/Proxy$1.h>

#include <java/lang/ClassValue.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassValue = ::java::lang::ClassValue;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;

namespace java {
	namespace lang {
		namespace reflect {

$MethodInfo _Proxy$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Proxy$1::*)()>(&Proxy$1::init$))},
	{"computeValue", "(Ljava/lang/Class;)Ljava/util/concurrent/ConcurrentHashMap;", "(Ljava/lang/Class<*>;)Ljava/util/concurrent/ConcurrentHashMap<Ljava/lang/reflect/Method;Ljava/lang/invoke/MethodHandle;>;", $PROTECTED},
	{}
};

$EnclosingMethodInfo _Proxy$1_EnclosingMethodInfo_ = {
	"java.lang.reflect.Proxy",
	nullptr,
	nullptr
};

$InnerClassInfo _Proxy$1_InnerClassesInfo_[] = {
	{"java.lang.reflect.Proxy$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Proxy$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.reflect.Proxy$1",
	"java.lang.ClassValue",
	nullptr,
	nullptr,
	_Proxy$1_MethodInfo_,
	"Ljava/lang/ClassValue<Ljava/util/concurrent/ConcurrentHashMap<Ljava/lang/reflect/Method;Ljava/lang/invoke/MethodHandle;>;>;",
	&_Proxy$1_EnclosingMethodInfo_,
	_Proxy$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.reflect.Proxy"
};

$Object* allocate$Proxy$1($Class* clazz) {
	return $of($alloc(Proxy$1));
}

void Proxy$1::init$() {
	$ClassValue::init$();
}

$Object* Proxy$1::computeValue($Class* type) {
	return $of($new($ConcurrentHashMap, 4));
}

Proxy$1::Proxy$1() {
}

$Class* Proxy$1::load$($String* name, bool initialize) {
	$loadClass(Proxy$1, name, initialize, &_Proxy$1_ClassInfo_, allocate$Proxy$1);
	return class$;
}

$Class* Proxy$1::class$ = nullptr;

		} // reflect
	} // lang
} // java