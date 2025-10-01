#ifndef _java_util_zip_ZipFile$ZipFileInflaterInputStream_h_
#define _java_util_zip_ZipFile$ZipFileInflaterInputStream_h_
//$ class java.util.zip.ZipFile$ZipFileInflaterInputStream
//$ extends java.util.zip.InflaterInputStream

#include <java/util/zip/InflaterInputStream.h>

namespace java {
	namespace lang {
		namespace ref {
			class Cleaner$Cleanable;
		}
	}
}
namespace java {
	namespace util {
		namespace zip {
			class Inflater;
			class ZipFile;
			class ZipFile$CleanableResource;
			class ZipFile$ZipFileInputStream;
		}
	}
}

namespace java {
	namespace util {
		namespace zip {

class ZipFile$ZipFileInflaterInputStream : public ::java::util::zip::InflaterInputStream {
	$class(ZipFile$ZipFileInflaterInputStream, $NO_CLASS_INIT, ::java::util::zip::InflaterInputStream)
public:
	ZipFile$ZipFileInflaterInputStream();
	void init$(::java::util::zip::ZipFile* this$0, ::java::util::zip::ZipFile$ZipFileInputStream* zfin, ::java::util::zip::ZipFile$CleanableResource* res, int32_t size);
	void init$(::java::util::zip::ZipFile* this$0, ::java::util::zip::ZipFile$ZipFileInputStream* zfin, ::java::util::zip::ZipFile$CleanableResource* res, ::java::util::zip::Inflater* inf, int32_t size);
	virtual int32_t available() override;
	virtual void close() override;
	virtual void fill() override;
	using ::java::util::zip::InflaterInputStream::read;
	::java::util::zip::ZipFile* this$0 = nullptr;
	$volatile(bool) closeRequested = false;
	bool eof = false;
	::java::lang::ref::Cleaner$Cleanable* cleanable = nullptr;
};

		} // zip
	} // util
} // java

#endif // _java_util_zip_ZipFile$ZipFileInflaterInputStream_h_