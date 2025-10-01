#include <sun/net/www/http/KeepAliveCache$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/misc/InnocuousThread.h>
#include <sun/net/www/http/KeepAliveCache.h>
#include <jcpp.h>

#undef MAX_PRIORITY

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $InnocuousThread = ::jdk::internal::misc::InnocuousThread;
using $KeepAliveCache = ::sun::net::www::http::KeepAliveCache;

namespace sun {
	namespace net {
		namespace www {
			namespace http {

$FieldInfo _KeepAliveCache$1_FieldInfo_[] = {
	{"this$0", "Lsun/net/www/http/KeepAliveCache;", nullptr, $FINAL | $SYNTHETIC, $field(KeepAliveCache$1, this$0)},
	{"val$cache", "Lsun/net/www/http/KeepAliveCache;", nullptr, $FINAL | $SYNTHETIC, $field(KeepAliveCache$1, val$cache)},
	{}
};

$MethodInfo _KeepAliveCache$1_MethodInfo_[] = {
	{"<init>", "(Lsun/net/www/http/KeepAliveCache;Lsun/net/www/http/KeepAliveCache;)V", nullptr, 0, $method(static_cast<void(KeepAliveCache$1::*)($KeepAliveCache*,$KeepAliveCache*)>(&KeepAliveCache$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _KeepAliveCache$1_EnclosingMethodInfo_ = {
	"sun.net.www.http.KeepAliveCache",
	"put",
	"(Ljava/net/URL;Ljava/lang/Object;Lsun/net/www/http/HttpClient;)V"
};

$InnerClassInfo _KeepAliveCache$1_InnerClassesInfo_[] = {
	{"sun.net.www.http.KeepAliveCache$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _KeepAliveCache$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.http.KeepAliveCache$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_KeepAliveCache$1_FieldInfo_,
	_KeepAliveCache$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_KeepAliveCache$1_EnclosingMethodInfo_,
	_KeepAliveCache$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.http.KeepAliveCache"
};

$Object* allocate$KeepAliveCache$1($Class* clazz) {
	return $of($alloc(KeepAliveCache$1));
}

void KeepAliveCache$1::init$($KeepAliveCache* this$0, $KeepAliveCache* val$cache) {
	$set(this, this$0, this$0);
	$set(this, val$cache, val$cache);
}

$Object* KeepAliveCache$1::run() {
	$set(this->this$0, keepAliveTimer, $InnocuousThread::newSystemThread("Keep-Alive-Timer"_s, this->val$cache));
	$nc(this->this$0->keepAliveTimer)->setDaemon(true);
	$nc(this->this$0->keepAliveTimer)->setPriority($Thread::MAX_PRIORITY - 2);
	$nc(this->this$0->keepAliveTimer)->start();
	return $of(nullptr);
}

KeepAliveCache$1::KeepAliveCache$1() {
}

$Class* KeepAliveCache$1::load$($String* name, bool initialize) {
	$loadClass(KeepAliveCache$1, name, initialize, &_KeepAliveCache$1_ClassInfo_, allocate$KeepAliveCache$1);
	return class$;
}

$Class* KeepAliveCache$1::class$ = nullptr;

			} // http
		} // www
	} // net
} // sun