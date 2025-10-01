#ifndef _Identity$2_h_
#define _Identity$2_h_
//$ class Identity$2
//$ extends java.util.concurrent.ThreadFactory

#include <java/util/concurrent/ThreadFactory.h>

namespace java {
	namespace lang {
		class Runnable;
		class Thread;
	}
}

class Identity$2 : public ::java::util::concurrent::ThreadFactory {
	$class(Identity$2, $NO_CLASS_INIT, ::java::util::concurrent::ThreadFactory)
public:
	Identity$2();
	void init$(int32_t val$groupId);
	virtual $Thread* newThread(::java::lang::Runnable* r) override;
	int32_t val$groupId = 0;
};

#endif // _Identity$2_h_