#ifndef _SiblingIOEHandle$ProcessC_h_
#define _SiblingIOEHandle$ProcessC_h_
//$ class SiblingIOEHandle$ProcessC
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace lang {
		class Process;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CyclicBarrier;
		}
	}
}

class SiblingIOEHandle$ProcessC : public ::java::lang::Runnable {
	$class(SiblingIOEHandle$ProcessC, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	SiblingIOEHandle$ProcessC();
	void init$(::java::util::concurrent::CyclicBarrier* barrier);
	virtual void run() override;
	virtual void waitFor();
	::java::util::concurrent::CyclicBarrier* barrier = nullptr;
	::java::lang::Process* processC = nullptr;
};

#endif // _SiblingIOEHandle$ProcessC_h_