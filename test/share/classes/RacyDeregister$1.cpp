#include <RacyDeregister$1.h>
#include <RacyDeregister.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/Selector.h>
#include <jcpp.h>

#undef OP_READ
#undef OP_WRITE

using $RacyDeregister = ::RacyDeregister;
using $SelectionKeyArray = $Array<::java::nio::channels::SelectionKey>;
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

void RacyDeregister$1::init$($Selector* val$sel, $SelectionKeyArray* val$key) {
	$set(this, val$sel, val$sel);
	$set(this, val$key, val$key);
	$Thread::init$();
}

void RacyDeregister$1::run() {
	$useLocalObjectStack();
	try {
		for (int32_t k = 0; k < 15; ++k) {
			$init($RacyDeregister);
			$nc($System::out)->format("outer loop %3d at %7d ms%n"_s, $$new($ObjectArray, {
				$($Integer::valueOf(k)),
				$($Long::valueOf($System::currentTimeMillis() - $RacyDeregister::t0))
			}));
			$System::out->flush();
			for (int32_t i = 0; i < 10000; ++i) {
				$synchronized($RacyDeregister::notifyLock) {
					$synchronized($RacyDeregister::selectorLock) {
						$nc(this->val$sel)->wakeup();
						$nc($nc(this->val$key)->get(0))->interestOps($SelectionKey::OP_READ | $SelectionKey::OP_WRITE);
					}
					$RacyDeregister::notified = false;
					int64_t beginTime = $System::currentTimeMillis();
					while (true) {
						$RacyDeregister::notifyLock->wait(5000);
						if ($RacyDeregister::notified) {
							break;
						}
						int64_t endTime = $System::currentTimeMillis();
						if (endTime - beginTime > 5000) {
							for (int32_t j = 0; j < 60; ++j) {
								$Thread::sleep(1000);
								if ($RacyDeregister::notified) {
									int64_t t = $System::currentTimeMillis();
									$nc($System::err)->printf("Notified after %d ms%n"_s, $$new($ObjectArray, {$($Long::valueOf(t - beginTime))}));
									$System::err->flush();
									break;
								}
							}
							$assignStatic($RacyDeregister::succTermination, $Boolean::valueOf(false));
							this->val$sel->wakeup();
							return;
						}
					}
				}
			}
			int64_t t = $System::currentTimeMillis();
			if (t - $RacyDeregister::t0 > 1080000) {
				$nc($System::err)->format("Timeout after %d outer loop iterations%n"_s, $$new($ObjectArray, {$($Integer::valueOf(k))}));
				$System::err->flush();
				$assignStatic($RacyDeregister::succTermination, $Boolean::valueOf(false));
				$nc(this->val$sel)->wakeup();
				return;
			}
		}
		$init($RacyDeregister);
		$assignStatic($RacyDeregister::succTermination, $Boolean::valueOf(true));
		$nc(this->val$sel)->wakeup();
	} catch ($Exception& e) {
		$nc($System::out)->println($of(e));
		$System::out->flush();
		$init($RacyDeregister);
		$assignStatic($RacyDeregister::succTermination, $Boolean::valueOf(true));
		$nc(this->val$sel)->wakeup();
	}
}

RacyDeregister$1::RacyDeregister$1() {
}

$Class* RacyDeregister$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$key", "[Ljava/nio/channels/SelectionKey;", nullptr, $FINAL | $SYNTHETIC, $field(RacyDeregister$1, val$key)},
		{"val$sel", "Ljava/nio/channels/Selector;", nullptr, $FINAL | $SYNTHETIC, $field(RacyDeregister$1, val$sel)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/Selector;[Ljava/nio/channels/SelectionKey;)V", nullptr, 0, $method(RacyDeregister$1, init$, void, $Selector*, $SelectionKeyArray*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(RacyDeregister$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"RacyDeregister",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"RacyDeregister$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"RacyDeregister$1",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"RacyDeregister"
	};
	$loadClass(RacyDeregister$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RacyDeregister$1);
	});
	return class$;
}

$Class* RacyDeregister$1::class$ = nullptr;