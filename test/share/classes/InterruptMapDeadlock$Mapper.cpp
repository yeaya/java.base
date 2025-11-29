#include <InterruptMapDeadlock$Mapper.h>

#include <InterruptMapDeadlock.h>
#include <java/io/IOException.h>
#include <java/nio/MappedByteBuffer.h>
#include <java/nio/channels/FileChannel$MapMode.h>
#include <java/nio/channels/FileChannel.h>
#include <java/util/concurrent/Semaphore.h>
#include <jcpp.h>

#undef READ_ONLY

using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileChannel = ::java::nio::channels::FileChannel;
using $FileChannel$MapMode = ::java::nio::channels::FileChannel$MapMode;
using $Semaphore = ::java::util::concurrent::Semaphore;

$FieldInfo _InterruptMapDeadlock$Mapper_FieldInfo_[] = {
	{"fc", "Ljava/nio/channels/FileChannel;", nullptr, $FINAL, $field(InterruptMapDeadlock$Mapper, fc)},
	{"gate", "Ljava/util/concurrent/Semaphore;", nullptr, $FINAL, $field(InterruptMapDeadlock$Mapper, gate)},
	{"exception", "Ljava/lang/Exception;", nullptr, $VOLATILE, $field(InterruptMapDeadlock$Mapper, exception$)},
	{}
};

$MethodInfo _InterruptMapDeadlock$Mapper_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/FileChannel;Ljava/util/concurrent/Semaphore;)V", nullptr, 0, $method(static_cast<void(InterruptMapDeadlock$Mapper::*)($FileChannel*,$Semaphore*)>(&InterruptMapDeadlock$Mapper::init$))},
	{"exception", "()Ljava/lang/Exception;", nullptr, 0},
	{"run", "()V", nullptr, $PUBLIC},
	{"startMapper", "(Ljava/nio/channels/FileChannel;Ljava/util/concurrent/Semaphore;)LInterruptMapDeadlock$Mapper;", nullptr, $STATIC, $method(static_cast<InterruptMapDeadlock$Mapper*(*)($FileChannel*,$Semaphore*)>(&InterruptMapDeadlock$Mapper::startMapper))},
	{}
};

$InnerClassInfo _InterruptMapDeadlock$Mapper_InnerClassesInfo_[] = {
	{"InterruptMapDeadlock$Mapper", "InterruptMapDeadlock", "Mapper", $STATIC},
	{}
};

$ClassInfo _InterruptMapDeadlock$Mapper_ClassInfo_ = {
	$ACC_SUPER,
	"InterruptMapDeadlock$Mapper",
	"java.lang.Thread",
	nullptr,
	_InterruptMapDeadlock$Mapper_FieldInfo_,
	_InterruptMapDeadlock$Mapper_MethodInfo_,
	nullptr,
	nullptr,
	_InterruptMapDeadlock$Mapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"InterruptMapDeadlock"
};

$Object* allocate$InterruptMapDeadlock$Mapper($Class* clazz) {
	return $of($alloc(InterruptMapDeadlock$Mapper));
}

void InterruptMapDeadlock$Mapper::init$($FileChannel* fc, $Semaphore* gate) {
	$Thread::init$();
	$set(this, fc, fc);
	$set(this, gate, gate);
}

void InterruptMapDeadlock$Mapper::run() {
	try {
		$nc(this->gate)->acquireUninterruptibly();
		$init($FileChannel$MapMode);
		$nc(this->fc)->map($FileChannel$MapMode::READ_ONLY, 0, 1);
		$throwNew($Exception, "Map succeeded"_s);
	} catch ($IOException& x) {
		$nc($System::out)->println($$str({$of(x)->getClass(), " (expected)"_s}));
	} catch ($Exception& unexpected) {
		$set(this, exception$, unexpected);
	}
}

$Exception* InterruptMapDeadlock$Mapper::exception() {
	return this->exception$;
}

InterruptMapDeadlock$Mapper* InterruptMapDeadlock$Mapper::startMapper($FileChannel* fc, $Semaphore* gate) {
	$init(InterruptMapDeadlock$Mapper);
	$var(InterruptMapDeadlock$Mapper, r, $new(InterruptMapDeadlock$Mapper, fc, gate));
	r->setDaemon(true);
	r->start();
	return r;
}

InterruptMapDeadlock$Mapper::InterruptMapDeadlock$Mapper() {
}

$Class* InterruptMapDeadlock$Mapper::load$($String* name, bool initialize) {
	$loadClass(InterruptMapDeadlock$Mapper, name, initialize, &_InterruptMapDeadlock$Mapper_ClassInfo_, allocate$InterruptMapDeadlock$Mapper);
	return class$;
}

$Class* InterruptMapDeadlock$Mapper::class$ = nullptr;