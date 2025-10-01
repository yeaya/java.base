#include <sun/net/www/http/KeepAliveStreamCleaner.h>

#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/LinkedList.h>
#include <java/util/concurrent/TimeUnit.h>
#include <java/util/concurrent/locks/Condition.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <sun/net/www/http/HttpClient.h>
#include <sun/net/www/http/KeepAliveCleanerEntry.h>
#include <sun/net/www/http/KeepAliveStream.h>
#include <sun/net/www/http/KeepAliveStreamCleaner$1.h>
#include <sun/net/www/http/KeepAliveStreamCleaner$2.h>
#include <jcpp.h>

#undef MILLISECONDS
#undef MAX_DATA_REMAINING
#undef MAX_RETRIES
#undef MAX_CAPACITY
#undef TIMEOUT

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $LinkedList = ::java::util::LinkedList;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $Condition = ::java::util::concurrent::locks::Condition;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $NetworkClient = ::sun::net::NetworkClient;
using $MeteredStream = ::sun::net::www::MeteredStream;
using $HttpClient = ::sun::net::www::http::HttpClient;
using $KeepAliveCleanerEntry = ::sun::net::www::http::KeepAliveCleanerEntry;
using $KeepAliveStream = ::sun::net::www::http::KeepAliveStream;
using $KeepAliveStreamCleaner$1 = ::sun::net::www::http::KeepAliveStreamCleaner$1;
using $KeepAliveStreamCleaner$2 = ::sun::net::www::http::KeepAliveStreamCleaner$2;

