#include <SocketInheritance$IOHandler.h>
#include <SocketInheritance.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void SocketInheritance$IOHandler::init$($InputStream* in) {
	$set(this, in, in);
}

void SocketInheritance$IOHandler::handle($InputStream* in) {
	$init(SocketInheritance$IOHandler);
	$useLocalObjectStack();
	$var(SocketInheritance$IOHandler, handler, $new(SocketInheritance$IOHandler, in));
	$var($Thread, thr, $new($Thread, handler));
	thr->setDaemon(true);
	thr->start();
}

void SocketInheritance$IOHandler::run() {
	try {
		$var($bytes, b, $new($bytes, 100));
		for (;;) {
			int32_t n = $nc(this->in)->read(b);
			if (n < 0) {
				return;
			}
			$nc($System::out)->write(b, 0, n);
		}
	} catch ($IOException& ioe) {
	}
}

SocketInheritance$IOHandler::SocketInheritance$IOHandler() {
}

$Class* SocketInheritance$IOHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"in", "Ljava/io/InputStream;", nullptr, 0, $field(SocketInheritance$IOHandler, in)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/InputStream;)V", nullptr, 0, $method(SocketInheritance$IOHandler, init$, void, $InputStream*)},
		{"handle", "(Ljava/io/InputStream;)V", nullptr, $STATIC, $staticMethod(SocketInheritance$IOHandler, handle, void, $InputStream*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SocketInheritance$IOHandler, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SocketInheritance$IOHandler", "SocketInheritance", "IOHandler", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SocketInheritance$IOHandler",
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
		"SocketInheritance"
	};
	$loadClass(SocketInheritance$IOHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SocketInheritance$IOHandler);
	});
	return class$;
}

$Class* SocketInheritance$IOHandler::class$ = nullptr;