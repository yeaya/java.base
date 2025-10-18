#include <sun/nio/ch/DefaultAsynchronousChannelProvider.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/spi/AsynchronousChannelProvider.h>
#include <sun/nio/ch/BsdAsynchronousChannelProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AsynchronousChannelProvider = ::java::nio::channels::spi::AsynchronousChannelProvider;
using $BsdAsynchronousChannelProvider = ::sun::nio::ch::BsdAsynchronousChannelProvider;

namespace sun {
	namespace nio {
		namespace ch {

$MethodInfo _DefaultAsynchronousChannelProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DefaultAsynchronousChannelProvider::*)()>(&DefaultAsynchronousChannelProvider::init$))},
	{"create", "()Ljava/nio/channels/spi/AsynchronousChannelProvider;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AsynchronousChannelProvider*(*)()>(&DefaultAsynchronousChannelProvider::create))},
	{}
};

$ClassInfo _DefaultAsynchronousChannelProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.ch.DefaultAsynchronousChannelProvider",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DefaultAsynchronousChannelProvider_MethodInfo_
};

$Object* allocate$DefaultAsynchronousChannelProvider($Class* clazz) {
	return $of($alloc(DefaultAsynchronousChannelProvider));
}

void DefaultAsynchronousChannelProvider::init$() {
}

$AsynchronousChannelProvider* DefaultAsynchronousChannelProvider::create() {
	return $new($BsdAsynchronousChannelProvider);
}

DefaultAsynchronousChannelProvider::DefaultAsynchronousChannelProvider() {
}

$Class* DefaultAsynchronousChannelProvider::load$($String* name, bool initialize) {
	$loadClass(DefaultAsynchronousChannelProvider, name, initialize, &_DefaultAsynchronousChannelProvider_ClassInfo_, allocate$DefaultAsynchronousChannelProvider);
	return class$;
}

$Class* DefaultAsynchronousChannelProvider::class$ = nullptr;

		} // ch
	} // nio
} // sun