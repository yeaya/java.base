#ifndef _java_util_zip_GZIPInputStream$1_h_
#define _java_util_zip_GZIPInputStream$1_h_
//$ class java.util.zip.GZIPInputStream$1
//$ extends java.io.FilterInputStream

#include <java/io/FilterInputStream.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace util {
		namespace zip {
			class GZIPInputStream;
		}
	}
}

namespace java {
	namespace util {
		namespace zip {

class GZIPInputStream$1 : public ::java::io::FilterInputStream {
	$class(GZIPInputStream$1, $NO_CLASS_INIT, ::java::io::FilterInputStream)
public:
	GZIPInputStream$1();
	void init$(::java::util::zip::GZIPInputStream* this$0, ::java::io::InputStream* in);
	virtual void close() override;
	::java::util::zip::GZIPInputStream* this$0 = nullptr;
};

		} // zip
	} // util
} // java

#endif // _java_util_zip_GZIPInputStream$1_h_