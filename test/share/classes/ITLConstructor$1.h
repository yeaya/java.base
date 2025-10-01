#ifndef _ITLConstructor$1_h_
#define _ITLConstructor$1_h_
//$ class ITLConstructor$1
//$ extends java.lang.InheritableThreadLocal

#include <java/lang/InheritableThreadLocal.h>

namespace java {
	namespace lang {
		class Integer;
	}
}

class ITLConstructor$1 : public ::java::lang::InheritableThreadLocal {
	$class(ITLConstructor$1, $NO_CLASS_INIT, ::java::lang::InheritableThreadLocal)
public:
	ITLConstructor$1();
	void init$();
	virtual ::java::lang::Integer* childValue(::java::lang::Integer* parentValue);
	virtual $Object* childValue(Object$* parentValue) override;
	virtual $Object* initialValue() override;
};

#endif // _ITLConstructor$1_h_