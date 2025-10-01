#include <sun/net/www/http/KeepAliveEntry.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/net/www/http/HttpClient.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpClient = ::sun::net::www::http::HttpClient;

namespace sun {
	namespace net {
		namespace www {
			namespace http {

$FieldInfo _KeepAliveEntry_FieldInfo_[] = {
	{"hc", "Lsun/net/www/http/HttpClient;", nullptr, 0, $field(KeepAliveEntry, hc)},
	{"idleStartTime", "J", nullptr, 0, $field(KeepAliveEntry, idleStartTime)},
	{}
};

$MethodInfo _KeepAliveEntry_MethodInfo_[] = {
	{"<init>", "(Lsun/net/www/http/HttpClient;J)V", nullptr, 0, $method(static_cast<void(KeepAliveEntry::*)($HttpClient*,int64_t)>(&KeepAliveEntry::init$))},
	{}
};

$ClassInfo _KeepAliveEntry_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.http.KeepAliveEntry",
	"java.lang.Object",
	nullptr,
	_KeepAliveEntry_FieldInfo_,
	_KeepAliveEntry_MethodInfo_
};

$Object* allocate$KeepAliveEntry($Class* clazz) {
	return $of($alloc(KeepAliveEntry));
}

void KeepAliveEntry::init$($HttpClient* hc, int64_t idleStartTime) {
	$set(this, hc, hc);
	this->idleStartTime = idleStartTime;
}

KeepAliveEntry::KeepAliveEntry() {
}

$Class* KeepAliveEntry::load$($String* name, bool initialize) {
	$loadClass(KeepAliveEntry, name, initialize, &_KeepAliveEntry_ClassInfo_, allocate$KeepAliveEntry);
	return class$;
}

$Class* KeepAliveEntry::class$ = nullptr;

			} // http
		} // www
	} // net
} // sun