#include <MetafactoryArityTest$C.h>

#include <MetafactoryArityTest.h>
#include <jcpp.h>

using $MetafactoryArityTest = ::MetafactoryArityTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _MetafactoryArityTest$C_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetafactoryArityTest$C::*)()>(&MetafactoryArityTest$C::init$))},
	{"m", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&MetafactoryArityTest$C::m))},
	{}
};

$InnerClassInfo _MetafactoryArityTest$C_InnerClassesInfo_[] = {
	{"MetafactoryArityTest$C", "MetafactoryArityTest", "C", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MetafactoryArityTest$C_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MetafactoryArityTest$C",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MetafactoryArityTest$C_MethodInfo_,
	nullptr,
	nullptr,
	_MetafactoryArityTest$C_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MetafactoryArityTest"
};

$Object* allocate$MetafactoryArityTest$C($Class* clazz) {
	return $of($alloc(MetafactoryArityTest$C));
}

void MetafactoryArityTest$C::init$() {
}

$String* MetafactoryArityTest$C::m(int32_t arg) {
	return ""_s;
}

MetafactoryArityTest$C::MetafactoryArityTest$C() {
}

$Class* MetafactoryArityTest$C::load$($String* name, bool initialize) {
	$loadClass(MetafactoryArityTest$C, name, initialize, &_MetafactoryArityTest$C_ClassInfo_, allocate$MetafactoryArityTest$C);
	return class$;
}

$Class* MetafactoryArityTest$C::class$ = nullptr;