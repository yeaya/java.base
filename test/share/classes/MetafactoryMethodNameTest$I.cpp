#include <MetafactoryMethodNameTest$I.h>

#include <MetafactoryMethodNameTest.h>
#include <jcpp.h>

using $MetafactoryMethodNameTest = ::MetafactoryMethodNameTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$InnerClassInfo _MetafactoryMethodNameTest$I_InnerClassesInfo_[] = {
	{"MetafactoryMethodNameTest$I", "MetafactoryMethodNameTest", "I", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MetafactoryMethodNameTest$I_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"MetafactoryMethodNameTest$I",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_MetafactoryMethodNameTest$I_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MetafactoryMethodNameTest"
};

$Object* allocate$MetafactoryMethodNameTest$I($Class* clazz) {
	return $of($alloc(MetafactoryMethodNameTest$I));
}

$Class* MetafactoryMethodNameTest$I::load$($String* name, bool initialize) {
	$loadClass(MetafactoryMethodNameTest$I, name, initialize, &_MetafactoryMethodNameTest$I_ClassInfo_, allocate$MetafactoryMethodNameTest$I);
	return class$;
}

$Class* MetafactoryMethodNameTest$I::class$ = nullptr;