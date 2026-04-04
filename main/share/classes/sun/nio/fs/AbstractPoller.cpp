#include <sun/nio/fs/AbstractPoller.h>
#include <java/io/IOException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Runnable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/file/ClosedWatchServiceException.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/StandardWatchEventKinds.h>
#include <java/nio/file/WatchEvent$Kind.h>
#include <java/nio/file/WatchEvent$Modifier.h>
#include <java/nio/file/WatchKey.h>
#include <java/security/AccessController.h>
#include <java/util/HashSet.h>
#include <java/util/LinkedList.h>
#include <java/util/Set.h>
#include <sun/nio/fs/AbstractPoller$1.h>
#include <sun/nio/fs/AbstractPoller$2.h>
#include <sun/nio/fs/AbstractPoller$Request.h>
#include <sun/nio/fs/AbstractPoller$RequestType.h>
#include <jcpp.h>

#undef CANCEL
#undef CLOSE
#undef ENTRY_CREATE
#undef ENTRY_DELETE
#undef ENTRY_MODIFY
#undef OVERFLOW
#undef REGISTER

using $WatchEvent$KindArray = $Array<::java::nio::file::WatchEvent$Kind>;
using $WatchEvent$ModifierArray = $Array<::java::nio::file::WatchEvent$Modifier>;
using $IOException = ::java::io::IOException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $ClosedWatchServiceException = ::java::nio::file::ClosedWatchServiceException;
using $Path = ::java::nio::file::Path;
using $StandardWatchEventKinds = ::java::nio::file::StandardWatchEventKinds;
using $WatchEvent$Kind = ::java::nio::file::WatchEvent$Kind;
using $WatchKey = ::java::nio::file::WatchKey;
using $AccessController = ::java::security::AccessController;
using $HashSet = ::java::util::HashSet;
using $LinkedList = ::java::util::LinkedList;
using $Set = ::java::util::Set;
using $AbstractPoller$1 = ::sun::nio::fs::AbstractPoller$1;
using $AbstractPoller$2 = ::sun::nio::fs::AbstractPoller$2;
using $AbstractPoller$Request = ::sun::nio::fs::AbstractPoller$Request;
using $AbstractPoller$RequestType = ::sun::nio::fs::AbstractPoller$RequestType;

