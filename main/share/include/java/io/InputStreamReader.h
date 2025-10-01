#ifndef _java_io_InputStreamReader_h_
#define _java_io_InputStreamReader_h_
//$ class java.io.InputStreamReader
//$ extends java.io.Reader

#include <java/io/Reader.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace nio {
		class CharBuffer;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class Charset;
			class CharsetDecoder;
		}
	}
}
namespace sun {
	namespace nio {
		namespace cs {
			class StreamDecoder;
		}
	}
}

namespace java {
	namespace io {

class $import InputStreamReader : public ::java::io::Reader {
	$class(InputStreamReader, $NO_CLASS_INIT, ::java::io::Reader)
public:
	InputStreamReader();
	void init$(::java::io::InputStream* in);
	void init$(::java::io::InputStream* in, $String* charsetName);
	void init$(::java::io::InputStream* in, ::java::nio::charset::Charset* cs);
	void init$(::java::io::InputStream* in, ::java::nio::charset::CharsetDecoder* dec);
	virtual void close() override;
	virtual $String* getEncoding();
	using ::java::io::Reader::read;
	virtual int32_t read(::java::nio::CharBuffer* target) override;
	virtual int32_t read() override;
	virtual int32_t read($chars* cbuf, int32_t off, int32_t len) override;
	virtual bool ready() override;
	::sun::nio::cs::StreamDecoder* sd = nullptr;
};

	} // io
} // java

#endif // _java_io_InputStreamReader_h_