#ifndef _CheckLocking_h_
#define _CheckLocking_h_
//$ class CheckLocking
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace java {
	namespace nio {
		namespace channels {
			class Selector;
		}
	}
}

class $export CheckLocking : public ::java::lang::Runnable {
	$class(CheckLocking, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	CheckLocking();
	void init$();
	static void doSelect();
	static void main($StringArray* args);
	virtual void run() override;
	static ::java::nio::channels::Selector* selector;
};

#endif // _CheckLocking_h_