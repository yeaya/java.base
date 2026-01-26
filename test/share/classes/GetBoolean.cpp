#include <GetBoolean.h>

#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _GetBoolean_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(GetBoolean, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(GetBoolean, main, void, $StringArray*)},
	{}
};

$ClassInfo _GetBoolean_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GetBoolean",
	"java.lang.Object",
	nullptr,
	nullptr,
	_GetBoolean_MethodInfo_
};

$Object* allocate$GetBoolean($Class* clazz) {
	return $of($alloc(GetBoolean));
}

void GetBoolean::init$() {
}

void GetBoolean::main($StringArray* args) {
	$Boolean::getBoolean(""_s);
	$Boolean::getBoolean(nullptr);
}

GetBoolean::GetBoolean() {
}

$Class* GetBoolean::load$($String* name, bool initialize) {
	$loadClass(GetBoolean, name, initialize, &_GetBoolean_ClassInfo_, allocate$GetBoolean);
	return class$;
}

$Class* GetBoolean::class$ = nullptr;