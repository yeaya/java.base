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

$FieldInfo _InterruptMapDeadlock$Interruptor_FieldInfo_[] = {
	{"mappers", "[LInterruptMapDeadlock$Mapper;", nullptr, $FINAL, $field(InterruptMapDeadlock$Interruptor, mappers)},
	{"gate", "Ljava/util/concurrent/Semaphore;", nullptr, $FINAL, $field(InterruptMapDeadlock$Interruptor, gate)},
	{}
};

$MethodInfo _InterruptMapDeadlock$Interruptor_MethodInfo_[] = {
	{"<init>", "([LInterruptMapDeadlock$Mapper;Ljava/util/concurrent/Semaphore;)V", nullptr, 0, $method(static_cast<void(InterruptMapDeadlock$Interruptor::*)($InterruptMapDeadlock$MapperArray*,$Semaphore*)>(&InterruptMapDeadlock$Interruptor::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _InterruptMapDeadlock$Interruptor_InnerClassesInfo_[] = {
	{"InterruptMapDeadlock$Interruptor", "InterruptMapDeadlock", "Interruptor", $STATIC},
	{}
};

$ClassInfo _InterruptMapDeadlock$Interruptor_ClassInfo_ = {
	$ACC_SUPER,
	"InterruptMapDeadlock$Interruptor",
	"java.lang.Thread",
	nullptr,
	_InterruptMapDeadlock$Interruptor_FieldInfo_,
	_InterruptMapDeadlock$Interruptor_MethodInfo_,
	nullptr,
	nullptr,
	_InterruptMapDeadlock$Interruptor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"InterruptMapDeadlock"
};

$Object* allocate$InterruptMapDeadlock$Interruptor($Class* clazz) {
	return $of($alloc(InterruptMapDeadlock$Interruptor));
}

void InterruptMapDeadlock$Interruptor::init$($InterruptMapDeadlock$MapperArray* mappers, $Semaphore* gate) {
	$Thread::init$();
	$set(this, mappers, mappers);
	$set(this, gate, gate);
}

void InterruptMapDeadlock$Interruptor::run() {
	$useLocalCurrentObjectStackCache();
	$nc(this->gate)->release($nc(this->mappers)->length);
	{
		$var($InterruptMapDeadlock$MapperArray, arr$, this->mappers);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
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
	$loadClass(InterruptMapDeadlock$Interruptor, name, initialize, &_InterruptMapDeadlock$Interruptor_ClassInfo_, allocate$InterruptMapDeadlock$Interruptor);
	return class$;
}

$Class* InterruptMapDeadlock$Interruptor::class$ = nullptr;