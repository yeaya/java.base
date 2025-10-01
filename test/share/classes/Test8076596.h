#ifndef _Test8076596_h_
#define _Test8076596_h_
//$ class Test8076596
//$ extends java.lang.SecurityManager

#include <java/lang/Array.h>
#include <java/lang/SecurityManager.h>

namespace java {
	namespace lang {
		class Void;
	}
}

class $export Test8076596 : public ::java::lang::SecurityManager {
	$class(Test8076596, $NO_CLASS_INIT, ::java::lang::SecurityManager)
public:
	Test8076596();
	void init$();
	static ::java::lang::Void* lambda$new$0();
	static void main($StringArray* args);
};

#endif // _Test8076596_h_