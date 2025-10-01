#include <MetafactoryParameterCastTest$A.h>

#include <MetafactoryParameterCastTest.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $MetafactoryParameterCastTest = ::MetafactoryParameterCastTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _MetafactoryParameterCastTest$A_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetafactoryParameterCastTest$A::*)()>(&MetafactoryParameterCastTest$A::init$))},
	{}
};

$InnerClassInfo _MetafactoryParameterCastTest$A_InnerClassesInfo_[] = {
	{"MetafactoryParameterCastTest$A", "MetafactoryParameterCastTest", "A", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MetafactoryParameterCastTest$A_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MetafactoryParameterCastTest$A",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MetafactoryParameterCastTest$A_MethodInfo_,
	nullptr,
	nullptr,
	_MetafactoryParameterCastTest$A_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MetafactoryParameterCastTest"
};

$Object* allocate$MetafactoryParameterCastTest$A($Class* clazz) {
	return $of($alloc(MetafactoryParameterCastTest$A));
}

void MetafactoryParameterCastTest$A::init$() {
}

MetafactoryParameterCastTest$A::MetafactoryParameterCastTest$A() {
}

$Class* MetafactoryParameterCastTest$A::load$($String* name, bool initialize) {
	$loadClass(MetafactoryParameterCastTest$A, name, initialize, &_MetafactoryParameterCastTest$A_ClassInfo_, allocate$MetafactoryParameterCastTest$A);
	return class$;
}

$Class* MetafactoryParameterCastTest$A::class$ = nullptr;