#include <NonBlocking.h>

#include <java/nio/channels/Pipe$SinkChannel.h>
#include <java/nio/channels/Pipe$SourceChannel.h>
#include <java/nio/channels/Pipe.h>
#include <java/nio/channels/SelectableChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $Pipe = ::java::nio::channels::Pipe;
using $Pipe$SinkChannel = ::java::nio::channels::Pipe$SinkChannel;
using $Pipe$SourceChannel = ::java::nio::channels::Pipe$SourceChannel;

$MethodInfo _NonBlocking_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(NonBlocking, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NonBlocking, main, void, $StringArray*), "java.lang.Exception"},
	{"test1", "()V", nullptr, $STATIC, $staticMethod(NonBlocking, test1, void), "java.lang.Exception"},
	{}
};

$ClassInfo _NonBlocking_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NonBlocking",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NonBlocking_MethodInfo_
};

$Object* allocate$NonBlocking($Class* clazz) {
	return $of($alloc(NonBlocking));
}

void NonBlocking::init$() {
}

void NonBlocking::main($StringArray* args) {
	test1();
}

void NonBlocking::test1() {
	$useLocalCurrentObjectStackCache();
	$var($Pipe, p, $Pipe::open());
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc($($nc(p)->sink()))->configureBlocking(false);
			if ($nc($(p->sink()))->isBlocking()) {
				$throwNew($Exception, "Sink still blocking"_s);
			}
			$nc($(p->source()))->configureBlocking(false);
			if ($nc($(p->source()))->isBlocking()) {
				$throwNew($Exception, "Source still blocking"_s);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc($($nc(p)->sink()))->close();
			$nc($(p->source()))->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

NonBlocking::NonBlocking() {
}

$Class* NonBlocking::load$($String* name, bool initialize) {
	$loadClass(NonBlocking, name, initialize, &_NonBlocking_ClassInfo_, allocate$NonBlocking);
	return class$;
}

$Class* NonBlocking::class$ = nullptr;