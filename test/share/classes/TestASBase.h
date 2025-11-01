#ifndef _TestASBase_h_
#define _TestASBase_h_
//$ class TestASBase
//$ extends TestASIF

#include <TestASIF.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}

class TestASBase : public ::TestASIF {
	$class(TestASBase, $NO_CLASS_INIT, ::TestASIF)
public:
	TestASBase();
	void init$();
	virtual ::java::lang::CharSequence* get() override;
};

#endif // _TestASBase_h_