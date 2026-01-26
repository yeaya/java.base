#include <MetafactoryParameterCastTest$ASink.h>

#include <MetafactoryParameterCastTest$A.h>
#include <MetafactoryParameterCastTest.h>
#include <jcpp.h>

using $MetafactoryParameterCastTest$A = ::MetafactoryParameterCastTest$A;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _MetafactoryParameterCastTest$ASink_MethodInfo_[] = {
	{"take", "(LMetafactoryParameterCastTest$A;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MetafactoryParameterCastTest$ASink, take, void, $MetafactoryParameterCastTest$A*)},
	{}
};

$InnerClassInfo _MetafactoryParameterCastTest$ASink_InnerClassesInfo_[] = {
	{"MetafactoryParameterCastTest$ASink", "MetafactoryParameterCastTest", "ASink", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MetafactoryParameterCastTest$ASink_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"MetafactoryParameterCastTest$ASink",
	nullptr,
	nullptr,
	nullptr,
	_MetafactoryParameterCastTest$ASink_MethodInfo_,
	nullptr,
	nullptr,
	_MetafactoryParameterCastTest$ASink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MetafactoryParameterCastTest"
};

$Object* allocate$MetafactoryParameterCastTest$ASink($Class* clazz) {
	return $of($alloc(MetafactoryParameterCastTest$ASink));
}

$Class* MetafactoryParameterCastTest$ASink::load$($String* name, bool initialize) {
	$loadClass(MetafactoryParameterCastTest$ASink, name, initialize, &_MetafactoryParameterCastTest$ASink_ClassInfo_, allocate$MetafactoryParameterCastTest$ASink);
	return class$;
}

$Class* MetafactoryParameterCastTest$ASink::class$ = nullptr;