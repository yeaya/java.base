#ifndef _Write$F_h_
#define _Write$F_h_
//$ class Write$F
//$ extends java.io.FilterOutputStream

#include <java/io/FilterOutputStream.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}

class $export Write$F : public ::java::io::FilterOutputStream {
	$class(Write$F, $NO_CLASS_INIT, ::java::io::FilterOutputStream)
public:
	Write$F();
	void init$(::java::io::OutputStream* o);
	using ::java::io::FilterOutputStream::write;
	virtual void write(int32_t b) override;
};

#endif // _Write$F_h_