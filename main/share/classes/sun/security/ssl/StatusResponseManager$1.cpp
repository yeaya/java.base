#include <sun/security/ssl/StatusResponseManager$1.h>

#include <java/lang/Runnable.h>
#include <java/util/concurrent/Executors.h>
#include <java/util/concurrent/ThreadFactory.h>
#include <sun/security/ssl/StatusResponseManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Executors = ::java::util::concurrent::Executors;
using $ThreadFactory = ::java::util::concurrent::ThreadFactory;
using $StatusResponseManager = ::sun::security::ssl::StatusResponseManager;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _StatusResponseManager$1_FieldInfo_[] = {
	{"this$0", "Lsun/security/ssl/StatusResponseManager;", nullptr, $FINAL | $SYNTHETIC, $field(StatusResponseManager$1, this$0)},
	{}
};

$MethodInfo _StatusResponseManager$1_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/StatusResponseManager;)V", nullptr, 0, $method(static_cast<void(StatusResponseManager$1::*)($StatusResponseManager*)>(&StatusResponseManager$1::init$))},
	{"newThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _StatusResponseManager$1_EnclosingMethodInfo_ = {
	"sun.security.ssl.StatusResponseManager",
	"<init>",
	"()V"
};

$InnerClassInfo _StatusResponseManager$1_InnerClassesInfo_[] = {
	{"sun.security.ssl.StatusResponseManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _StatusResponseManager$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.StatusResponseManager$1",
	"java.lang.Object",
	"java.util.concurrent.ThreadFactory",
	_StatusResponseManager$1_FieldInfo_,
	_StatusResponseManager$1_MethodInfo_,
	nullptr,
	&_StatusResponseManager$1_EnclosingMethodInfo_,
	_StatusResponseManager$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.StatusResponseManager"
};

$Object* allocate$StatusResponseManager$1($Class* clazz) {
	return $of($alloc(StatusResponseManager$1));
}

void StatusResponseManager$1::init$($StatusResponseManager* this$0) {
	$set(this, this$0, this$0);
}

$Thread* StatusResponseManager$1::newThread($Runnable* r) {
	$useLocalCurrentObjectStackCache();
	$var($Thread, t, $nc($($Executors::defaultThreadFactory()))->newThread(r));
	$nc(t)->setDaemon(true);
	return t;
}

StatusResponseManager$1::StatusResponseManager$1() {
}

$Class* StatusResponseManager$1::load$($String* name, bool initialize) {
	$loadClass(StatusResponseManager$1, name, initialize, &_StatusResponseManager$1_ClassInfo_, allocate$StatusResponseManager$1);
	return class$;
}

$Class* StatusResponseManager$1::class$ = nullptr;

		} // ssl
	} // security
} // sun