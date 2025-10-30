#include <CharType$H.h>

#include <CharType.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $CharType = ::CharType;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvocationHandler = ::java::lang::reflect::InvocationHandler;
using $Method = ::java::lang::reflect::Method;

$MethodInfo _CharType$H_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CharType$H::*)()>(&CharType$H::init$))},
	{"invoke", "(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CharType$H_InnerClassesInfo_[] = {
	{"CharType$H", "CharType", "H", $STATIC},
	{}
};

$ClassInfo _CharType$H_ClassInfo_ = {
	$ACC_SUPER,
	"CharType$H",
	"java.lang.Object",
	"java.lang.reflect.InvocationHandler",
	nullptr,
	_CharType$H_MethodInfo_,
	nullptr,
	nullptr,
	_CharType$H_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"CharType"
};

$Object* allocate$CharType$H($Class* clazz) {
	return $of($alloc(CharType$H));
}

void CharType$H::init$() {
}

$Object* CharType$H::invoke(Object$* o, $Method* m, $ObjectArray* arr) {
	return $of(nullptr);
}

CharType$H::CharType$H() {
}

$Class* CharType$H::load$($String* name, bool initialize) {
	$loadClass(CharType$H, name, initialize, &_CharType$H_ClassInfo_, allocate$CharType$H);
	return class$;
}

$Class* CharType$H::class$ = nullptr;