#include <MetafactoryArityTest$I.h>

#include <MetafactoryArityTest.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $MetafactoryArityTest = ::MetafactoryArityTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$InnerClassInfo _MetafactoryArityTest$I_InnerClassesInfo_[] = {
	{"MetafactoryArityTest$I", "MetafactoryArityTest", "I", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MetafactoryArityTest$I_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"MetafactoryArityTest$I",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_MetafactoryArityTest$I_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MetafactoryArityTest"
};

$Object* allocate$MetafactoryArityTest$I($Class* clazz) {
	return $of($alloc(MetafactoryArityTest$I));
}

$Class* MetafactoryArityTest$I::load$($String* name, bool initialize) {
	$loadClass(MetafactoryArityTest$I, name, initialize, &_MetafactoryArityTest$I_ClassInfo_, allocate$MetafactoryArityTest$I);
	return class$;
}

$Class* MetafactoryArityTest$I::class$ = nullptr;