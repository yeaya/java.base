#include <CloseInvalidatesKeys.h>

#include <java/nio/channels/DatagramChannel.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/Selector.h>
#include <jcpp.h>

#undef OP_WRITE

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $AbstractSelectableChannel = ::java::nio::channels::spi::AbstractSelectableChannel;

$MethodInfo _CloseInvalidatesKeys_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CloseInvalidatesKeys::*)()>(&CloseInvalidatesKeys::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&CloseInvalidatesKeys::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _CloseInvalidatesKeys_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CloseInvalidatesKeys",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CloseInvalidatesKeys_MethodInfo_
};

$Object* allocate$CloseInvalidatesKeys($Class* clazz) {
	return $of($alloc(CloseInvalidatesKeys));
}

void CloseInvalidatesKeys::init$() {
}

void CloseInvalidatesKeys::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($DatagramChannel, ch, $DatagramChannel::open());
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(ch)->configureBlocking(false);
			$var($Selector, sel, $Selector::open());
			$var($SelectionKey, key, ch->register$(sel, $SelectionKey::OP_WRITE));
			$nc(sel)->close();
			if ($nc(key)->isValid()) {
				$throwNew($Exception, "Key valid after selector closed"_s);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(ch)->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

CloseInvalidatesKeys::CloseInvalidatesKeys() {
}

$Class* CloseInvalidatesKeys::load$($String* name, bool initialize) {
	$loadClass(CloseInvalidatesKeys, name, initialize, &_CloseInvalidatesKeys_ClassInfo_, allocate$CloseInvalidatesKeys);
	return class$;
}

$Class* CloseInvalidatesKeys::class$ = nullptr;