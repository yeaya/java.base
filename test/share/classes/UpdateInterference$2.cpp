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
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Path = ::java::nio::file::Path;
using $StandardWatchEventKinds = ::java::nio::file::StandardWatchEventKinds;
using $WatchService = ::java::nio::file::WatchService;

void UpdateInterference$2::init$($Path* val$baz, $WatchService* val$watcher) {
	$set(this, val$baz, val$baz);
	$set(this, val$watcher, val$watcher);
	$Thread::init$();
}

void UpdateInterference$2::run() {
	$useLocalObjectStack();
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
			$throwNew($RuntimeException, e);
		} catch ($InterruptedException& e) {
			$throwNew($RuntimeException, e);
		}
	}
}

UpdateInterference$2::UpdateInterference$2() {
}

$Class* UpdateInterference$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$watcher", "Ljava/nio/file/WatchService;", nullptr, $FINAL | $SYNTHETIC, $field(UpdateInterference$2, val$watcher)},
		{"val$baz", "Ljava/nio/file/Path;", nullptr, $FINAL | $SYNTHETIC, $field(UpdateInterference$2, val$baz)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/file/Path;Ljava/nio/file/WatchService;)V", nullptr, 0, $method(UpdateInterference$2, init$, void, $Path*, $WatchService*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(UpdateInterference$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"UpdateInterference",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"UpdateInterference$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UpdateInterference$2",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"UpdateInterference"
	};
	$loadClass(UpdateInterference$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UpdateInterference$2);
	});
	return class$;
}

$Class* UpdateInterference$2::class$ = nullptr;