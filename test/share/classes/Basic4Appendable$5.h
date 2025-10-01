#ifndef _Basic4Appendable$5_h_
#define _Basic4Appendable$5_h_
//$ class Basic4Appendable$5
//$ extends BasicRunnable

#include <BasicRunnable.h>

namespace java {
	namespace lang {
		class Appendable;
	}
}

class Basic4Appendable$5 : public ::BasicRunnable {
	$class(Basic4Appendable$5, $NO_CLASS_INIT, ::BasicRunnable)
public:
	Basic4Appendable$5();
	void init$();
	virtual void init(::java::lang::Appendable* pw, $String* csn, $String* exp) override;
	virtual ::java::lang::Appendable* reset(::java::lang::Appendable* pw) override;
	virtual void run() override;
	$String* csn = nullptr;
	$String* exp = nullptr;
};

#endif // _Basic4Appendable$5_h_