#ifndef _Basic4Appendable$8_h_
#define _Basic4Appendable$8_h_
//$ class Basic4Appendable$8
//$ extends BasicRunnable

#include <BasicRunnable.h>

namespace java {
	namespace lang {
		class Appendable;
	}
}
namespace java {
	namespace nio {
		class CharBuffer;
	}
}

class Basic4Appendable$8 : public ::BasicRunnable {
	$class(Basic4Appendable$8, $NO_CLASS_INIT, ::BasicRunnable)
public:
	Basic4Appendable$8();
	void init$();
	virtual void init(::java::lang::Appendable* cb, $String* csn, $String* exp) override;
	virtual ::java::lang::Appendable* reset(::java::lang::Appendable* cb) override;
	virtual void run() override;
	$String* csn = nullptr;
	$String* exp = nullptr;
	::java::nio::CharBuffer* cb = nullptr;
};

#endif // _Basic4Appendable$8_h_