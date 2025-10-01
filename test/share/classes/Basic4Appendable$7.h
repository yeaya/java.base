#ifndef _Basic4Appendable$7_h_
#define _Basic4Appendable$7_h_
//$ class Basic4Appendable$7
//$ extends BasicRunnable

#include <BasicRunnable.h>

namespace java {
	namespace lang {
		class Appendable;
	}
}

class Basic4Appendable$7 : public ::BasicRunnable {
	$class(Basic4Appendable$7, $NO_CLASS_INIT, ::BasicRunnable)
public:
	Basic4Appendable$7();
	void init$();
	virtual void init(::java::lang::Appendable* ps, $String* csn, $String* exp) override;
	virtual ::java::lang::Appendable* reset(::java::lang::Appendable* ps) override;
	virtual void run() override;
	$String* csn = nullptr;
	$String* exp = nullptr;
};

#endif // _Basic4Appendable$7_h_