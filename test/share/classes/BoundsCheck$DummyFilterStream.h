#ifndef _BoundsCheck$DummyFilterStream_h_
#define _BoundsCheck$DummyFilterStream_h_
//$ class BoundsCheck$DummyFilterStream
//$ extends java.io.FilterOutputStream

#include <java/io/FilterOutputStream.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}

class $export BoundsCheck$DummyFilterStream : public ::java::io::FilterOutputStream {
	$class(BoundsCheck$DummyFilterStream, $NO_CLASS_INIT, ::java::io::FilterOutputStream)
public:
	BoundsCheck$DummyFilterStream();
	void init$(::java::io::OutputStream* o);
	using ::java::io::FilterOutputStream::write;
	virtual void write(int32_t val) override;
};

#endif // _BoundsCheck$DummyFilterStream_h_