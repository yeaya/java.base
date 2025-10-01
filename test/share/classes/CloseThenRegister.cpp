#include <CloseThenRegister.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <java/nio/channels/ClosedSelectorException.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/Selector.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <jcpp.h>

#undef OP_ACCEPT

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $ClosedSelectorException = ::java::nio::channels::ClosedSelectorException;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $AbstractSelectableChannel = ::java::nio::channels::spi::AbstractSelectableChannel;

$MethodInfo _CloseThenRegister_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CloseThenRegister::*)()>(&CloseThenRegister::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&CloseThenRegister::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _CloseThenRegister_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CloseThenRegister",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CloseThenRegister_MethodInfo_
};

$Object* allocate$CloseThenRegister($Class* clazz) {
	return $of($alloc(CloseThenRegister));
}

void CloseThenRegister::init$() {
}

void CloseThenRegister::main($StringArray* args) {
	$var($Selector, sel, $Selector::open());
	$nc(sel)->close();
	$var($ServerSocketChannel, ssc, $ServerSocketChannel::open());
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(ssc)->bind($$new($InetSocketAddress, 0));
				ssc->configureBlocking(false);
				ssc->register$(sel, $SelectionKey::OP_ACCEPT);
				$throwNew($RuntimeException, "register after close does not cause CSE!"_s);
			} catch ($ClosedSelectorException&) {
				$catch();
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(ssc)->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

CloseThenRegister::CloseThenRegister() {
}

$Class* CloseThenRegister::load$($String* name, bool initialize) {
	$loadClass(CloseThenRegister, name, initialize, &_CloseThenRegister_ClassInfo_, allocate$CloseThenRegister);
	return class$;
}

$Class* CloseThenRegister::class$ = nullptr;