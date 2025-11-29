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

$FieldInfo _Basic1$Handler_FieldInfo_[] = {
	{"currentProxy", "Ljava/lang/Object;", nullptr, 0, $field(Basic1$Handler, currentProxy)},
	{"lastMethod", "Ljava/lang/reflect/Method;", nullptr, 0, $field(Basic1$Handler, lastMethod)},
	{}
};

$MethodInfo _Basic1$Handler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Basic1$Handler::*)()>(&Basic1$Handler::init$))},
	{"invoke", "(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.Throwable"},
	{}
};

$InnerClassInfo _Basic1$Handler_InnerClassesInfo_[] = {
	{"Basic1$Handler", "Basic1", "Handler", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Basic1$Handler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Basic1$Handler",
	"java.lang.Object",
	"java.lang.reflect.InvocationHandler",
	_Basic1$Handler_FieldInfo_,
	_Basic1$Handler_MethodInfo_,
	nullptr,
	nullptr,
	_Basic1$Handler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Basic1"
};

$Object* allocate$Basic1$Handler($Class* clazz) {
	return $of($alloc(Basic1$Handler));
}

void Basic1$Handler::init$() {
}

$Object* Basic1$Handler::invoke(Object$* proxy, $Method* method, $ObjectArray* args) {
	if (!$equals(proxy, this->currentProxy)) {
		$throwNew($RuntimeException, "wrong proxy instance passed to invoke method"_s);
	}
	$set(this, lastMethod, method);
	return $of(nullptr);
}

Basic1$Handler::Basic1$Handler() {
}

$Class* Basic1$Handler::load$($String* name, bool initialize) {
	$loadClass(Basic1$Handler, name, initialize, &_Basic1$Handler_ClassInfo_, allocate$Basic1$Handler);
	return class$;
}

$Class* Basic1$Handler::class$ = nullptr;