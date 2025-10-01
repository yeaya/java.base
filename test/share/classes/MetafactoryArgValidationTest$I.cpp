#include <MetafactoryArgValidationTest$I.h>

#include <MetafactoryArgValidationTest.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $MetafactoryArgValidationTest = ::MetafactoryArgValidationTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$InnerClassInfo _MetafactoryArgValidationTest$I_InnerClassesInfo_[] = {
	{"MetafactoryArgValidationTest$I", "MetafactoryArgValidationTest", "I", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MetafactoryArgValidationTest$I_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"MetafactoryArgValidationTest$I",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_MetafactoryArgValidationTest$I_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MetafactoryArgValidationTest"
};

$Object* allocate$MetafactoryArgValidationTest$I($Class* clazz) {
	return $of($alloc(MetafactoryArgValidationTest$I));
}

$Class* MetafactoryArgValidationTest$I::load$($String* name, bool initialize) {
	$loadClass(MetafactoryArgValidationTest$I, name, initialize, &_MetafactoryArgValidationTest$I_ClassInfo_, allocate$MetafactoryArgValidationTest$I);
	return class$;
}

$Class* MetafactoryArgValidationTest$I::class$ = nullptr;