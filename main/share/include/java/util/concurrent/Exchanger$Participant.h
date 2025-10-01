#ifndef _java_util_concurrent_Exchanger$Participant_h_
#define _java_util_concurrent_Exchanger$Participant_h_
//$ class java.util.concurrent.Exchanger$Participant
//$ extends java.lang.ThreadLocal

#include <java/lang/ThreadLocal.h>

namespace java {
	namespace util {
		namespace concurrent {

class $import Exchanger$Participant : public ::java::lang::ThreadLocal {
	$class(Exchanger$Participant, $NO_CLASS_INIT, ::java::lang::ThreadLocal)
public:
	Exchanger$Participant();
	void init$();
	virtual $Object* initialValue() override;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_Exchanger$Participant_h_