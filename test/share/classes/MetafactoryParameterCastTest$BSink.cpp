#include <MetafactoryParameterCastTest$BSink.h>

#include <MetafactoryParameterCastTest$B.h>
#include <MetafactoryParameterCastTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _MetafactoryParameterCastTest$BSink_MethodInfo_[] = {
	{"take", "(LMetafactoryParameterCastTest$B;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _MetafactoryParameterCastTest$BSink_InnerClassesInfo_[] = {
	{"MetafactoryParameterCastTest$BSink", "MetafactoryParameterCastTest", "BSink", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MetafactoryParameterCastTest$BSink_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"MetafactoryParameterCastTest$BSink",
	nullptr,
	nullptr,
	nullptr,
	_MetafactoryParameterCastTest$BSink_MethodInfo_,
	nullptr,
	nullptr,
	_MetafactoryParameterCastTest$BSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MetafactoryParameterCastTest"
};

$Object* allocate$MetafactoryParameterCastTest$BSink($Class* clazz) {
	return $of($alloc(MetafactoryParameterCastTest$BSink));
}

$Class* MetafactoryParameterCastTest$BSink::load$($String* name, bool initialize) {
	$loadClass(MetafactoryParameterCastTest$BSink, name, initialize, &_MetafactoryParameterCastTest$BSink_ClassInfo_, allocate$MetafactoryParameterCastTest$BSink);
	return class$;
}

$Class* MetafactoryParameterCastTest$BSink::class$ = nullptr;