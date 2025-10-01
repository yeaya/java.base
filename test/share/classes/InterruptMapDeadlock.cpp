#include <InterruptMapDeadlock.h>

#include <InterruptMapDeadlock$Interruptor.h>
#include <InterruptMapDeadlock$Mapper.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/StackTraceElement.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/nio/file/StandardOpenOption.h>
#include <java/util/concurrent/Semaphore.h>
#include <jcpp.h>

#undef TRUNCATE_EXISTING
#undef CREATE
#undef MAPPER_COUNT
#undef WRITE

using $InterruptMapDeadlock$Interruptor = ::InterruptMapDeadlock$Interruptor;
using $InterruptMapDeadlock$Mapper = ::InterruptMapDeadlock$Mapper;
using $InterruptMapDeadlock$MapperArray = $Array<InterruptMapDeadlock$Mapper>;
using $StackTraceElementArray = $Array<::java::lang::StackTraceElement>;
using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $FileChannel = ::java::nio::channels::FileChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $StandardOpenOption = ::java::nio::file::StandardOpenOption;
using $Semaphore = ::java::util::concurrent::Semaphore;

$FieldInfo _InterruptMapDeadlock_FieldInfo_[] = {
	{"MAPPER_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InterruptMapDeadlock, MAPPER_COUNT)},
	{}
};

$MethodInfo _InterruptMapDeadlock_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InterruptMapDeadlock::*)()>(&InterruptMapDeadlock::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&InterruptMapDeadlock::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _InterruptMapDeadlock_InnerClassesInfo_[] = {
	{"InterruptMapDeadlock$Interruptor", "InterruptMapDeadlock", "Interruptor", $STATIC},
	{"InterruptMapDeadlock$Mapper", "InterruptMapDeadlock", "Mapper", $STATIC},
	{}
};

$ClassInfo _InterruptMapDeadlock_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"InterruptMapDeadlock",
	"java.lang.Object",
	nullptr,
	_InterruptMapDeadlock_FieldInfo_,
	_InterruptMapDeadlock_MethodInfo_,
	nullptr,
	nullptr,
	_InterruptMapDeadlock_InnerClassesInfo_,
	nullptr,
	nullptr,
	"InterruptMapDeadlock$Interruptor,InterruptMapDeadlock$Mapper"
};

$Object* allocate$InterruptMapDeadlock($Class* clazz) {
	return $of($alloc(InterruptMapDeadlock));
}

void InterruptMapDeadlock::init$() {
}

void InterruptMapDeadlock::main($StringArray* args) {
	$var($Path, file, $Paths::get("data.txt"_s, $$new($StringArray, 0)));
		$init($StandardOpenOption);
	$nc($($FileChannel::open(file, $$new($OpenOptionArray, {
		static_cast<$OpenOption*>($StandardOpenOption::CREATE),
		static_cast<$OpenOption*>($StandardOpenOption::TRUNCATE_EXISTING),
		static_cast<$OpenOption*>($StandardOpenOption::WRITE)
	}))))->close();
	$var($InterruptMapDeadlock$MapperArray, mappers, $new($InterruptMapDeadlock$MapperArray, InterruptMapDeadlock::MAPPER_COUNT));
	for (int32_t i = 1; i <= 20; ++i) {
		$init($System);
		$nc($System::out)->format("Iteration: %s%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf(i)))}));
		$var($FileChannel, fc, $FileChannel::open(file, $$new($OpenOptionArray, 0)));
		bool failed = false;
		$var($Semaphore, gate, $new($Semaphore, 0));
		for (int32_t j = 0; j < InterruptMapDeadlock::MAPPER_COUNT; ++j) {
			mappers->set(j, $($InterruptMapDeadlock$Mapper::startMapper(fc, gate)));
		}
		$var($InterruptMapDeadlock$Interruptor, interruptor, $new($InterruptMapDeadlock$Interruptor, mappers, gate));
		interruptor->start();
		try {
			interruptor->join(10000);
			if (interruptor->isAlive()) {
				$nc($System::err)->println("Interruptor thread did not terminate:"_s);
				$var($Throwable, t, $new($Exception, "Stack trace"_s));
				t->setStackTrace($(interruptor->getStackTrace()));
				t->printStackTrace();
				failed = true;
			}
		} catch ($InterruptedException&) {
			$var($InterruptedException, x, $catch());
			$nc($System::err)->println("Main thread was interrupted"_s);
			failed = true;
		}
		{
			$var($InterruptMapDeadlock$MapperArray, arr$, mappers);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($InterruptMapDeadlock$Mapper, m, arr$->get(i$));
				{
					try {
						$nc(m)->join(10000);
						$var($Exception, e, m->exception());
						if (e != nullptr) {
							$nc($System::err)->println($$str({"Mapper thread failed with: "_s, e}));
							failed = true;
						} else if ($nc(m)->isAlive()) {
							$init($System);
							$nc($System::err)->println("Mapper thread did not terminate:"_s);
							$var($Throwable, t, $new($Exception, "Stack trace"_s));
							t->setStackTrace($(m->getStackTrace()));
							t->printStackTrace();
							failed = true;
						}
					} catch ($InterruptedException&) {
						$var($InterruptedException, x, $catch());
						$nc($System::err)->println("Main thread was interrupted"_s);
						failed = true;
					}
				}
			}
		}
		if (failed) {
			$throwNew($RuntimeException, "Test failed - see log for details"_s);
		} else {
			$nc(fc)->close();
		}
	}
}

InterruptMapDeadlock::InterruptMapDeadlock() {
}

$Class* InterruptMapDeadlock::load$($String* name, bool initialize) {
	$loadClass(InterruptMapDeadlock, name, initialize, &_InterruptMapDeadlock_ClassInfo_, allocate$InterruptMapDeadlock);
	return class$;
}

$Class* InterruptMapDeadlock::class$ = nullptr;