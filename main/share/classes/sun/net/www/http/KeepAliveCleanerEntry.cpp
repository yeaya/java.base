#include <sun/net/www/http/KeepAliveCleanerEntry.h>

#include <sun/net/www/http/HttpClient.h>
#include <sun/net/www/http/KeepAliveStream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpClient = ::sun::net::www::http::HttpClient;
using $KeepAliveStream = ::sun::net::www::http::KeepAliveStream;

namespace sun {
	namespace net {
		namespace www {
			namespace http {

$FieldInfo _KeepAliveCleanerEntry_FieldInfo_[] = {
	{"kas", "Lsun/net/www/http/KeepAliveStream;", nullptr, 0, $field(KeepAliveCleanerEntry, kas)},
	{"hc", "Lsun/net/www/http/HttpClient;", nullptr, 0, $field(KeepAliveCleanerEntry, hc)},
	{}
};

$MethodInfo _KeepAliveCleanerEntry_MethodInfo_[] = {
	{"<init>", "(Lsun/net/www/http/KeepAliveStream;Lsun/net/www/http/HttpClient;)V", nullptr, $PUBLIC, $method(static_cast<void(KeepAliveCleanerEntry::*)($KeepAliveStream*,$HttpClient*)>(&KeepAliveCleanerEntry::init$))},
	{"getHttpClient", "()Lsun/net/www/http/HttpClient;", nullptr, $PROTECTED},
	{"getKeepAliveStream", "()Lsun/net/www/http/KeepAliveStream;", nullptr, $PROTECTED},
	{"getQueuedForCleanup", "()Z", nullptr, $PROTECTED},
	{"setQueuedForCleanup", "()V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _KeepAliveCleanerEntry_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.http.KeepAliveCleanerEntry",
	"java.lang.Object",
	nullptr,
	_KeepAliveCleanerEntry_FieldInfo_,
	_KeepAliveCleanerEntry_MethodInfo_
};

$Object* allocate$KeepAliveCleanerEntry($Class* clazz) {
	return $of($alloc(KeepAliveCleanerEntry));
}

void KeepAliveCleanerEntry::init$($KeepAliveStream* kas, $HttpClient* hc) {
	$set(this, kas, kas);
	$set(this, hc, hc);
}

$KeepAliveStream* KeepAliveCleanerEntry::getKeepAliveStream() {
	return this->kas;
}

$HttpClient* KeepAliveCleanerEntry::getHttpClient() {
	return this->hc;
}

void KeepAliveCleanerEntry::setQueuedForCleanup() {
	$nc(this->kas)->queuedForCleanup = true;
}

bool KeepAliveCleanerEntry::getQueuedForCleanup() {
	return $nc(this->kas)->queuedForCleanup;
}

KeepAliveCleanerEntry::KeepAliveCleanerEntry() {
}

$Class* KeepAliveCleanerEntry::load$($String* name, bool initialize) {
	$loadClass(KeepAliveCleanerEntry, name, initialize, &_KeepAliveCleanerEntry_ClassInfo_, allocate$KeepAliveCleanerEntry);
	return class$;
}

$Class* KeepAliveCleanerEntry::class$ = nullptr;

			} // http
		} // www
	} // net
} // sun