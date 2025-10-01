#ifndef _Basic4Appendable$2_h_
#define _Basic4Appendable$2_h_
//$ class Basic4Appendable$2
//$ extends BasicRunnable

#include <BasicRunnable.h>

namespace java {
	namespace io {
		class CharArrayWriter;
	}
}
namespace java {
	namespace lang {
		class Appendable;
	}
}

class Basic4Appendable$2 : public ::BasicRunnable {
	$class(Basic4Appendable$2, $NO_CLASS_INIT, ::BasicRunnable)
public:
	Basic4Appendable$2();
	void init$();
	virtual void init(::java::lang::Appendable* cw, $String* csn, $String* exp) override;
	virtual ::java::lang::Appendable* reset(::java::lang::Appendable* cw) override;
	virtual void run() override;
	$String* csn = nullptr;
	$String* exp = nullptr;
	::java::io::CharArrayWriter* cw = nullptr;
};

#endif // _Basic4Appendable$2_h_