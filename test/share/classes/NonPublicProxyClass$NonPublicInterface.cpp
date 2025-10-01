#include <NonPublicProxyClass$NonPublicInterface.h>

#include <NonPublicProxyClass.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $NonPublicProxyClass = ::NonPublicProxyClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _NonPublicProxyClass$NonPublicInterface_MethodInfo_[] = {
	{"bar", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _NonPublicProxyClass$NonPublicInterface_InnerClassesInfo_[] = {
	{"NonPublicProxyClass$NonPublicInterface", "NonPublicProxyClass", "NonPublicInterface", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _NonPublicProxyClass$NonPublicInterface_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"NonPublicProxyClass$NonPublicInterface",
	nullptr,
	nullptr,
	nullptr,
	_NonPublicProxyClass$NonPublicInterface_MethodInfo_,
	nullptr,
	nullptr,
	_NonPublicProxyClass$NonPublicInterface_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"NonPublicProxyClass"
};

$Object* allocate$NonPublicProxyClass$NonPublicInterface($Class* clazz) {
	return $of($alloc(NonPublicProxyClass$NonPublicInterface));
}

$Class* NonPublicProxyClass$NonPublicInterface::load$($String* name, bool initialize) {
	$loadClass(NonPublicProxyClass$NonPublicInterface, name, initialize, &_NonPublicProxyClass$NonPublicInterface_ClassInfo_, allocate$NonPublicProxyClass$NonPublicInterface);
	return class$;
}

$Class* NonPublicProxyClass$NonPublicInterface::class$ = nullptr;