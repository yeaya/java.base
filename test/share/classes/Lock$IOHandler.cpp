#include <Lock$IOHandler.h>

#include <Lock.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Lock = ::Lock;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$FieldInfo _Lock$IOHandler_FieldInfo_[] = {
	{"in", "Ljava/io/InputStream;", nullptr, $PRIVATE | $FINAL, $field(Lock$IOHandler, in)},
	{}
};

$MethodInfo _Lock$IOHandler_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, 0, $method(static_cast<void(Lock$IOHandler::*)($InputStream*)>(&Lock$IOHandler::init$))},
	{"handle", "(Ljava/io/InputStream;)V", nullptr, $STATIC, $method(static_cast<void(*)($InputStream*)>(&Lock$IOHandler::handle))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Lock$IOHandler_InnerClassesInfo_[] = {
	{"Lock$IOHandler", "Lock", "IOHandler", $STATIC},
	{}
};

$ClassInfo _Lock$IOHandler_ClassInfo_ = {
	$ACC_SUPER,
	"Lock$IOHandler",
	"java.lang.Object",
	"java.lang.Runnable",
	_Lock$IOHandler_FieldInfo_,
	_Lock$IOHandler_MethodInfo_,
	nullptr,
	nullptr,
	_Lock$IOHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Lock"
};

$Object* allocate$Lock$IOHandler($Class* clazz) {
	return $of($alloc(Lock$IOHandler));
}

void Lock$IOHandler::init$($InputStream* in) {
	$set(this, in, in);
}

void Lock$IOHandler::handle($InputStream* in) {
	$init(Lock$IOHandler);
	$var(Lock$IOHandler, handler, $new(Lock$IOHandler, in));
	$var($Thread, thr, $new($Thread, static_cast<$Runnable*>(handler)));
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
				$init($System);
				$nc($System::out)->print((char16_t)b->get(i));
			}
		}
	} catch ($IOException&) {
		$catch();
	}
}

Lock$IOHandler::Lock$IOHandler() {
}

$Class* Lock$IOHandler::load$($String* name, bool initialize) {
	$loadClass(Lock$IOHandler, name, initialize, &_Lock$IOHandler_ClassInfo_, allocate$Lock$IOHandler);
	return class$;
}

$Class* Lock$IOHandler::class$ = nullptr;