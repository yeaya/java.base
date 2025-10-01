#ifndef _Basic4Appendable$1_h_
#define _Basic4Appendable$1_h_
//$ class Basic4Appendable$1
//$ extends BasicRunnable

#include <BasicRunnable.h>

namespace java {
	namespace lang {
		class Appendable;
	}
}

class Basic4Appendable$1 : public ::BasicRunnable {
	$class(Basic4Appendable$1, $NO_CLASS_INIT, ::BasicRunnable)
public:
	Basic4Appendable$1();
	void init$();
	virtual void init(::java::lang::Appendable* bw, $String* csn, $String* exp) override;
	virtual ::java::lang::Appendable* reset(::java::lang::Appendable* bw) override;
	virtual void run() override;
	$String* csn = nullptr;
	$String* exp = nullptr;
};

#endif // _Basic4Appendable$1_h_