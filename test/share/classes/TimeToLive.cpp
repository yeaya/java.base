#include <TimeToLive.h>

#include <java/net/MulticastSocket.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $DatagramSocket = ::java::net::DatagramSocket;
using $MulticastSocket = ::java::net::MulticastSocket;

$FieldInfo _TimeToLive_FieldInfo_[] = {
	{"new_ttls", "[I", nullptr, $STATIC, $staticField(TimeToLive, new_ttls)},
	{"bad_ttls", "[I", nullptr, $STATIC, $staticField(TimeToLive, bad_ttls)},
	{}
};

$MethodInfo _TimeToLive_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TimeToLive::*)()>(&TimeToLive::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TimeToLive::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _TimeToLive_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TimeToLive",
	"java.lang.Object",
	nullptr,
	_TimeToLive_FieldInfo_,
	_TimeToLive_MethodInfo_
};

$Object* allocate$TimeToLive($Class* clazz) {
	return $of($alloc(TimeToLive));
}

$ints* TimeToLive::new_ttls = nullptr;
$ints* TimeToLive::bad_ttls = nullptr;

void TimeToLive::init$() {
}

void TimeToLive::main($StringArray* args) {
	$init(TimeToLive);
	$useLocalCurrentObjectStackCache();
	{
		$var($MulticastSocket, socket, $new($MulticastSocket));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					int32_t ttl = socket->getTimeToLive();
					$nc($System::out)->println($$str({"default ttl: "_s, $$str(ttl)}));
					for (int32_t i = 0; i < $nc(TimeToLive::new_ttls)->length; ++i) {
						socket->setTimeToLive($nc(TimeToLive::new_ttls)->get(i));
						if (!($nc(TimeToLive::new_ttls)->get(i) == socket->getTimeToLive())) {
							$throwNew($RuntimeException, $$str({"test failure, set/get differ: "_s, $$str($nc(TimeToLive::new_ttls)->get(i)), " /  "_s, $$str(socket->getTimeToLive())}));
						}
					}
					for (int32_t j = 0; j < $nc(TimeToLive::bad_ttls)->length; ++j) {
						bool exception = false;
						try {
							socket->setTimeToLive($nc(TimeToLive::bad_ttls)->get(j));
						} catch ($IllegalArgumentException& e) {
							exception = true;
						}
						if (!exception) {
							$throwNew($RuntimeException, $$str({"bad argument accepted: "_s, $$str($nc(TimeToLive::bad_ttls)->get(j))}));
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
}

void clinit$TimeToLive($Class* class$) {
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
	$loadClass(TimeToLive, name, initialize, &_TimeToLive_ClassInfo_, clinit$TimeToLive, allocate$TimeToLive);
	return class$;
}

$Class* TimeToLive::class$ = nullptr;