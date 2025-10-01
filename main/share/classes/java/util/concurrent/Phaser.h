#ifndef _java_util_concurrent_Phaser_h_
#define _java_util_concurrent_Phaser_h_
//$ class java.util.concurrent.Phaser
//$ extends java.lang.Object

#include <java/lang/Integer.h>

#pragma push_macro("PHASE_SHIFT")
#undef PHASE_SHIFT
#pragma push_macro("COUNTS_MASK")
#undef COUNTS_MASK
#pragma push_macro("MAX_PARTIES")
#undef MAX_PARTIES
#pragma push_macro("UNARRIVED_MASK")
#undef UNARRIVED_MASK
#pragma push_macro("TERMINATION_BIT")
#undef TERMINATION_BIT
#pragma push_macro("ONE_PARTY")
#undef ONE_PARTY
#pragma push_macro("STATE")
#undef STATE
#pragma push_macro("MAX_PHASE")
#undef MAX_PHASE
#pragma push_macro("MAX_VALUE")
#undef MAX_VALUE
#pragma push_macro("ONE_DEREGISTER")
#undef ONE_DEREGISTER
#pragma push_macro("SPINS_PER_ARRIVAL")
#undef SPINS_PER_ARRIVAL
#pragma push_macro("PARTIES_MASK")
#undef PARTIES_MASK
#pragma push_macro("PARTIES_SHIFT")
#undef PARTIES_SHIFT
#pragma push_macro("ONE_ARRIVAL")
#undef ONE_ARRIVAL
#pragma push_macro("EMPTY")
#undef EMPTY
#pragma push_macro("NCPU")
#undef NCPU

namespace java {
	namespace lang {
		namespace invoke {
			class VarHandle;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Phaser$QNode;
			class TimeUnit;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicReference;
			}
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export Phaser : public ::java::lang::Object {
	$class(Phaser, 0, ::java::lang::Object)
public:
	Phaser();
	void init$();
	void init$(int32_t parties);
	void init$(::java::util::concurrent::Phaser* parent);
	void init$(::java::util::concurrent::Phaser* parent, int32_t parties);
	int32_t abortWait(int32_t phase);
	virtual int32_t arrive();
	virtual int32_t arriveAndAwaitAdvance();
	virtual int32_t arriveAndDeregister();
	static int32_t arrivedOf(int64_t s);
	virtual int32_t awaitAdvance(int32_t phase);
	virtual int32_t awaitAdvanceInterruptibly(int32_t phase);
	virtual int32_t awaitAdvanceInterruptibly(int32_t phase, int64_t timeout, ::java::util::concurrent::TimeUnit* unit);
	$String* badArrive(int64_t s);
	$String* badRegister(int64_t s);
	virtual int32_t bulkRegister(int32_t parties);
	int32_t doArrive(int32_t adjust);
	int32_t doRegister(int32_t registrations);
	virtual void forceTermination();
	virtual int32_t getArrivedParties();
	virtual ::java::util::concurrent::Phaser* getParent();
	int32_t getPhase();
	virtual int32_t getRegisteredParties();
	virtual ::java::util::concurrent::Phaser* getRoot();
	virtual int32_t getUnarrivedParties();
	int32_t internalAwaitAdvance(int32_t phase, ::java::util::concurrent::Phaser$QNode* node);
	virtual bool isTerminated();
	virtual bool onAdvance(int32_t phase, int32_t registeredParties);
	static int32_t partiesOf(int64_t s);
	static int32_t phaseOf(int64_t s);
	int64_t reconcileState();
	virtual int32_t register$();
	void releaseWaiters(int32_t phase);
	$String* stateToString(int64_t s);
	virtual $String* toString() override;
	static int32_t unarrivedOf(int64_t s);
	$volatile(int64_t) state = 0;
	static const int32_t MAX_PARTIES = 0x0000FFFF;
	static const int32_t MAX_PHASE = ::java::lang::Integer::MAX_VALUE;
	static const int32_t PARTIES_SHIFT = 16;
	static const int32_t PHASE_SHIFT = 32;
	static const int32_t UNARRIVED_MASK = 0x0000FFFF;
	static const int64_t PARTIES_MASK = (int64_t)0x00000000FFFF0000;
	static const int64_t COUNTS_MASK = (int64_t)0x00000000FFFFFFFF;
	static const int64_t TERMINATION_BIT = 0x8000000000000000; // (int64_t)1 << 63
	static const int32_t ONE_ARRIVAL = 1;
	static const int32_t ONE_PARTY = 65536; // 1 << PARTIES_SHIFT
	static const int32_t ONE_DEREGISTER = 65537; // ONE_ARRIVAL | ONE_PARTY
	static const int32_t EMPTY = 1;
	::java::util::concurrent::Phaser* parent = nullptr;
	::java::util::concurrent::Phaser* root = nullptr;
	::java::util::concurrent::atomic::AtomicReference* evenQ = nullptr;
	::java::util::concurrent::atomic::AtomicReference* oddQ = nullptr;
	static int32_t NCPU;
	static int32_t SPINS_PER_ARRIVAL;
	static ::java::lang::invoke::VarHandle* STATE;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("PHASE_SHIFT")
#pragma pop_macro("COUNTS_MASK")
#pragma pop_macro("MAX_PARTIES")
#pragma pop_macro("UNARRIVED_MASK")
#pragma pop_macro("TERMINATION_BIT")
#pragma pop_macro("ONE_PARTY")
#pragma pop_macro("STATE")
#pragma pop_macro("MAX_PHASE")
#pragma pop_macro("MAX_VALUE")
#pragma pop_macro("ONE_DEREGISTER")
#pragma pop_macro("SPINS_PER_ARRIVAL")
#pragma pop_macro("PARTIES_MASK")
#pragma pop_macro("PARTIES_SHIFT")
#pragma pop_macro("ONE_ARRIVAL")
#pragma pop_macro("EMPTY")
#pragma pop_macro("NCPU")

#endif // _java_util_concurrent_Phaser_h_