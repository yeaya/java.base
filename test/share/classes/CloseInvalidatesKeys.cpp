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
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;

void CloseInvalidatesKeys::init$() {
}

void CloseInvalidatesKeys::main($StringArray* args) {
	$useLocalObjectStack();
	$var($DatagramChannel, ch, $DatagramChannel::open());
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

CloseInvalidatesKeys::CloseInvalidatesKeys() {
}

$Class* CloseInvalidatesKeys::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CloseInvalidatesKeys, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CloseInvalidatesKeys, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"CloseInvalidatesKeys",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CloseInvalidatesKeys, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CloseInvalidatesKeys);
	});
	return class$;
}

$Class* CloseInvalidatesKeys::class$ = nullptr;