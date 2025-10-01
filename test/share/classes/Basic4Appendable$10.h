#ifndef _Basic4Appendable$10_h_
#define _Basic4Appendable$10_h_
//$ class Basic4Appendable$10
//$ extends BasicRunnable

#include <BasicRunnable.h>

namespace java {
	namespace lang {
		class Appendable;
		class StringBuilder;
	}
}

class Basic4Appendable$10 : public ::BasicRunnable {
	$class(Basic4Appendable$10, $NO_CLASS_INIT, ::BasicRunnable)
public:
	Basic4Appendable$10();
	void init$();
	virtual void init(::java::lang::Appendable* sb, $String* csn, $String* exp) override;
	virtual ::java::lang::Appendable* reset(::java::lang::Appendable* sb) override;
	virtual void run() override;
	$String* csn = nullptr;
	$String* exp = nullptr;
	::java::lang::StringBuilder* sb = nullptr;
};

#endif // _Basic4Appendable$10_h_