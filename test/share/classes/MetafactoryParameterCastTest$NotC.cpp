#include <MetafactoryParameterCastTest$NotC.h>

#include <MetafactoryParameterCastTest$B.h>
#include <MetafactoryParameterCastTest.h>
#include <jcpp.h>

using $MetafactoryParameterCastTest$B = ::MetafactoryParameterCastTest$B;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _MetafactoryParameterCastTest$NotC_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetafactoryParameterCastTest$NotC::*)()>(&MetafactoryParameterCastTest$NotC::init$))},
	{}
};

$InnerClassInfo _MetafactoryParameterCastTest$NotC_InnerClassesInfo_[] = {
	{"MetafactoryParameterCastTest$NotC", "MetafactoryParameterCastTest", "NotC", $PUBLIC | $STATIC},
	{"MetafactoryParameterCastTest$B", "MetafactoryParameterCastTest", "B", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MetafactoryParameterCastTest$NotC_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MetafactoryParameterCastTest$NotC",
	"MetafactoryParameterCastTest$B",
	nullptr,
	nullptr,
	_MetafactoryParameterCastTest$NotC_MethodInfo_,
	nullptr,
	nullptr,
	_MetafactoryParameterCastTest$NotC_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MetafactoryParameterCastTest"
};

$Object* allocate$MetafactoryParameterCastTest$NotC($Class* clazz) {
	return $of($alloc(MetafactoryParameterCastTest$NotC));
}

void MetafactoryParameterCastTest$NotC::init$() {
	$MetafactoryParameterCastTest$B::init$();
}

MetafactoryParameterCastTest$NotC::MetafactoryParameterCastTest$NotC() {
}

$Class* MetafactoryParameterCastTest$NotC::load$($String* name, bool initialize) {
	$loadClass(MetafactoryParameterCastTest$NotC, name, initialize, &_MetafactoryParameterCastTest$NotC_ClassInfo_, allocate$MetafactoryParameterCastTest$NotC);
	return class$;
}

$Class* MetafactoryParameterCastTest$NotC::class$ = nullptr;