#include <Trivial.h>

#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/Selector.h>
#include <java/nio/channels/SocketChannel.h>
#include <jcpp.h>

#undef OP_READ

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $SocketChannel = ::java::nio::channels::SocketChannel;

$MethodInfo _Trivial_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Trivial::*)()>(&Trivial::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Trivial::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Trivial_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Trivial",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Trivial_MethodInfo_
};

$Object* allocate$Trivial($Class* clazz) {
	return $of($alloc(Trivial));
}

void Trivial::init$() {
}

void Trivial::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($SocketChannel, sc, $SocketChannel::open());
	$var($Selector, sel, $Selector::open());
	{
		$var($Throwable, var$0, nullptr);
		try {
			if ($nc(sc)->keyFor(sel) != nullptr) {
				$throwNew($Exception, "keyFor != null"_s);
			}
			$nc(sc)->configureBlocking(false);
			$var($SelectionKey, sk, sc->register$(sel, $SelectionKey::OP_READ, args));
			if (sc->keyFor(sel) != sk) {
				$throwNew($Exception, $$str({"keyFor returned "_s, $(sc->keyFor(sel))}));
			}
			if (!$equals($nc(sk)->attachment(), args)) {
				$throwNew($Exception, $$str({"attachment() returned "_s, $(sk->attachment())}));
			}
			$var(Trivial, t, $new(Trivial));
			$nc(sk)->attach(t);
			if (!$equals(sk->attachment(), t)) {
				$throwNew($Exception, "Wrong attachment"_s);
			}
			sk->isReadable();
			sk->isWritable();
			sk->isConnectable();
			sk->isAcceptable();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(sel)->close();
			$nc(sc)->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

Trivial::Trivial() {
}

$Class* Trivial::load$($String* name, bool initialize) {
	$loadClass(Trivial, name, initialize, &_Trivial_ClassInfo_, allocate$Trivial);
	return class$;
}

$Class* Trivial::class$ = nullptr;