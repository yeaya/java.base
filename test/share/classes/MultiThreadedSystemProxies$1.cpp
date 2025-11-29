#include <MultiThreadedSystemProxies$1.h>

#include <MultiThreadedSystemProxies.h>
#include <java/net/ProxySelector.h>
#include <java/net/URI.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ProxySelector = ::java::net::ProxySelector;
using $URI = ::java::net::URI;

$FieldInfo _MultiThreadedSystemProxies$1_FieldInfo_[] = {
	{"val$uri", "Ljava/net/URI;", nullptr, $FINAL | $SYNTHETIC, $field(MultiThreadedSystemProxies$1, val$uri)},
	{"val$ps", "Ljava/net/ProxySelector;", nullptr, $FINAL | $SYNTHETIC, $field(MultiThreadedSystemProxies$1, val$ps)},
	{}
};

$MethodInfo _MultiThreadedSystemProxies$1_MethodInfo_[] = {
	{"<init>", "(Ljava/net/ProxySelector;Ljava/net/URI;)V", "()V", 0, $method(static_cast<void(MultiThreadedSystemProxies$1::*)($ProxySelector*,$URI*)>(&MultiThreadedSystemProxies$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MultiThreadedSystemProxies$1_EnclosingMethodInfo_ = {
	"MultiThreadedSystemProxies",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _MultiThreadedSystemProxies$1_InnerClassesInfo_[] = {
	{"MultiThreadedSystemProxies$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MultiThreadedSystemProxies$1_ClassInfo_ = {
	$ACC_SUPER,
	"MultiThreadedSystemProxies$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_MultiThreadedSystemProxies$1_FieldInfo_,
	_MultiThreadedSystemProxies$1_MethodInfo_,
	nullptr,
	&_MultiThreadedSystemProxies$1_EnclosingMethodInfo_,
	_MultiThreadedSystemProxies$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MultiThreadedSystemProxies"
};

$Object* allocate$MultiThreadedSystemProxies$1($Class* clazz) {
	return $of($alloc(MultiThreadedSystemProxies$1));
}

void MultiThreadedSystemProxies$1::init$($ProxySelector* val$ps, $URI* val$uri) {
	$set(this, val$ps, val$ps);
	$set(this, val$uri, val$uri);
}

void MultiThreadedSystemProxies$1::run() {
	try {
		$nc(this->val$ps)->select(this->val$uri);
	} catch ($Exception& x) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(x));
	}
}

MultiThreadedSystemProxies$1::MultiThreadedSystemProxies$1() {
}

$Class* MultiThreadedSystemProxies$1::load$($String* name, bool initialize) {
	$loadClass(MultiThreadedSystemProxies$1, name, initialize, &_MultiThreadedSystemProxies$1_ClassInfo_, allocate$MultiThreadedSystemProxies$1);
	return class$;
}

$Class* MultiThreadedSystemProxies$1::class$ = nullptr;