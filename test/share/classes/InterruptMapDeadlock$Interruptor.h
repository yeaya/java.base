#ifndef _InterruptMapDeadlock$Interruptor_h_
#define _InterruptMapDeadlock$Interruptor_h_
//$ class InterruptMapDeadlock$Interruptor
//$ extends java.lang.Thread

#include <java/lang/Array.h>
#include <java/lang/Thread.h>

class InterruptMapDeadlock$Mapper;
namespace java {
	namespace util {
		namespace concurrent {
			class Semaphore;
		}
	}
}

class $export InterruptMapDeadlock$Interruptor : public ::java::lang::Thread {
	$class(InterruptMapDeadlock$Interruptor, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	InterruptMapDeadlock$Interruptor();
	void init$($Array<InterruptMapDeadlock$Mapper>* mappers, ::java::util::concurrent::Semaphore* gate);
	virtual void run() override;
	$Array<InterruptMapDeadlock$Mapper>* mappers = nullptr;
	::java::util::concurrent::Semaphore* gate = nullptr;
};

#endif // _InterruptMapDeadlock$Interruptor_h_