#include <NonPublicProxyClass$PublicInterface.h>

#include <NonPublicProxyClass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _NonPublicProxyClass$PublicInterface_MethodInfo_[] = {
	{"foo", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _NonPublicProxyClass$PublicInterface_InnerClassesInfo_[] = {
	{"NonPublicProxyClass$PublicInterface", "NonPublicProxyClass", "PublicInterface", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _NonPublicProxyClass$PublicInterface_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"NonPublicProxyClass$PublicInterface",
	nullptr,
	nullptr,
	nullptr,
	_NonPublicProxyClass$PublicInterface_MethodInfo_,
	nullptr,
	nullptr,
	_NonPublicProxyClass$PublicInterface_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"NonPublicProxyClass"
};

$Object* allocate$NonPublicProxyClass$PublicInterface($Class* clazz) {
	return $of($alloc(NonPublicProxyClass$PublicInterface));
}

$Class* NonPublicProxyClass$PublicInterface::load$($String* name, bool initialize) {
	$loadClass(NonPublicProxyClass$PublicInterface, name, initialize, &_NonPublicProxyClass$PublicInterface_ClassInfo_, allocate$NonPublicProxyClass$PublicInterface);
	return class$;
}

$Class* NonPublicProxyClass$PublicInterface::class$ = nullptr;