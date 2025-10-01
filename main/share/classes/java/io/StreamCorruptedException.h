#ifndef _java_io_StreamCorruptedException_h_
#define _java_io_StreamCorruptedException_h_
//$ class java.io.StreamCorruptedException
//$ extends java.io.ObjectStreamException

#include <java/io/ObjectStreamException.h>

namespace java {
	namespace io {

class $export StreamCorruptedException : public ::java::io::ObjectStreamException {
	$class(StreamCorruptedException, $NO_CLASS_INIT, ::java::io::ObjectStreamException)
public:
	StreamCorruptedException();
	void init$($String* reason);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x7CAC02968639F3C2;
	StreamCorruptedException(const StreamCorruptedException& e);
	StreamCorruptedException wrapper$();
	virtual void throwWrapper$() override;
};

	} // io
} // java

#endif // _java_io_StreamCorruptedException_h_