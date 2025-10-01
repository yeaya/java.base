#include <ProxyClashTest$ClashWithRunnable.h>

#include <ProxyClashTest.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ProxyClashTest = ::ProxyClashTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ProxyClashTest$ClashWithRunnable_MethodInfo_[] = {
	{"foo", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&ProxyClashTest$ClashWithRunnable::foo))},
	{"run", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&ProxyClashTest$ClashWithRunnable::run))},
	{}
};

$InnerClassInfo _ProxyClashTest$ClashWithRunnable_InnerClassesInfo_[] = {
	{"ProxyClashTest$ClashWithRunnable", "ProxyClashTest", "ClashWithRunnable", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ProxyClashTest$ClashWithRunnable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"ProxyClashTest$ClashWithRunnable",
	nullptr,
	nullptr,
	nullptr,
	_ProxyClashTest$ClashWithRunnable_MethodInfo_,
	nullptr,
	nullptr,
	_ProxyClashTest$ClashWithRunnable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ProxyClashTest"
};

$Object* allocate$ProxyClashTest$ClashWithRunnable($Class* clazz) {
	return $of($alloc(ProxyClashTest$ClashWithRunnable));
}

int32_t ProxyClashTest$ClashWithRunnable::run() {
	return 123;
}

void ProxyClashTest$ClashWithRunnable::foo() {
}

$Class* ProxyClashTest$ClashWithRunnable::load$($String* name, bool initialize) {
	$loadClass(ProxyClashTest$ClashWithRunnable, name, initialize, &_ProxyClashTest$ClashWithRunnable_ClassInfo_, allocate$ProxyClashTest$ClashWithRunnable);
	return class$;
}

$Class* ProxyClashTest$ClashWithRunnable::class$ = nullptr;