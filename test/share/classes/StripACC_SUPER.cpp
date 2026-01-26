#include <StripACC_SUPER.h>

#include <java/lang/reflect/Modifier.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $Modifier = ::java::lang::reflect::Modifier;

$MethodInfo _StripACC_SUPER_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(StripACC_SUPER, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(StripACC_SUPER, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _StripACC_SUPER_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"StripACC_SUPER",
	"java.lang.Object",
	nullptr,
	nullptr,
	_StripACC_SUPER_MethodInfo_
};

$Object* allocate$StripACC_SUPER($Class* clazz) {
	return $of($alloc(StripACC_SUPER));
}

void StripACC_SUPER::init$() {
}

void StripACC_SUPER::main($StringArray* args) {
	$load(StripACC_SUPER);
	int32_t access = StripACC_SUPER::class$->getModifiers();
	if ($Modifier::isSynchronized(access)) {
		$throwNew($Exception, "ACC_SUPER bit is not being stripped"_s);
	}
}

StripACC_SUPER::StripACC_SUPER() {
}

$Class* StripACC_SUPER::load$($String* name, bool initialize) {
	$loadClass(StripACC_SUPER, name, initialize, &_StripACC_SUPER_ClassInfo_, allocate$StripACC_SUPER);
	return class$;
}

$Class* StripACC_SUPER::class$ = nullptr;