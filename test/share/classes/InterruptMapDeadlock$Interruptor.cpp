#include <InterruptMapDeadlock$Interruptor.h>
#include <InterruptMapDeadlock$Mapper.h>
#include <InterruptMapDeadlock.h>
#include <java/util/concurrent/Semaphore.h>
#include <jcpp.h>

using $InterruptMapDeadlock$Mapper = ::InterruptMapDeadlock$Mapper;
using $InterruptMapDeadlock$MapperArray = $Array<InterruptMapDeadlock$Mapper>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Semaphore = ::java::util::concurrent::Semaphore;

void InterruptMapDeadlock$Interruptor::init$($InterruptMapDeadlock$MapperArray* mappers, $Semaphore* gate) {
	$Thread::init$();
	$set(this, mappers, mappers);
	$set(this, gate, gate);
}

void InterruptMapDeadlock$Interruptor::run() {
	$useLocalObjectStack();
	$nc(this->gate)->release($nc(this->mappers)->length);
	{
		$var($InterruptMapDeadlock$MapperArray, arr$, this->mappers);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($InterruptMapDeadlock$Mapper, m, arr$->get(i$));
			{
				$nc(m)->interrupt();
			}
		}
	}
}

InterruptMapDeadlock$Interruptor::InterruptMapDeadlock$Interruptor() {
}

$Class* InterruptMapDeadlock$Interruptor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mappers", "[LInterruptMapDeadlock$Mapper;", nullptr, $FINAL, $field(InterruptMapDeadlock$Interruptor, mappers)},
		{"gate", "Ljava/util/concurrent/Semaphore;", nullptr, $FINAL, $field(InterruptMapDeadlock$Interruptor, gate)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([LInterruptMapDeadlock$Mapper;Ljava/util/concurrent/Semaphore;)V", nullptr, 0, $method(InterruptMapDeadlock$Interruptor, init$, void, $InterruptMapDeadlock$MapperArray*, $Semaphore*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(InterruptMapDeadlock$Interruptor, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"InterruptMapDeadlock$Interruptor", "InterruptMapDeadlock", "Interruptor", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"InterruptMapDeadlock$Interruptor",
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
		"InterruptMapDeadlock"
	};
	$loadClass(InterruptMapDeadlock$Interruptor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InterruptMapDeadlock$Interruptor);
	});
	return class$;
}

$Class* InterruptMapDeadlock$Interruptor::class$ = nullptr;