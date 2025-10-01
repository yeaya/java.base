#ifndef _RacyDeregister$1_h_
#define _RacyDeregister$1_h_
//$ class RacyDeregister$1
//$ extends java.lang.Thread

#include <java/lang/Array.h>
#include <java/lang/Thread.h>

namespace java {
	namespace nio {
		namespace channels {
			class SelectionKey;
			class Selector;
		}
	}
}

class RacyDeregister$1 : public ::java::lang::Thread {
	$class(RacyDeregister$1, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	RacyDeregister$1();
	void init$(::java::nio::channels::Selector* val$sel, $Array<::java::nio::channels::SelectionKey>* val$key);
	virtual void run() override;
	$Array<::java::nio::channels::SelectionKey>* val$key = nullptr;
	::java::nio::channels::Selector* val$sel = nullptr;
};

#endif // _RacyDeregister$1_h_