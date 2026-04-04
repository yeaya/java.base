#include <Lock$IOHandler.h>
#include <Lock.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Lock$IOHandler::init$($InputStream* in) {
	$set(this, in, in);
}

void Lock$IOHandler::handle($InputStream* in) {
	$init(Lock$IOHandler);
	$useLocalObjectStack();
	$var(Lock$IOHandler, handler, $new(Lock$IOHandler, in));
	$var($Thread, thr, $new($Thread, handler));
	thr->setDaemon(true);
	thr->start();
}

void Lock$IOHandler::run() {
	try {
		$var($bytes, b, $new($bytes, 100));
		for (;;) {
			int32_t n = $nc(this->in)->read(b);
			if (n < 0) {
				return;
			}
			for (int32_t i = 0; i < n; ++i) {
				$nc($System::out)->print((char16_t)b->get(i));
			}
		}
	} catch ($IOException& ioe) {
	}
}

Lock$IOHandler::Lock$IOHandler() {
}

$Class* Lock$IOHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"in", "Ljava/io/InputStream;", nullptr, $PRIVATE | $FINAL, $field(Lock$IOHandler, in)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/InputStream;)V", nullptr, 0, $method(Lock$IOHandler, init$, void, $InputStream*)},
		{"handle", "(Ljava/io/InputStream;)V", nullptr, $STATIC, $staticMethod(Lock$IOHandler, handle, void, $InputStream*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Lock$IOHandler, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Lock$IOHandler", "Lock", "IOHandler", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Lock$IOHandler",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Lock"
	};
	$loadClass(Lock$IOHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Lock$IOHandler);
	});
	return class$;
}

$Class* Lock$IOHandler::class$ = nullptr;