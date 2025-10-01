#ifndef _java_io_BufferedReader$1_h_
#define _java_io_BufferedReader$1_h_
//$ class java.io.BufferedReader$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace io {
		class BufferedReader;
	}
}

namespace java {
	namespace io {

class BufferedReader$1 : public ::java::util::Iterator {
	$class(BufferedReader$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	BufferedReader$1();
	void init$(::java::io::BufferedReader* this$0);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	::java::io::BufferedReader* this$0 = nullptr;
	$String* nextLine = nullptr;
};

	} // io
} // java

#endif // _java_io_BufferedReader$1_h_