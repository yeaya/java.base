#ifndef _Basic2$Writer_h_
#define _Basic2$Writer_h_
//$ class Basic2$Writer
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}

class $export Basic2$Writer : public ::java::lang::Runnable {
	$class(Basic2$Writer, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Basic2$Writer();
	void init$(::java::io::OutputStream* out);
	virtual int32_t hash();
	virtual void run() override;
	virtual int32_t total();
	::java::io::OutputStream* out = nullptr;
	int32_t total$ = 0;
	$volatile(int32_t) hash$ = 0;
};

#endif // _Basic2$Writer_h_