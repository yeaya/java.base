#ifndef _Basic2$Reader_h_
#define _Basic2$Reader_h_
//$ class Basic2$Reader
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace io {
		class InputStream;
	}
}

class $export Basic2$Reader : public ::java::lang::Runnable {
	$class(Basic2$Reader, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Basic2$Reader();
	void init$(::java::io::InputStream* in);
	virtual int32_t hash();
	virtual void run() override;
	virtual int32_t total();
	::java::io::InputStream* in = nullptr;
	$volatile(int32_t) total$ = 0;
	$volatile(int32_t) hash$ = 0;
};

#endif // _Basic2$Reader_h_