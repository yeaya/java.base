#include <sun/net/www/http/ClientVector.h>

#include <java/io/NotSerializableException.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ArrayDeque.h>
#include <java/util/Iterator.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <sun/net/www/http/HttpClient.h>
#include <sun/net/www/http/KeepAliveCache.h>
#include <sun/net/www/http/KeepAliveEntry.h>
#include <jcpp.h>

using $NotSerializableException = ::java::io::NotSerializableException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayDeque = ::java::util::ArrayDeque;
using $Iterator = ::java::util::Iterator;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $HttpClient = ::sun::net::www::http::HttpClient;
using $KeepAliveCache = ::sun::net::www::http::KeepAliveCache;
using $KeepAliveEntry = ::sun::net::www::http::KeepAliveEntry;

namespace sun {
	namespace net {
		namespace www {
			namespace http {

$FieldInfo _ClientVector_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClientVector, serialVersionUID)},
	{"lock", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $PRIVATE | $FINAL, $field(ClientVector, lock$)},
	{"nap", "I", nullptr, 0, $field(ClientVector, nap)},
	{}
};

$MethodInfo _ClientVector_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(ClientVector::*)(int32_t)>(&ClientVector::init$))},
	{"get", "()Lsun/net/www/http/HttpClient;", nullptr, 0},
	{"lock", "()V", nullptr, $FINAL, $method(static_cast<void(ClientVector::*)()>(&ClientVector::lock))},
	{"put", "(Lsun/net/www/http/HttpClient;)V", nullptr, 0},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ClientVector::*)($ObjectInputStream*)>(&ClientVector::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"remove", "(Lsun/net/www/http/HttpClient;)Z", nullptr, 0},
	{"unlock", "()V", nullptr, $FINAL, $method(static_cast<void(ClientVector::*)()>(&ClientVector::unlock))},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ClientVector::*)($ObjectOutputStream*)>(&ClientVector::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _ClientVector_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.http.ClientVector",
	"java.util.ArrayDeque",
	nullptr,
	_ClientVector_FieldInfo_,
	_ClientVector_MethodInfo_,
	"Ljava/util/ArrayDeque<Lsun/net/www/http/KeepAliveEntry;>;"
};

$Object* allocate$ClientVector($Class* clazz) {
	return $of($alloc(ClientVector));
}

void ClientVector::init$(int32_t nap) {
	$ArrayDeque::init$();
	$set(this, lock$, $new($ReentrantLock));
	this->nap = nap;
}

$HttpClient* ClientVector::get() {
	$useLocalCurrentObjectStackCache();
	lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($HttpClient, var$2, nullptr);
		bool return$1 = false;
		try {
			if (isEmpty()) {
				$assign(var$2, nullptr);
				return$1 = true;
				goto $finally;
			}
			$var($HttpClient, hc, nullptr);
			int64_t currentTime = $System::currentTimeMillis();
			do {
				$var($KeepAliveEntry, e, $cast($KeepAliveEntry, pop()));
				if ((currentTime - $nc(e)->idleStartTime) > this->nap) {
					$nc(e->hc)->closeServer();
				} else {
					$assign(hc, e->hc);
				}
			} while ((hc == nullptr) && (!isEmpty()));
			$assign(var$2, hc);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ClientVector::put($HttpClient* h) {
	$useLocalCurrentObjectStackCache();
	lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int32_t var$1 = size();
			if (var$1 >= $KeepAliveCache::getMaxConnections()) {
				$nc(h)->closeServer();
			} else {
				push($$new($KeepAliveEntry, h, $System::currentTimeMillis()));
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
}

bool ClientVector::remove($HttpClient* h) {
	$useLocalCurrentObjectStackCache();
	lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			{
				$var($Iterator, i$, this->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($KeepAliveEntry, curr, $cast($KeepAliveEntry, i$->next()));
					{
						if ($nc(curr)->hc == h) {
							var$2 = $ArrayDeque::remove(curr);
							return$1 = true;
							goto $finally;
						}
					}
				}
			}
			var$2 = false;
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ClientVector::lock() {
	$nc(this->lock$)->lock();
}

void ClientVector::unlock() {
	$nc(this->lock$)->unlock();
}

void ClientVector::writeObject($ObjectOutputStream* stream) {
	$throwNew($NotSerializableException);
}

void ClientVector::readObject($ObjectInputStream* stream) {
	$throwNew($NotSerializableException);
}

ClientVector::ClientVector() {
}

$Class* ClientVector::load$($String* name, bool initialize) {
	$loadClass(ClientVector, name, initialize, &_ClientVector_ClassInfo_, allocate$ClientVector);
	return class$;
}

$Class* ClientVector::class$ = nullptr;

			} // http
		} // www
	} // net
} // sun