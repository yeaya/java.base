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
	$FieldInfo fieldInfos$$[] = {
		{"kas", "Lsun/net/www/http/KeepAliveStream;", nullptr, 0, $field(KeepAliveCleanerEntry, kas)},
		{"hc", "Lsun/net/www/http/HttpClient;", nullptr, 0, $field(KeepAliveCleanerEntry, hc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/net/www/http/KeepAliveStream;Lsun/net/www/http/HttpClient;)V", nullptr, $PUBLIC, $method(KeepAliveCleanerEntry, init$, void, $KeepAliveStream*, $HttpClient*)},
		{"getHttpClient", "()Lsun/net/www/http/HttpClient;", nullptr, $PROTECTED, $virtualMethod(KeepAliveCleanerEntry, getHttpClient, $HttpClient*)},
		{"getKeepAliveStream", "()Lsun/net/www/http/KeepAliveStream;", nullptr, $PROTECTED, $virtualMethod(KeepAliveCleanerEntry, getKeepAliveStream, $KeepAliveStream*)},
		{"getQueuedForCleanup", "()Z", nullptr, $PROTECTED, $virtualMethod(KeepAliveCleanerEntry, getQueuedForCleanup, bool)},
		{"setQueuedForCleanup", "()V", nullptr, $PROTECTED, $virtualMethod(KeepAliveCleanerEntry, setQueuedForCleanup, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.www.http.KeepAliveCleanerEntry",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(KeepAliveCleanerEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeepAliveCleanerEntry);
	});
	return class$;
}

$Class* KeepAliveCleanerEntry::class$ = nullptr;

			} // http
		} // www
	} // net
} // sun