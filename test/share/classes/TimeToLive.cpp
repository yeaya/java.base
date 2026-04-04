#include <TimeToLive.h>
#include <java/net/MulticastSocket.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MulticastSocket = ::java::net::MulticastSocket;

$ints* TimeToLive::new_ttls = nullptr;
$ints* TimeToLive::bad_ttls = nullptr;

void TimeToLive::init$() {
}

void TimeToLive::main($StringArray* args) {
	$init(TimeToLive);
	$useLocalObjectStack();
	{
		$var($MulticastSocket, socket, $new($MulticastSocket));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				int32_t ttl = socket->getTimeToLive();
				$nc($System::out)->println($$str({"default ttl: "_s, $$str(ttl)}));
				for (int32_t i = 0; i < $nc(TimeToLive::new_ttls)->length; ++i) {
					socket->setTimeToLive(TimeToLive::new_ttls->get(i));
					if (!(TimeToLive::new_ttls->get(i) == socket->getTimeToLive())) {
						$throwNew($RuntimeException, $$str({"test failure, set/get differ: "_s, $$str(TimeToLive::new_ttls->get(i)), " /  "_s, $$str(socket->getTimeToLive())}));
					}
				}
				for (int32_t j = 0; j < $nc(TimeToLive::bad_ttls)->length; ++j) {
					bool exception = false;
					try {
						socket->setTimeToLive(TimeToLive::bad_ttls->get(j));
					} catch ($IllegalArgumentException& e) {
						exception = true;
					}
					if (!exception) {
						$throwNew($RuntimeException, $$str({"bad argument accepted: "_s, $$str(TimeToLive::bad_ttls->get(j))}));
					}
				}
			} catch ($Throwable& t$) {
				try {
					socket->close();
				} catch ($Throwable& x2) {
					t$->addSuppressed(x2);
				}
				$throw(t$);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			socket->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TimeToLive::clinit$($Class* clazz) {
	$assignStatic(TimeToLive::new_ttls, $new($ints, {
		0,
		1,
		127,
		254,
		255
	}));
	$assignStatic(TimeToLive::bad_ttls, $new($ints, {
		-1,
		256
	}));
}

TimeToLive::TimeToLive() {
}

$Class* TimeToLive::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"new_ttls", "[I", nullptr, $STATIC, $staticField(TimeToLive, new_ttls)},
		{"bad_ttls", "[I", nullptr, $STATIC, $staticField(TimeToLive, bad_ttls)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TimeToLive, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TimeToLive, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TimeToLive",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TimeToLive, name, initialize, &classInfo$$, TimeToLive::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TimeToLive);
	});
	return class$;
}

$Class* TimeToLive::class$ = nullptr;