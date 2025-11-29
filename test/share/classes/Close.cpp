#include <Close.h>

#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/Selector.h>
#include <java/nio/channels/SocketChannel.h>
#include <jcpp.h>

#undef OP_READ

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $SocketChannel = ::java::nio::channels::SocketChannel;

$MethodInfo _Close_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Close::*)()>(&Close::init$))},
	{"check", "(Ljava/nio/channels/SelectionKey;)V", nullptr, $STATIC, $method(static_cast<void(*)($SelectionKey*)>(&Close::check)), "java.io.IOException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Close::main)), "java.lang.Exception"},
	{"open", "()Ljava/nio/channels/SelectionKey;", nullptr, $STATIC, $method(static_cast<$SelectionKey*(*)()>(&Close::open)), "java.io.IOException"},
	{"testChannelClose", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Close::testChannelClose)), "java.io.IOException"},
	{"testSocketClose", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Close::testSocketClose)), "java.io.IOException"},
	{}
};

$ClassInfo _Close_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Close",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Close_MethodInfo_
};

$Object* allocate$Close($Class* clazz) {
	return $of($alloc(Close));
}

void Close::init$() {
}

$SelectionKey* Close::open() {
	$useLocalCurrentObjectStackCache();
	$var($SocketChannel, sc, $SocketChannel::open());
	$var($Selector, sel, $Selector::open());
	$nc(sc)->configureBlocking(false);
	return sc->register$(sel, $SelectionKey::OP_READ);
}

void Close::check($SelectionKey* sk) {
	if ($nc(sk)->isValid()) {
		$throwNew($RuntimeException, "Key still valid"_s);
	}
	if ($nc($($nc(sk)->channel()))->isOpen()) {
		$throwNew($RuntimeException, "Channel still open"_s);
	}
}

void Close::testSocketClose() {
	$var($SelectionKey, sk, open());
	check(sk);
}

void Close::testChannelClose() {
	$useLocalCurrentObjectStackCache();
	$var($SelectionKey, sk, open());
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc($($nc(sk)->channel()))->close();
			check(sk);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc($($nc(sk)->selector()))->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Close::main($StringArray* args) {
	testChannelClose();
}

Close::Close() {
}

$Class* Close::load$($String* name, bool initialize) {
	$loadClass(Close, name, initialize, &_Close_ClassInfo_, allocate$Close);
	return class$;
}

$Class* Close::class$ = nullptr;