#ifndef _Basic4Appendable$9_h_
#define _Basic4Appendable$9_h_
//$ class Basic4Appendable$9
//$ extends BasicRunnable

#include <BasicRunnable.h>

namespace java {
	namespace lang {
		class Appendable;
		class StringBuffer;
	}
}

class Basic4Appendable$9 : public ::BasicRunnable {
	$class(Basic4Appendable$9, $NO_CLASS_INIT, ::BasicRunnable)
public:
	Basic4Appendable$9();
	void init$();
	virtual void init(::java::lang::Appendable* sb, $String* csn, $String* exp) override;
	virtual ::java::lang::Appendable* reset(::java::lang::Appendable* sb) override;
	virtual void run() override;
	$String* csn = nullptr;
	$String* exp = nullptr;
	::java::lang::StringBuffer* sb = nullptr;
};

#endif // _Basic4Appendable$9_h_