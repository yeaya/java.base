#include <sun/net/www/http/KeepAliveCache$1.h>
#include <jdk/internal/misc/InnocuousThread.h>
#include <sun/net/www/http/KeepAliveCache.h>
#include <jcpp.h>

#undef MAX_PRIORITY

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InnocuousThread = ::jdk::internal::misc::InnocuousThread;
using $KeepAliveCache = ::sun::net::www::http::KeepAliveCache;

namespace sun {
	namespace net {
		namespace www {
			namespace http {

void KeepAliveCache$1::init$($KeepAliveCache* this$0, $KeepAliveCache* val$cache) {
	$set(this, this$0, this$0);
	$set(this, val$cache, val$cache);
}

$Object* KeepAliveCache$1::run() {
	$set(this->this$0, keepAliveTimer, $InnocuousThread::newSystemThread("Keep-Alive-Timer"_s, this->val$cache));
	$nc(this->this$0->keepAliveTimer)->setDaemon(true);
	this->this$0->keepAliveTimer->setPriority($Thread::MAX_PRIORITY - 2);
	this->this$0->keepAliveTimer->start();
	return nullptr;
}

KeepAliveCache$1::KeepAliveCache$1() {
}

$Class* KeepAliveCache$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/net/www/http/KeepAliveCache;", nullptr, $FINAL | $SYNTHETIC, $field(KeepAliveCache$1, this$0)},
		{"val$cache", "Lsun/net/www/http/KeepAliveCache;", nullptr, $FINAL | $SYNTHETIC, $field(KeepAliveCache$1, val$cache)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/net/www/http/KeepAliveCache;Lsun/net/www/http/KeepAliveCache;)V", nullptr, 0, $method(KeepAliveCache$1, init$, void, $KeepAliveCache*, $KeepAliveCache*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(KeepAliveCache$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.www.http.KeepAliveCache",
		"put",
		"(Ljava/net/URL;Ljava/lang/Object;Lsun/net/www/http/HttpClient;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.http.KeepAliveCache$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.www.http.KeepAliveCache$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.www.http.KeepAliveCache"
	};
	$loadClass(KeepAliveCache$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeepAliveCache$1);
	});
	return class$;
}

$Class* KeepAliveCache$1::class$ = nullptr;

			} // http
		} // www
	} // net
} // sun