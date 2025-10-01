#ifndef _Basic4Appendable$3_h_
#define _Basic4Appendable$3_h_
//$ class Basic4Appendable$3
//$ extends BasicRunnable

#include <BasicRunnable.h>

namespace java {
	namespace lang {
		class Appendable;
	}
}

class Basic4Appendable$3 : public ::BasicRunnable {
	$class(Basic4Appendable$3, $NO_CLASS_INIT, ::BasicRunnable)
public:
	Basic4Appendable$3();
	void init$();
	virtual void init(::java::lang::Appendable* fw, $String* csn, $String* exp) override;
	virtual ::java::lang::Appendable* reset(::java::lang::Appendable* fw) override;
	virtual void run() override;
	$String* csn = nullptr;
	$String* exp = nullptr;
};

#endif // _Basic4Appendable$3_h_