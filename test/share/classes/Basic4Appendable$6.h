#ifndef _Basic4Appendable$6_h_
#define _Basic4Appendable$6_h_
//$ class Basic4Appendable$6
//$ extends BasicRunnable

#include <BasicRunnable.h>

namespace java {
	namespace io {
		class StringWriter;
	}
}
namespace java {
	namespace lang {
		class Appendable;
	}
}

class Basic4Appendable$6 : public ::BasicRunnable {
	$class(Basic4Appendable$6, $NO_CLASS_INIT, ::BasicRunnable)
public:
	Basic4Appendable$6();
	void init$();
	virtual void init(::java::lang::Appendable* sw, $String* csn, $String* exp) override;
	virtual ::java::lang::Appendable* reset(::java::lang::Appendable* sw) override;
	virtual void run() override;
	$String* csn = nullptr;
	$String* exp = nullptr;
	::java::io::StringWriter* sw = nullptr;
};

#endif // _Basic4Appendable$6_h_