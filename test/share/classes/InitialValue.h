#ifndef _InitialValue_h_
#define _InitialValue_h_
//$ class InitialValue
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace java {
	namespace lang {
		class ThreadLocal;
	}
}

class $export InitialValue : public ::java::lang::Runnable {
	$class(InitialValue, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	InitialValue();
	void init$();
	static void main($StringArray* args);
	virtual void run() override;
	static ::java::lang::ThreadLocal* other;
	static bool passed;
};

#endif // _InitialValue_h_