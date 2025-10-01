#include <Lock$LockWorkerMirror.h>

#include <Lock.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <java/nio/charset/Charset.h>
#include <jcpp.h>

using $Lock = ::Lock;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $Charset = ::java::nio::charset::Charset;

$FieldInfo _Lock$LockWorkerMirror_FieldInfo_[] = {
	{"sc", "Ljava/nio/channels/SocketChannel;", nullptr, $PRIVATE | $FINAL, $field(Lock$LockWorkerMirror, sc)},
	{}
};

$MethodInfo _Lock$LockWorkerMirror_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/SocketChannel;)V", nullptr, 0, $method(static_cast<void(Lock$LockWorkerMirror::*)($SocketChannel*)>(&Lock$LockWorkerMirror::init$))},
	{"close", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{"lock", "()LLock$LockWorkerMirror;", nullptr, 0, nullptr, "java.io.IOException"},
	{"lock", "(JJZ)LLock$LockWorkerMirror;", nullptr, 0, nullptr, "java.io.IOException"},
	{"open", "(Ljava/lang/String;)LLock$LockWorkerMirror;", nullptr, 0, nullptr, "java.io.IOException"},
	{"sendCommand", "(Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PRIVATE | $TRANSIENT, $method(static_cast<void(Lock$LockWorkerMirror::*)($String*,$StringArray*)>(&Lock$LockWorkerMirror::sendCommand)), "java.io.IOException"},
	{"shutdown", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{"unlock", "()LLock$LockWorkerMirror;", nullptr, 0, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Lock$LockWorkerMirror_InnerClassesInfo_[] = {
	{"Lock$LockWorkerMirror", "Lock", "LockWorkerMirror", $STATIC},
	{}
};

$ClassInfo _Lock$LockWorkerMirror_ClassInfo_ = {
	$ACC_SUPER,
	"Lock$LockWorkerMirror",
	"java.lang.Object",
	nullptr,
	_Lock$LockWorkerMirror_FieldInfo_,
	_Lock$LockWorkerMirror_MethodInfo_,
	nullptr,
	nullptr,
	_Lock$LockWorkerMirror_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Lock"
};

$Object* allocate$Lock$LockWorkerMirror($Class* clazz) {
	return $of($alloc(Lock$LockWorkerMirror));
}

void Lock$LockWorkerMirror::init$($SocketChannel* sc) {
	$set(this, sc, sc);
}

void Lock$LockWorkerMirror::sendCommand($String* cmd$renamed, $StringArray* params) {
	$var($String, cmd, cmd$renamed);
	{
		$var($StringArray, arr$, params);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, s, arr$->get(i$));
			{
				$plusAssign(cmd, $$str({" "_s, s}));
			}
		}
	}
	$plusAssign(cmd, u';');
	$var($ByteBuffer, buf, $nc($($Charset::defaultCharset()))->encode(cmd));
	while ($nc(buf)->hasRemaining()) {
		$nc(this->sc)->write(buf);
	}
	$assign(buf, $ByteBuffer::allocate(1));
	int32_t n = $nc(this->sc)->read(buf);
	if (n != 1) {
		$throwNew($RuntimeException, "Reply expected"_s);
	}
	if ($nc(buf)->get(0) != u';') {
		$throwNew($RuntimeException, "Terminated expected"_s);
	}
}

Lock$LockWorkerMirror* Lock$LockWorkerMirror::open($String* file) {
	sendCommand("open"_s, $$new($StringArray, {file}));
	return this;
}

void Lock$LockWorkerMirror::close() {
	sendCommand("close"_s, $$new($StringArray, 0));
}

Lock$LockWorkerMirror* Lock$LockWorkerMirror::lock() {
	sendCommand("lock"_s, $$new($StringArray, 0));
	return this;
}

Lock$LockWorkerMirror* Lock$LockWorkerMirror::lock(int64_t position, int64_t size, bool shared) {
	sendCommand("lock"_s, $$new($StringArray, {$$str({$$str(position), ","_s, $$str(size), ","_s, $$str(shared)})}));
	return this;
}

Lock$LockWorkerMirror* Lock$LockWorkerMirror::unlock() {
	sendCommand("unlock"_s, $$new($StringArray, 0));
	return this;
}

void Lock$LockWorkerMirror::shutdown() {
	$nc(this->sc)->close();
}

Lock$LockWorkerMirror::Lock$LockWorkerMirror() {
}

$Class* Lock$LockWorkerMirror::load$($String* name, bool initialize) {
	$loadClass(Lock$LockWorkerMirror, name, initialize, &_Lock$LockWorkerMirror_ClassInfo_, allocate$Lock$LockWorkerMirror);
	return class$;
}

$Class* Lock$LockWorkerMirror::class$ = nullptr;