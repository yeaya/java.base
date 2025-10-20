#include <pkg1/MethodTypeDescriptorAccessTest.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Error.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/constant/MethodTypeDesc.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Error = ::java::lang::Error;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $ConstantDesc = ::java::lang::constant::ConstantDesc;
using $MethodTypeDesc = ::java::lang::constant::MethodTypeDesc;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;

namespace pkg1 {

$MethodInfo _MethodTypeDescriptorAccessTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MethodTypeDescriptorAccessTest::*)()>(&MethodTypeDescriptorAccessTest::init$))},
	{"checkInvalidAccess", "(Ljava/lang/constant/MethodTypeDesc;Ljava/lang/invoke/MethodHandles$Lookup;)V", nullptr, $PRIVATE, $method(static_cast<void(MethodTypeDescriptorAccessTest::*)($MethodTypeDesc*,$MethodHandles$Lookup*)>(&MethodTypeDescriptorAccessTest::checkInvalidAccess))},
	{"checkValidAccess", "(Ljava/lang/constant/MethodTypeDesc;Ljava/lang/invoke/MethodHandles$Lookup;)V", nullptr, $PRIVATE, $method(static_cast<void(MethodTypeDescriptorAccessTest::*)($MethodTypeDesc*,$MethodHandles$Lookup*)>(&MethodTypeDescriptorAccessTest::checkValidAccess))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&MethodTypeDescriptorAccessTest::main)), "java.lang.Throwable"},
	{"test", "()V", nullptr, 0},
	{}
};

$ClassInfo _MethodTypeDescriptorAccessTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"pkg1.MethodTypeDescriptorAccessTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MethodTypeDescriptorAccessTest_MethodInfo_
};

$Object* allocate$MethodTypeDescriptorAccessTest($Class* clazz) {
	return $of($alloc(MethodTypeDescriptorAccessTest));
}

void MethodTypeDescriptorAccessTest::init$() {
}

void MethodTypeDescriptorAccessTest::main($StringArray* args) {
	$$new(MethodTypeDescriptorAccessTest)->test();
}

void MethodTypeDescriptorAccessTest::test() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($MethodHandles$Lookup, selfLookup, $MethodHandles::lookup());
	$var($String, descriptorpub, "(Lpkg2/PublicClass;)Lpkg2/PublicClass;"_s);
	$var($MethodTypeDesc, mtdpub, $MethodTypeDesc::ofDescriptor(descriptorpub));
	checkValidAccess(mtdpub, selfLookup);
	$var($String, descriptornp, "()Lpkg2/NonPublicClass;"_s);
	$var($MethodTypeDesc, mtdnp, $MethodTypeDesc::ofDescriptor(descriptornp));
	checkInvalidAccess(mtdnp, selfLookup);
	$assign(descriptornp, "(Lpkg2/NonPublicClass;)I"_s);
	$assign(mtdnp, $MethodTypeDesc::ofDescriptor(descriptornp));
	checkInvalidAccess(mtdnp, selfLookup);
	$var($MethodType, mt, $MethodType::fromMethodDescriptorString("(Lpkg2/NonPublicClass;)I"_s, $($nc($nc(selfLookup)->lookupClass())->getClassLoader())));
}

void MethodTypeDescriptorAccessTest::checkValidAccess($MethodTypeDesc* mtd, $MethodHandles$Lookup* lookup) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($MethodType, mt, $cast($MethodType, $nc(mtd)->resolveConstantDesc(lookup)));
	} catch ($ReflectiveOperationException&) {
		$var($ReflectiveOperationException, unexpected, $catch());
		$throwNew($Error, $$str({"resolveConstantDesc() threw ReflectiveOperationException unexpectedly with cause "_s, $(unexpected->getCause()), " for "_s, mtd}));
	}
}

void MethodTypeDescriptorAccessTest::checkInvalidAccess($MethodTypeDesc* mtd, $MethodHandles$Lookup* lookup) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($MethodType, mt, $cast($MethodType, $nc(mtd)->resolveConstantDesc(lookup)));
		$throwNew($Error, $$str({"resolveConstantDesc() succeeded unexpectedly "_s, mtd}));
	} catch ($ReflectiveOperationException&) {
		$var($ReflectiveOperationException, expected, $catch());
		$load($IllegalAccessException);
		if ($of(expected)->getClass() != $IllegalAccessException::class$) {
			$throwNew($Error, $$str({"resolveConstantDesc() threw unexpected ReflectiveOperationException with cause "_s, $(expected->getCause()), " for "_s, mtd}));
		}
	}
}

MethodTypeDescriptorAccessTest::MethodTypeDescriptorAccessTest() {
}

$Class* MethodTypeDescriptorAccessTest::load$($String* name, bool initialize) {
	$loadClass(MethodTypeDescriptorAccessTest, name, initialize, &_MethodTypeDescriptorAccessTest_ClassInfo_, allocate$MethodTypeDescriptorAccessTest);
	return class$;
}

$Class* MethodTypeDescriptorAccessTest::class$ = nullptr;

} // pkg1