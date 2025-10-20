#include <RacyDeregister$1.h>

#include <RacyDeregister.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/Selector.h>
#include <jcpp.h>

#undef OP_READ
#undef OP_WRITE

using $RacyDeregister = ::RacyDeregister;
using $SelectionKeyArray = $Array<::java::nio::channels::SelectionKey>;
using $PrintStream = ::java::io::PrintStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;

$FieldInfo _RacyDeregister$1_FieldInfo_[] = {
	{"val$key", "[Ljava/nio/channels/SelectionKey;", nullptr, $FINAL | $SYNTHETIC, $field(RacyDeregister$1, val$key)},
	{"val$sel", "Ljava/nio/channels/Selector;", nullptr, $FINAL | $SYNTHETIC, $field(RacyDeregister$1, val$sel)},
	{}
};

$MethodInfo _RacyDeregister$1_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/Selector;[Ljava/nio/channels/SelectionKey;)V", nullptr, 0, $method(static_cast<void(RacyDeregister$1::*)($Selector*,$SelectionKeyArray*)>(&RacyDeregister$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _RacyDeregister$1_EnclosingMethodInfo_ = {
	"RacyDeregister",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _RacyDeregister$1_InnerClassesInfo_[] = {
	{"RacyDeregister$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RacyDeregister$1_ClassInfo_ = {
	$ACC_SUPER,
	"RacyDeregister$1",
	"java.lang.Thread",
	nullptr,
	_RacyDeregister$1_FieldInfo_,
	_RacyDeregister$1_MethodInfo_,
	nullptr,
	&_RacyDeregister$1_EnclosingMethodInfo_,
	_RacyDeregister$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"RacyDeregister"
};

$Object* allocate$RacyDeregister$1($Class* clazz) {
	return $of($alloc(RacyDeregister$1));
}

void RacyDeregister$1::init$($Selector* val$sel, $SelectionKeyArray* val$key) {
	$set(this, val$sel, val$sel);
	$set(this, val$key, val$key);
	$Thread::init$();
}

void RacyDeregister$1::run() {
	$useLocalCurrentObjectStackCache();
	try {
		for (int32_t k = 0; k < 15; ++k) {
			$init($System);
				$init($RacyDeregister);
			$nc($System::out)->format("outer loop %3d at %7d ms%n"_s, $$new($ObjectArray, {
				$($of($Integer::valueOf(k))),
				$($of($Long::valueOf($System::currentTimeMillis() - $RacyDeregister::t0)))
			}));
			$nc($System::out)->flush();
			for (int32_t i = 0; i < 10000; ++i) {
				$synchronized($RacyDeregister::notifyLock) {
					$synchronized($RacyDeregister::selectorLock) {
						$nc(this->val$sel)->wakeup();
						$nc($nc(this->val$key)->get(0))->interestOps($SelectionKey::OP_READ | $SelectionKey::OP_WRITE);
					}
					$RacyDeregister::notified = false;
					int64_t beginTime = $System::currentTimeMillis();
					while (true) {
						$nc($of($RacyDeregister::notifyLock))->wait(5000);
						if ($RacyDeregister::notified) {
							break;
						}
						int64_t endTime = $System::currentTimeMillis();
						if (endTime - beginTime > 5000) {
							for (int32_t j = 0; j < 60; ++j) {
								$Thread::sleep(1000);
								if ($RacyDeregister::notified) {
									int64_t t = $System::currentTimeMillis();
									$nc($System::err)->printf("Notified after %d ms%n"_s, $$new($ObjectArray, {$($of($Long::valueOf(t - beginTime)))}));
									$nc($System::err)->flush();
									break;
								}
							}
							$assignStatic($RacyDeregister::succTermination, $Boolean::valueOf(false));
							$nc(this->val$sel)->wakeup();
							return;
						}
					}
				}
			}
			int64_t t = $System::currentTimeMillis();
			if (t - $RacyDeregister::t0 > 0x00107AC0) {
				$nc($System::err)->format("Timeout after %d outer loop iterations%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf(k)))}));
				$nc($System::err)->flush();
				$assignStatic($RacyDeregister::succTermination, $Boolean::valueOf(false));
				$nc(this->val$sel)->wakeup();
				return;
			}
		}
		$init($RacyDeregister);
		$assignStatic($RacyDeregister::succTermination, $Boolean::valueOf(true));
		$nc(this->val$sel)->wakeup();
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$init($System);
		$nc($System::out)->println($of(e));
		$nc($System::out)->flush();
		$init($RacyDeregister);
		$assignStatic($RacyDeregister::succTermination, $Boolean::valueOf(true));
		$nc(this->val$sel)->wakeup();
	}
}

RacyDeregister$1::RacyDeregister$1() {
}

$Class* RacyDeregister$1::load$($String* name, bool initialize) {
	$loadClass(RacyDeregister$1, name, initialize, &_RacyDeregister$1_ClassInfo_, allocate$RacyDeregister$1);
	return class$;
}

$Class* RacyDeregister$1::class$ = nullptr;