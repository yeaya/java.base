#include <GetInteger.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _GetInteger_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(GetInteger, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(GetInteger, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _GetInteger_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GetInteger",
	"java.lang.Object",
	nullptr,
	nullptr,
	_GetInteger_MethodInfo_
};

$Object* allocate$GetInteger($Class* clazz) {
	return $of($alloc(GetInteger));
}

void GetInteger::init$() {
}

void GetInteger::main($StringArray* args) {
	$Integer::getInteger(""_s, 1);
	$Integer::getInteger(($String*)nullptr, 1);
}

GetInteger::GetInteger() {
}

$Class* GetInteger::load$($String* name, bool initialize) {
	$loadClass(GetInteger, name, initialize, &_GetInteger_ClassInfo_, allocate$GetInteger);
	return class$;
}

$Class* GetInteger::class$ = nullptr;