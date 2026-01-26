#include <Attack.h>

#include <java/io/IOException.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/SecurityException.h>
#include <java/net/InetAddress.h>
#include <java/net/Socket.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $InetAddress = ::java::net::InetAddress;
using $Socket = ::java::net::Socket;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

$FieldInfo _Attack_FieldInfo_[] = {
	{"latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $FINAL, $field(Attack, latch)},
	{"failedDueToSecurityException", "Z", nullptr, $PRIVATE | $VOLATILE, $field(Attack, failedDueToSecurityException$)},
	{}
};

$MethodInfo _Attack_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Attack, init$, void)},
	{"Attack", "()V", nullptr, $PUBLIC, $virtualMethod(Attack, Attack$, void)},
	{"failedDueToSecurityException", "()Z", nullptr, $PUBLIC, $virtualMethod(Attack, failedDueToSecurityException, bool)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Attack, run, void)},
	{"waitUntilDone", "()V", nullptr, $PUBLIC, $virtualMethod(Attack, waitUntilDone, void), "java.lang.InterruptedException"},
	{}
};

$ClassInfo _Attack_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Attack",
	"java.lang.Object",
	"java.lang.Runnable",
	_Attack_FieldInfo_,
	_Attack_MethodInfo_
};

$Object* allocate$Attack($Class* clazz) {
	return $of($alloc(Attack));
}

void Attack::init$() {
	$set(this, latch, $new($CountDownLatch, 1));
}

void Attack::Attack$() {
	$beforeCallerSensitive();
	if (Attack::class$->getClassLoader() != nullptr) {
		$throwNew($RuntimeException, "Attack class not on boot class path"_s);
	}
}

void Attack::run() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$$new($Socket, $($InetAddress::getLoopbackAddress()), 9999)->close();
				$throwNew($RuntimeException, "Connected (not expected)"_s);
			} catch ($IOException& e) {
				$throwNew($RuntimeException, "IOException (not expected)"_s);
			} catch ($SecurityException& e) {
				this->failedDueToSecurityException$ = true;
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->latch)->countDown();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Attack::waitUntilDone() {
	$nc(this->latch)->await();
}

bool Attack::failedDueToSecurityException() {
	return this->failedDueToSecurityException$;
}

Attack::Attack() {
}

$Class* Attack::load$($String* name, bool initialize) {
	$loadClass(Attack, name, initialize, &_Attack_ClassInfo_, allocate$Attack);
	return class$;
}

$Class* Attack::class$ = nullptr;