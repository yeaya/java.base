#include <SocketInheritance$IOHandler.h>

#include <SocketInheritance.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Runnable.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$FieldInfo _SocketInheritance$IOHandler_FieldInfo_[] = {
	{"in", "Ljava/io/InputStream;", nullptr, 0, $field(SocketInheritance$IOHandler, in)},
	{}
};

$MethodInfo _SocketInheritance$IOHandler_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, 0, $method(SocketInheritance$IOHandler, init$, void, $InputStream*)},
	{"handle", "(Ljava/io/InputStream;)V", nullptr, $STATIC, $staticMethod(SocketInheritance$IOHandler, handle, void, $InputStream*)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SocketInheritance$IOHandler, run, void)},
	{}
};

$InnerClassInfo _SocketInheritance$IOHandler_InnerClassesInfo_[] = {
	{"SocketInheritance$IOHandler", "SocketInheritance", "IOHandler", $STATIC},
	{}
};

$ClassInfo _SocketInheritance$IOHandler_ClassInfo_ = {
	$ACC_SUPER,
	"SocketInheritance$IOHandler",
	"java.lang.Object",
	"java.lang.Runnable",
	_SocketInheritance$IOHandler_FieldInfo_,
	_SocketInheritance$IOHandler_MethodInfo_,
	nullptr,
	nullptr,
	_SocketInheritance$IOHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SocketInheritance"
};

$Object* allocate$SocketInheritance$IOHandler($Class* clazz) {
	return $of($alloc(SocketInheritance$IOHandler));
}

void SocketInheritance$IOHandler::init$($InputStream* in) {
	$set(this, in, in);
}

void SocketInheritance$IOHandler::handle($InputStream* in) {
	$init(SocketInheritance$IOHandler);
	$useLocalCurrentObjectStackCache();
	$var(SocketInheritance$IOHandler, handler, $new(SocketInheritance$IOHandler, in));
	$var($Thread, thr, $new($Thread, static_cast<$Runnable*>(handler)));
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
	$loadClass(SocketInheritance$IOHandler, name, initialize, &_SocketInheritance$IOHandler_ClassInfo_, allocate$SocketInheritance$IOHandler);
	return class$;
}

$Class* SocketInheritance$IOHandler::class$ = nullptr;