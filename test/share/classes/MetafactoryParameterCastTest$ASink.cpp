#include <MetafactoryParameterCastTest$ASink.h>

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
using $MetafactoryParameterCastTest$A = ::MetafactoryParameterCastTest$A;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _MetafactoryParameterCastTest$ASink_MethodInfo_[] = {
	{"take", "(LMetafactoryParameterCastTest$A;)V", nullptr, $PUBLIC | $ABSTRACT},
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