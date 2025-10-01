#ifndef _sun_net_www_content_text_PlainTextInputStream_h_
#define _sun_net_www_content_text_PlainTextInputStream_h_
//$ class sun.net.www.content.text.PlainTextInputStream
//$ extends java.io.FilterInputStream

#include <java/io/FilterInputStream.h>

namespace java {
	namespace io {
		class InputStream;
	}
}

namespace sun {
	namespace net {
		namespace www {
			namespace content {
				namespace text {

class PlainTextInputStream : public ::java::io::FilterInputStream {
	$class(PlainTextInputStream, $NO_CLASS_INIT, ::java::io::FilterInputStream)
public:
	PlainTextInputStream();
	void init$(::java::io::InputStream* is);
};

				} // text
			} // content
		} // www
	} // net
} // sun

#endif // _sun_net_www_content_text_PlainTextInputStream_h_