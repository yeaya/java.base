#ifndef _jdk_internal_jimage_ImageReader_h_
#define _jdk_internal_jimage_ImageReader_h_
//$ class jdk.internal.jimage.ImageReader
//$ extends java.lang.AutoCloseable

#include <java/lang/Array.h>
#include <java/lang/AutoCloseable.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
		class ByteOrder;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace jimage {
			class ImageHeader;
			class ImageLocation;
			class ImageReader$Directory;
			class ImageReader$Node;
			class ImageReader$Resource;
			class ImageReader$SharedImageReader;
			class ImageStringsReader;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jimage {

class $export ImageReader : public ::java::lang::AutoCloseable {
	$class(ImageReader, $NO_CLASS_INIT, ::java::lang::AutoCloseable)
public:
	ImageReader();
	void init$(::jdk::internal::jimage::ImageReader$SharedImageReader* reader);
	virtual void close() override;
	void ensureOpen();
	::jdk::internal::jimage::ImageLocation* findLocation($String* mn, $String* rn);
	::jdk::internal::jimage::ImageLocation* findLocation($String* name);
	::jdk::internal::jimage::ImageReader$Node* findNode($String* name);
	$longs* getAttributes(int32_t offset);
	::java::nio::ByteOrder* getByteOrder();
	$StringArray* getEntryNames();
	::jdk::internal::jimage::ImageHeader* getHeader();
	::java::nio::file::Path* getImagePath();
	$StringArray* getModuleNames();
	$String* getName();
	$bytes* getResource(::jdk::internal::jimage::ImageReader$Node* node);
	$bytes* getResource(::jdk::internal::jimage::ImageReader$Resource* rs);
	$bytes* getResource($String* name);
	$bytes* getResource(::jdk::internal::jimage::ImageLocation* loc);
	::java::nio::ByteBuffer* getResourceBuffer(::jdk::internal::jimage::ImageLocation* loc);
	::java::io::InputStream* getResourceStream(::jdk::internal::jimage::ImageLocation* loc);
	::jdk::internal::jimage::ImageReader$Directory* getRootDirectory();
	$String* getString(int32_t offset);
	::jdk::internal::jimage::ImageStringsReader* getStrings();
	static $String* lambda$getModuleNames$0(int32_t off, $String* s);
	static $StringArray* lambda$getModuleNames$1(int32_t x$0);
	static ::jdk::internal::jimage::ImageReader* open(::java::nio::file::Path* imagePath, ::java::nio::ByteOrder* byteOrder);
	static ::jdk::internal::jimage::ImageReader* open(::java::nio::file::Path* imagePath);
	static void releaseByteBuffer(::java::nio::ByteBuffer* buffer);
	void requireOpen();
	bool verifyLocation($String* mn, $String* rn);
	::jdk::internal::jimage::ImageReader$SharedImageReader* reader = nullptr;
	$volatile(bool) closed = false;
};

		} // jimage
	} // internal
} // jdk

#endif // _jdk_internal_jimage_ImageReader_h_