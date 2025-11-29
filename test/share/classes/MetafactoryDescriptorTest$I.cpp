#include <MetafactoryDescriptorTest$I.h>

#include <MetafactoryDescriptorTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$InnerClassInfo _MetafactoryDescriptorTest$I_InnerClassesInfo_[] = {
	{"MetafactoryDescriptorTest$I", "MetafactoryDescriptorTest", "I", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MetafactoryDescriptorTest$I_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"MetafactoryDescriptorTest$I",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_MetafactoryDescriptorTest$I_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MetafactoryDescriptorTest"
};

$Object* allocate$MetafactoryDescriptorTest$I($Class* clazz) {
	return $of($alloc(MetafactoryDescriptorTest$I));
}

$Class* MetafactoryDescriptorTest$I::load$($String* name, bool initialize) {
	$loadClass(MetafactoryDescriptorTest$I, name, initialize, &_MetafactoryDescriptorTest$I_ClassInfo_, allocate$MetafactoryDescriptorTest$I);
	return class$;
}

$Class* MetafactoryDescriptorTest$I::class$ = nullptr;