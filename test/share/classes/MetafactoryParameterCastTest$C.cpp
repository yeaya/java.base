#include <MetafactoryParameterCastTest$C.h>

#include <MetafactoryParameterCastTest$B.h>
#include <MetafactoryParameterCastTest.h>
#include <jcpp.h>

using $MetafactoryParameterCastTest$B = ::MetafactoryParameterCastTest$B;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _MetafactoryParameterCastTest$C_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetafactoryParameterCastTest$C::*)()>(&MetafactoryParameterCastTest$C::init$))},
	{}
};

$InnerClassInfo _MetafactoryParameterCastTest$C_InnerClassesInfo_[] = {
	{"MetafactoryParameterCastTest$C", "MetafactoryParameterCastTest", "C", $PUBLIC | $STATIC},
	{"MetafactoryParameterCastTest$B", "MetafactoryParameterCastTest", "B", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MetafactoryParameterCastTest$C_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MetafactoryParameterCastTest$C",
	"MetafactoryParameterCastTest$B",
	nullptr,
	nullptr,
	_MetafactoryParameterCastTest$C_MethodInfo_,
	nullptr,
	nullptr,
	_MetafactoryParameterCastTest$C_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MetafactoryParameterCastTest"
};

$Object* allocate$MetafactoryParameterCastTest$C($Class* clazz) {
	return $of($alloc(MetafactoryParameterCastTest$C));
}

void MetafactoryParameterCastTest$C::init$() {
	$MetafactoryParameterCastTest$B::init$();
}

MetafactoryParameterCastTest$C::MetafactoryParameterCastTest$C() {
}

$Class* MetafactoryParameterCastTest$C::load$($String* name, bool initialize) {
	$loadClass(MetafactoryParameterCastTest$C, name, initialize, &_MetafactoryParameterCastTest$C_ClassInfo_, allocate$MetafactoryParameterCastTest$C);
	return class$;
}

$Class* MetafactoryParameterCastTest$C::class$ = nullptr;