#ifndef _ClosedByInterrupt$ReaderWriter_h_
#define _ClosedByInterrupt$ReaderWriter_h_
//$ class ClosedByInterrupt$ReaderWriter
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace nio {
		namespace channels {
			class FileChannel;
		}
	}
}

class $export ClosedByInterrupt$ReaderWriter : public ::java::lang::Runnable {
	$class(ClosedByInterrupt$ReaderWriter, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	ClosedByInterrupt$ReaderWriter();
	void init$(::java::nio::channels::FileChannel* fc, bool interruptible);
	virtual void run() override;
	::java::nio::channels::FileChannel* fc = nullptr;
	bool interruptible = false;
	bool writer = false;
};

#endif // _ClosedByInterrupt$ReaderWriter_h_