#ifndef _Basic4Appendable$4_h_
#define _Basic4Appendable$4_h_
//$ class Basic4Appendable$4
//$ extends BasicRunnable

#include <BasicRunnable.h>

namespace java {
	namespace lang {
		class Appendable;
	}
}

class Basic4Appendable$4 : public ::BasicRunnable {
	$class(Basic4Appendable$4, $NO_CLASS_INIT, ::BasicRunnable)
public:
	Basic4Appendable$4();
	void init$();
	virtual void init(::java::lang::Appendable* osw, $String* csn, $String* exp) override;
	virtual ::java::lang::Appendable* reset(::java::lang::Appendable* osw) override;
	virtual void run() override;
	$String* csn = nullptr;
	$String* exp = nullptr;
};

#endif // _Basic4Appendable$4_h_