namespace sun {
	namespace net {
		namespace www {
			namespace http {

$FieldInfo _KeepAliveStreamCleaner_FieldInfo_[] = {
	{"MAX_DATA_REMAINING", "I", nullptr, $PROTECTED | $STATIC, $staticField(KeepAliveStreamCleaner, MAX_DATA_REMAINING)},
	{"MAX_CAPACITY", "I", nullptr, $PROTECTED | $STATIC, $staticField(KeepAliveStreamCleaner, MAX_CAPACITY)},
	{"TIMEOUT", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(KeepAliveStreamCleaner, TIMEOUT)},
	{"MAX_RETRIES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KeepAliveStreamCleaner, MAX_RETRIES)},
	{"queueLock", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $PRIVATE | $FINAL, $field(KeepAliveStreamCleaner, queueLock)},
	{"waiter", "Ljava/util/concurrent/locks/Condition;", nullptr, $PRIVATE | $FINAL, $field(KeepAliveStreamCleaner, waiter)},
	{}
};

$MethodInfo _KeepAliveStreamCleaner_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(KeepAliveStreamCleaner::*)()>(&KeepAliveStreamCleaner::init$))},
	{"lock", "()V", nullptr, $FINAL, $method(static_cast<void(KeepAliveStreamCleaner::*)()>(&KeepAliveStreamCleaner::lock))},
	{"offer", "(Lsun/net/www/http/KeepAliveCleanerEntry;)Z", nullptr, $PUBLIC},
	{"offer", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"run", "()V", nullptr, $PUBLIC},
	{"signalAll", "()V", nullptr, $FINAL, $method(static_cast<void(KeepAliveStreamCleaner::*)()>(&KeepAliveStreamCleaner::signalAll))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unlock", "()V", nullptr, $FINAL, $method(static_cast<void(KeepAliveStreamCleaner::*)()>(&KeepAliveStreamCleaner::unlock))},
	{}
};

$InnerClassInfo _KeepAliveStreamCleaner_InnerClassesInfo_[] = {
	{"sun.net.www.http.KeepAliveStreamCleaner$2", nullptr, nullptr, 0},
	{"sun.net.www.http.KeepAliveStreamCleaner$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _KeepAliveStreamCleaner_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.http.KeepAliveStreamCleaner",
	"java.util.LinkedList",
	"java.lang.Runnable",
	_KeepAliveStreamCleaner_FieldInfo_,
	_KeepAliveStreamCleaner_MethodInfo_,
	"Ljava/util/LinkedList<Lsun/net/www/http/KeepAliveCleanerEntry;>;Ljava/lang/Runnable;",
	nullptr,
	_KeepAliveStreamCleaner_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.net.www.http.KeepAliveStreamCleaner$2,sun.net.www.http.KeepAliveStreamCleaner$1"
};

$Object* allocate$KeepAliveStreamCleaner($Class* clazz) {
	return $of($alloc(KeepAliveStreamCleaner));
}

$Object* KeepAliveStreamCleaner::clone() {
	 return this->$LinkedList::clone();
}

bool KeepAliveStreamCleaner::equals(Object$* o) {
	 return this->$LinkedList::equals(o);
}

int32_t KeepAliveStreamCleaner::hashCode() {
	 return this->$LinkedList::hashCode();
}

$String* KeepAliveStreamCleaner::toString() {
	 return this->$LinkedList::toString();
}

void KeepAliveStreamCleaner::finalize() {
	this->$LinkedList::finalize();
}

int32_t KeepAliveStreamCleaner::MAX_DATA_REMAINING = 0;
int32_t KeepAliveStreamCleaner::MAX_CAPACITY = 0;

void KeepAliveStreamCleaner::init$() {
	$LinkedList::init$();
	$set(this, queueLock, $new($ReentrantLock));
	$set(this, waiter, $nc(this->queueLock)->newCondition());
}

void KeepAliveStreamCleaner::signalAll() {
	$nc(this->waiter)->signalAll();
}

void KeepAliveStreamCleaner::lock() {
	$nc(this->queueLock)->lock();
}

void KeepAliveStreamCleaner::unlock() {
	$nc(this->queueLock)->unlock();
}

bool KeepAliveStreamCleaner::offer($KeepAliveCleanerEntry* e) {
	if (size() >= KeepAliveStreamCleaner::MAX_CAPACITY) {
		return false;
	}
	return $LinkedList::offer(e);
}

void KeepAliveStreamCleaner::run() {
	$var($KeepAliveCleanerEntry, kace, nullptr);
	do {
		try {
			lock();
			{
				$var($Throwable, var$0, nullptr);
				try {
					int64_t before = $System::currentTimeMillis();
					int64_t timeout = KeepAliveStreamCleaner::TIMEOUT;
					while (($assign(kace, $cast($KeepAliveCleanerEntry, poll()))) == nullptr) {
						$init($TimeUnit);
						$nc(this->waiter)->await(timeout, $TimeUnit::MILLISECONDS);
						int64_t after = $System::currentTimeMillis();
						int64_t elapsed = after - before;
						if (elapsed > timeout) {
							$assign(kace, $cast($KeepAliveCleanerEntry, poll()));
							break;
						}
						before = after;
						timeout -= elapsed;
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} /*finally*/ {
					unlock();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
			if (kace == nullptr) {
				break;
			}
			$var($KeepAliveStream, kas, $nc(kace)->getKeepAliveStream());
			if (kas != nullptr) {
				kas->lock();
				{
					$var($Throwable, var$1, nullptr);
					try {
						$var($HttpClient, hc, kace->getHttpClient());
						{
							$var($Throwable, var$2, nullptr);
							try {
								try {
									if (hc != nullptr && !hc->isInKeepAliveCache()) {
										int32_t oldTimeout = hc->getReadTimeout();
										hc->setReadTimeout(KeepAliveStreamCleaner::TIMEOUT);
										int64_t remainingToRead = kas->remainingToRead();
										if (remainingToRead > 0) {
											int64_t n = 0;
											int32_t retries = 0;
											while (n < remainingToRead && retries < KeepAliveStreamCleaner::MAX_RETRIES) {
												remainingToRead = remainingToRead - n;
												n = kas->skip(remainingToRead);
												if (n == 0) {
													++retries;
												}
											}
											remainingToRead = remainingToRead - n;
										}
										if (remainingToRead == 0) {
											hc->setReadTimeout(oldTimeout);
											hc->finished();
										} else {
											hc->closeServer();
										}
									}
								} catch ($IOException&) {
									$var($IOException, ioe, $catch());
									$nc(hc)->closeServer();
								}
							} catch ($Throwable&) {
								$assign(var$2, $catch());
							} /*finally*/ {
								kas->setClosed();
							}
							if (var$2 != nullptr) {
								$throw(var$2);
							}
						}
					} catch ($Throwable&) {
						$assign(var$1, $catch());
					} /*finally*/ {
						kas->unlock();
					}
					if (var$1 != nullptr) {
						$throw(var$1);
					}
				}
			}
		} catch ($InterruptedException&) {
			$catch();
		}
	} while (kace != nullptr);
}

bool KeepAliveStreamCleaner::offer(Object$* e) {
	return this->offer($cast($KeepAliveCleanerEntry, e));
}

void clinit$KeepAliveStreamCleaner($Class* class$) {
	$beforeCallerSensitive();
	KeepAliveStreamCleaner::MAX_DATA_REMAINING = 512;
	KeepAliveStreamCleaner::MAX_CAPACITY = 10;
	{
		$var($String, maxDataKey, "http.KeepAlive.remainingData"_s);
		int32_t maxData = $nc(($cast($Integer, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($KeepAliveStreamCleaner$1)))))))->intValue() * 1024;
		KeepAliveStreamCleaner::MAX_DATA_REMAINING = maxData;
		$var($String, maxCapacityKey, "http.KeepAlive.queuedConnections"_s);
		int32_t maxCapacity = $nc(($cast($Integer, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($KeepAliveStreamCleaner$2)))))))->intValue();
		KeepAliveStreamCleaner::MAX_CAPACITY = maxCapacity;
	}
}

KeepAliveStreamCleaner::KeepAliveStreamCleaner() {
}

$Class* KeepAliveStreamCleaner::load$($String* name, bool initialize) {
	$loadClass(KeepAliveStreamCleaner, name, initialize, &_KeepAliveStreamCleaner_ClassInfo_, clinit$KeepAliveStreamCleaner, allocate$KeepAliveStreamCleaner);
	return class$;
}

$Class* KeepAliveStreamCleaner::class$ = nullptr;

			} // http
		} // www
	} // net
} // sun