#ifndef _ITLRemoveTest$1_h_
#define _ITLRemoveTest$1_h_
//$ class ITLRemoveTest$1
//$ extends java.lang.InheritableThreadLocal

#include <java/lang/InheritableThreadLocal.h>

namespace java {
	namespace lang {
		class Integer;
	}
}

class ITLRemoveTest$1 : public ::java::lang::InheritableThreadLocal {
	$class(ITLRemoveTest$1, $NO_CLASS_INIT, ::java::lang::InheritableThreadLocal)
public:
	ITLRemoveTest$1();
	void init$();
	virtual ::java::lang::Integer* childValue(::java::lang::Integer* parentValue);
	virtual $Object* childValue(Object$* parentValue) override;
	virtual $Object* initialValue() override;
};

#endif // _ITLRemoveTest$1_h_