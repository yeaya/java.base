#include <MetafactoryMethodNameTest$C.h>

#include <MetafactoryMethodNameTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _MetafactoryMethodNameTest$C_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetafactoryMethodNameTest$C::*)()>(&MetafactoryMethodNameTest$C::init$))},
	{"m", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&MetafactoryMethodNameTest$C::m))},
	{}
};

$InnerClassInfo _MetafactoryMethodNameTest$C_InnerClassesInfo_[] = {
	{"MetafactoryMethodNameTest$C", "MetafactoryMethodNameTest", "C", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MetafactoryMethodNameTest$C_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MetafactoryMethodNameTest$C",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MetafactoryMethodNameTest$C_MethodInfo_,
	nullptr,
	nullptr,
	_MetafactoryMethodNameTest$C_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MetafactoryMethodNameTest"
};

$Object* allocate$MetafactoryMethodNameTest$C($Class* clazz) {
	return $of($alloc(MetafactoryMethodNameTest$C));
}

void MetafactoryMethodNameTest$C::init$() {
}

void MetafactoryMethodNameTest$C::m() {
}

MetafactoryMethodNameTest$C::MetafactoryMethodNameTest$C() {
}

$Class* MetafactoryMethodNameTest$C::load$($String* name, bool initialize) {
	$loadClass(MetafactoryMethodNameTest$C, name, initialize, &_MetafactoryMethodNameTest$C_ClassInfo_, allocate$MetafactoryMethodNameTest$C);
	return class$;
}

$Class* MetafactoryMethodNameTest$C::class$ = nullptr;