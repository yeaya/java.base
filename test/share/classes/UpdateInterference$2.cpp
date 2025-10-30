#include <UpdateInterference$2.h>

#include <UpdateInterference.h>
#include <java/io/IOException.h>
#include <java/lang/InterruptedException.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/StandardWatchEventKinds.h>
#include <java/nio/file/WatchEvent$Kind.h>
#include <java/nio/file/WatchEvent.h>
#include <java/nio/file/WatchKey.h>
#include <java/nio/file/WatchService.h>
#include <jcpp.h>

#undef ENTRY_CREATE

using $UpdateInterference = ::UpdateInterference;
using $WatchEvent$KindArray = $Array<::java::nio::file::WatchEvent$Kind>;
using $WatchKeyArray = $Array<::java::nio::file::WatchKey>;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Path = ::java::nio::file::Path;
using $StandardWatchEventKinds = ::java::nio::file::StandardWatchEventKinds;
using $WatchEvent = ::java::nio::file::WatchEvent;
using $WatchEvent$Kind = ::java::nio::file::WatchEvent$Kind;
using $WatchKey = ::java::nio::file::WatchKey;
using $WatchService = ::java::nio::file::WatchService;

$FieldInfo _UpdateInterference$2_FieldInfo_[] = {
	{"val$watcher", "Ljava/nio/file/WatchService;", nullptr, $FINAL | $SYNTHETIC, $field(UpdateInterference$2, val$watcher)},
	{"val$baz", "Ljava/nio/file/Path;", nullptr, $FINAL | $SYNTHETIC, $field(UpdateInterference$2, val$baz)},
	{}
};

$MethodInfo _UpdateInterference$2_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/file/Path;Ljava/nio/file/WatchService;)V", nullptr, 0, $method(static_cast<void(UpdateInterference$2::*)($Path*,$WatchService*)>(&UpdateInterference$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _UpdateInterference$2_EnclosingMethodInfo_ = {
	"UpdateInterference",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _UpdateInterference$2_InnerClassesInfo_[] = {
	{"UpdateInterference$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _UpdateInterference$2_ClassInfo_ = {
	$ACC_SUPER,
	"UpdateInterference$2",
	"java.lang.Thread",
	nullptr,
	_UpdateInterference$2_FieldInfo_,
	_UpdateInterference$2_MethodInfo_,
	nullptr,
	&_UpdateInterference$2_EnclosingMethodInfo_,
	_UpdateInterference$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"UpdateInterference"
};

$Object* allocate$UpdateInterference$2($Class* clazz) {
	return $of($alloc(UpdateInterference$2));
}

void UpdateInterference$2::init$($Path* val$baz, $WatchService* val$watcher) {
	$set(this, val$baz, val$baz);
	$set(this, val$watcher, val$watcher);
	$Thread::init$();
}

void UpdateInterference$2::run() {
	$useLocalCurrentObjectStackCache();
	$var($WatchKeyArray, bazKeys, $new($WatchKeyArray, 32));
	$init($UpdateInterference);
	while (!$UpdateInterference::stop) {
		try {
			for (int32_t i = 0; i < bazKeys->length; ++i) {
				$init($StandardWatchEventKinds);
				bazKeys->set(i, $($nc(this->val$baz)->register$(this->val$watcher, $$new($WatchEvent$KindArray, {$StandardWatchEventKinds::ENTRY_CREATE}))));
			}
			for (int32_t i = 0; i < bazKeys->length; ++i) {
				$nc(bazKeys->get(i))->cancel();
			}
			$Thread::sleep(1);
		} catch ($IOException& e) {
			$throwNew($RuntimeException, static_cast<$Throwable*>(e));
		} catch ($InterruptedException& e) {
			$throwNew($RuntimeException, static_cast<$Throwable*>(e));
		}
	}
}

UpdateInterference$2::UpdateInterference$2() {
}

$Class* UpdateInterference$2::load$($String* name, bool initialize) {
	$loadClass(UpdateInterference$2, name, initialize, &_UpdateInterference$2_ClassInfo_, allocate$UpdateInterference$2);
	return class$;
}

$Class* UpdateInterference$2::class$ = nullptr;