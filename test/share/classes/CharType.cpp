#include <CharType.h>

#include <CharType$CharMethod.h>
#include <CharType$H.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationHandler.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Proxy.h>
#include <jcpp.h>

using $CharType$CharMethod = ::CharType$CharMethod;
using $CharType$H = ::CharType$H;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvocationHandler = ::java::lang::reflect::InvocationHandler;
using $Proxy = ::java::lang::reflect::Proxy;

$MethodInfo _CharType_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharType::*)()>(&CharType::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&CharType::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _CharType_InnerClassesInfo_[] = {
	{"CharType$H", "CharType", "H", $STATIC},
	{"CharType$CharMethod", "CharType", "CharMethod", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CharType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CharType",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CharType_MethodInfo_,
	nullptr,
	nullptr,
	_CharType_InnerClassesInfo_,
	nullptr,
	nullptr,
	"CharType$H,CharType$CharMethod"
};

$Object* allocate$CharType($Class* clazz) {
	return $of($alloc(CharType));
}

void CharType::init$() {
}

void CharType::main($StringArray* args) {
	$load(CharType);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($CharType$CharMethod);
	$var($ClassLoader, var$0, $CharType$CharMethod::class$->getClassLoader());
	$var($ClassArray, var$1, $new($ClassArray, {$CharType$CharMethod::class$}));
	$Proxy::newProxyInstance(var$0, var$1, static_cast<$InvocationHandler*>($$new($CharType$H)));
}

CharType::CharType() {
}

$Class* CharType::load$($String* name, bool initialize) {
	$loadClass(CharType, name, initialize, &_CharType_ClassInfo_, allocate$CharType);
	return class$;
}

$Class* CharType::class$ = nullptr;