#include <LongTransferTest$MyJob.h>
#include <LongTransferTest.h>
#include <java/io/OutputStream.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;

void LongTransferTest$MyJob::init$($ServerSocket* server) {
	$Thread::init$();
	setDaemon(true);
	$set(this, server, server);
}

void LongTransferTest$MyJob::run() {
	$useLocalObjectStack();
	try {
		$var($Socket, s, $nc(this->server)->accept());
		$nc($System::out)->println($$str({"MyJob-run: client connected: "_s, s}));
		$var($bytes, bs, $new($bytes, 10));
		$System::out->println("MyJob-run: write some bytes to client."_s);
		$$nc($nc(s)->getOutputStream())->write(bs);
		$$nc(s->getOutputStream())->flush();
		$System::out->println("MyJob-run: close the client socket."_s);
		s->close();
	} catch ($Exception& e) {
		e->printStackTrace();
		$System::exit(1);
	}
}

LongTransferTest$MyJob::LongTransferTest$MyJob() {
}

$Class* LongTransferTest$MyJob::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"server", "Ljava/net/ServerSocket;", nullptr, $PRIVATE, $field(LongTransferTest$MyJob, server)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/ServerSocket;)V", nullptr, $PUBLIC, $method(LongTransferTest$MyJob, init$, void, $ServerSocket*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LongTransferTest$MyJob, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LongTransferTest$MyJob", "LongTransferTest", "MyJob", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"LongTransferTest$MyJob",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"LongTransferTest"
	};
	$loadClass(LongTransferTest$MyJob, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LongTransferTest$MyJob);
	});
	return class$;
}

$Class* LongTransferTest$MyJob::class$ = nullptr;