namespace sun {
	namespace nio {
		namespace fs {

void AbstractPoller::init$() {
	$set(this, requestList, $new($LinkedList));
	this->shutdown = false;
}

void AbstractPoller::start() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Runnable, thisRunnable, this);
	$AccessController::doPrivileged($$new($AbstractPoller$1, this, thisRunnable));
}

$WatchKey* AbstractPoller::register$($Path* dir, $WatchEvent$KindArray* events, $WatchEvent$ModifierArray* modifiers) {
	$useLocalObjectStack();
	if (dir == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($Set, eventSet, $new($HashSet, $nc(events)->length));
	{
		$var($WatchEvent$KindArray, arr$, events);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($WatchEvent$Kind, event, arr$->get(i$));
			{
				$init($StandardWatchEventKinds);
				if (event == $StandardWatchEventKinds::ENTRY_CREATE || event == $StandardWatchEventKinds::ENTRY_MODIFY || event == $StandardWatchEventKinds::ENTRY_DELETE) {
					eventSet->add(event);
					continue;
				}
				if (event == $StandardWatchEventKinds::OVERFLOW) {
					continue;
				}
				if (event == nullptr) {
					$throwNew($NullPointerException, "An element in event set is \'null\'"_s);
				}
				$throwNew($UnsupportedOperationException, $($nc(event)->name()));
			}
		}
	}
	if (eventSet->isEmpty()) {
		$throwNew($IllegalArgumentException, "No events to register"_s);
	}
	$init($AbstractPoller$RequestType);
	return $cast($WatchKey, invoke($AbstractPoller$RequestType::REGISTER, $$new($ObjectArray, {
		dir,
		eventSet,
		modifiers
	})));
}

void AbstractPoller::cancel($WatchKey* key) {
	$useLocalObjectStack();
	try {
		$init($AbstractPoller$RequestType);
		invoke($AbstractPoller$RequestType::CANCEL, $$new($ObjectArray, {key}));
	} catch ($IOException& x) {
		$throwNew($AssertionError, $$of(x->getMessage()));
	}
}

void AbstractPoller::close() {
	$init($AbstractPoller$RequestType);
	invoke($AbstractPoller$RequestType::CLOSE, $$new($ObjectArray, 0));
}

$Object* AbstractPoller::invoke($AbstractPoller$RequestType* type, $ObjectArray* params) {
	$useLocalObjectStack();
	$var($AbstractPoller$Request, req, $new($AbstractPoller$Request, type, params));
	$synchronized(this->requestList) {
		if (this->shutdown) {
			$throwNew($ClosedWatchServiceException);
		}
		this->requestList->add(req);
		wakeup();
	}
	$var($Object, result, req->awaitResult());
	if ($instanceOf($RuntimeException, result)) {
		$throw($cast($RuntimeException, result));
	}
	if ($instanceOf($IOException, result)) {
		$throw($cast($IOException, result));
	}
	return result;
}

bool AbstractPoller::processRequests() {
	$useLocalObjectStack();
	$synchronized(this->requestList) {
		$var($AbstractPoller$Request, req, nullptr);
		while (($assign(req, $cast($AbstractPoller$Request, this->requestList->poll()))) != nullptr) {
			if (this->shutdown) {
				$nc(req)->release($$new($ClosedWatchServiceException));
				continue;
			}
			$init($AbstractPoller$2);
			switch ($nc($AbstractPoller$2::$SwitchMap$sun$nio$fs$AbstractPoller$RequestType)->get(($$nc($nc(req)->type()))->ordinal())) {
			case 1:
				{
					$var($ObjectArray, params, req->parameters());
					$var($Path, path, $cast($Path, $nc(params)->get(0)));
					$var($Set, events, $cast($Set, params->get(1)));
					$var($WatchEvent$ModifierArray, modifiers, $cast($WatchEvent$ModifierArray, params->get(2)));
					req->release($(implRegister(path, events, modifiers)));
					break;
				}
			case 2:
				{
					$var($ObjectArray, params, req->parameters());
					$var($WatchKey, key, $cast($WatchKey, $nc(params)->get(0)));
					implCancelKey(key);
					req->release(nullptr);
					break;
				}
			case 3:
				{
					implCloseAll();
					req->release(nullptr);
					this->shutdown = true;
					break;
				}
			default:
				req->release($$new($IOException, "request not recognized"_s));
			}
		}
	}
	return this->shutdown;
}

AbstractPoller::AbstractPoller() {
}

$Class* AbstractPoller::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"requestList", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Lsun/nio/fs/AbstractPoller$Request;>;", $PRIVATE | $FINAL, $field(AbstractPoller, requestList)},
		{"shutdown", "Z", nullptr, $PRIVATE, $field(AbstractPoller, shutdown)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(AbstractPoller, init$, void)},
		{"cancel", "(Ljava/nio/file/WatchKey;)V", nullptr, $FINAL, $method(AbstractPoller, cancel, void, $WatchKey*)},
		{"close", "()V", nullptr, $FINAL, $method(AbstractPoller, close, void), "java.io.IOException"},
		{"implCancelKey", "(Ljava/nio/file/WatchKey;)V", nullptr, $ABSTRACT, $virtualMethod(AbstractPoller, implCancelKey, void, $WatchKey*)},
		{"implCloseAll", "()V", nullptr, $ABSTRACT, $virtualMethod(AbstractPoller, implCloseAll, void)},
		{"implRegister", "(Ljava/nio/file/Path;Ljava/util/Set;[Ljava/nio/file/WatchEvent$Modifier;)Ljava/lang/Object;", "(Ljava/nio/file/Path;Ljava/util/Set<+Ljava/nio/file/WatchEvent$Kind<*>;>;[Ljava/nio/file/WatchEvent$Modifier;)Ljava/lang/Object;", $TRANSIENT | $ABSTRACT, $virtualMethod(AbstractPoller, implRegister, $Object*, $Path*, $Set*, $WatchEvent$ModifierArray*)},
		{"invoke", "(Lsun/nio/fs/AbstractPoller$RequestType;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $TRANSIENT, $method(AbstractPoller, invoke, $Object*, $AbstractPoller$RequestType*, $ObjectArray*), "java.io.IOException"},
		{"processRequests", "()Z", nullptr, 0, $virtualMethod(AbstractPoller, processRequests, bool)},
		{"register", "(Ljava/nio/file/Path;[Ljava/nio/file/WatchEvent$Kind;[Ljava/nio/file/WatchEvent$Modifier;)Ljava/nio/file/WatchKey;", "(Ljava/nio/file/Path;[Ljava/nio/file/WatchEvent$Kind<*>;[Ljava/nio/file/WatchEvent$Modifier;)Ljava/nio/file/WatchKey;", $FINAL | $TRANSIENT, $method(AbstractPoller, register$, $WatchKey*, $Path*, $WatchEvent$KindArray*, $WatchEvent$ModifierArray*), "java.io.IOException"},
		{"start", "()V", nullptr, $PUBLIC, $virtualMethod(AbstractPoller, start, void)},
		{"wakeup", "()V", nullptr, $ABSTRACT, $virtualMethod(AbstractPoller, wakeup, void), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.AbstractPoller$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{"sun.nio.fs.AbstractPoller$Request", "sun.nio.fs.AbstractPoller", "Request", $PRIVATE | $STATIC},
		{"sun.nio.fs.AbstractPoller$RequestType", "sun.nio.fs.AbstractPoller", "RequestType", $PRIVATE | $STATIC | $FINAL | $ENUM},
		{"sun.nio.fs.AbstractPoller$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"sun.nio.fs.AbstractPoller",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.nio.fs.AbstractPoller$2,sun.nio.fs.AbstractPoller$Request,sun.nio.fs.AbstractPoller$RequestType,sun.nio.fs.AbstractPoller$1"
	};
	$loadClass(AbstractPoller, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractPoller);
	});
	return class$;
}

$Class* AbstractPoller::class$ = nullptr;

		} // fs
	} // nio
} // sun