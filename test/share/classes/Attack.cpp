#include <Attack.h>

#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetAddress.h>
#include <java/net/Socket.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Attack::*)()>(&Attack::init$))},
	{"Attack", "()V", nullptr, $PUBLIC},
	{"failedDueToSecurityException", "()Z", nullptr, $PUBLIC},
	{"run", "()V", nullptr, $PUBLIC},
	{"waitUntilDone", "()V", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
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
			} catch ($IOException&) {
				$var($IOException, e, $catch());
				$throwNew($RuntimeException, "IOException (not expected)"_s);
			} catch ($SecurityException&) {
				$var($SecurityException, e, $catch());
				this->failedDueToSecurityException$ = true;
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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