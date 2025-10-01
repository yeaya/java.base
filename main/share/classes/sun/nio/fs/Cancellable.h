#ifndef _sun_nio_fs_Cancellable_h_
#define _sun_nio_fs_Cancellable_h_
//$ class sun.nio.fs.Cancellable
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class Cancellable : public ::java::lang::Runnable {
	$class(Cancellable, 0, ::java::lang::Runnable)
public:
	Cancellable();
	void init$();
	virtual int64_t addressToPollForCancel();
	void cancel();
	virtual int32_t cancelValue();
	$Throwable* exception();
	virtual void implRun() {}
	virtual void run() override;
	static void runInterruptibly(::sun::nio::fs::Cancellable* task);
	static ::jdk::internal::misc::Unsafe* unsafe;
	int64_t pollingAddress = 0;
	$Object* lock = nullptr;
	bool completed = false;
	$Throwable* exception$ = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_Cancellable_h_