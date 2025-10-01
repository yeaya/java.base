#ifndef _GroupOfOne$2_h_
#define _GroupOfOne$2_h_
//$ class GroupOfOne$2
//$ extends java.util.concurrent.ThreadFactory

#include <java/util/concurrent/ThreadFactory.h>

namespace java {
	namespace lang {
		class Runnable;
		class Thread;
	}
}

class GroupOfOne$2 : public ::java::util::concurrent::ThreadFactory {
	$class(GroupOfOne$2, $NO_CLASS_INIT, ::java::util::concurrent::ThreadFactory)
public:
	GroupOfOne$2();
	void init$();
	virtual $Thread* newThread(::java::lang::Runnable* r) override;
};

#endif // _GroupOfOne$2_h_