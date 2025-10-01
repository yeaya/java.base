#ifndef _jdk_internal_jimage_BasicImageReader_h_
#define _jdk_internal_jimage_BasicImageReader_h_
//$ class jdk.internal.jimage.BasicImageReader
//$ extends java.lang.AutoCloseable

#include <java/lang/Array.h>
#include <java/lang/AutoCloseable.h>

#pragma push_macro("MAP_ALL")
#undef MAP_ALL
#pragma push_macro("USE_JVM_MAP")
#undef USE_JVM_MAP
#pragma push_macro("IS_64_BIT")
#undef IS_64_BIT

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
		class ByteOrder;
		class IntBuffer;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class FileChannel;
		}
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
			class ImageStringsReader;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace jimage {
			namespace decompressor {
				class Decompressor;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jimage {

class $import BasicImageReader : public ::java::lang::AutoCloseable {
	$class(BasicImageReader, 0, ::java::lang::AutoCloseable)
public:
	BasicImageReader();
	void init$(::java::nio::file::Path* path, ::java::nio::ByteOrder* byteOrder);
	void init$(::java::nio::file::Path* imagePath);
	virtual void close() override;
	virtual ::jdk::internal::jimage::ImageLocation* findLocation($String* module, $String* name);
	virtual ::jdk::internal::jimage::ImageLocation* findLocation($String* name);
	virtual $longs* getAttributes(int32_t offset);
	$bytes* getBufferBytes(::java::nio::ByteBuffer* buffer);
	virtual ::java::nio::ByteOrder* getByteOrder();
	virtual $StringArray* getEntryNames();
	virtual ::jdk::internal::jimage::ImageHeader* getHeader();
	virtual ::java::nio::file::Path* getImagePath();
	virtual ::jdk::internal::jimage::ImageLocation* getLocation(int32_t offset);
	virtual int32_t getLocationIndex($String* name);
	int32_t getLocationIndex($String* module, $String* name);
	virtual $String* getName();
	virtual $bytes* getResource($String* name);
	virtual $bytes* getResource(::jdk::internal::jimage::ImageLocation* loc);
	virtual ::java::nio::ByteBuffer* getResourceBuffer(::jdk::internal::jimage::ImageLocation* loc);
	virtual ::java::io::InputStream* getResourceStream(::jdk::internal::jimage::ImageLocation* loc);
	virtual $String* getString(int32_t offset);
	virtual ::jdk::internal::jimage::ImageStringsReader* getStrings();
	::java::nio::IntBuffer* intBuffer(::java::nio::ByteBuffer* buffer, int32_t offset, int32_t size);
	static bool isSystemProperty($String* key, $String* value, $String* def);
	static bool lambda$getEntryNames$0(int32_t o);
	$String* lambda$getEntryNames$1(int32_t o);
	static $StringArray* lambda$getEntryNames$2(int32_t x$0);
	$String* lambda$getResourceBuffer$3(int32_t strOffset);
	virtual int32_t match(int32_t offset, $String* string, int32_t stringOffset);
	static ::jdk::internal::jimage::BasicImageReader* open(::java::nio::file::Path* imagePath);
	::java::nio::ByteBuffer* readBuffer(int64_t offset, int64_t size);
	::jdk::internal::jimage::ImageHeader* readHeader(::java::nio::IntBuffer* buffer);
	static void releaseByteBuffer(::java::nio::ByteBuffer* buffer);
	static ::java::nio::ByteBuffer* slice(::java::nio::ByteBuffer* buffer, int32_t position, int32_t capacity);
	virtual bool verifyLocation($String* module, $String* name);
	static bool IS_64_BIT;
	static bool USE_JVM_MAP;
	static bool MAP_ALL;
	::java::nio::file::Path* imagePath = nullptr;
	::java::nio::ByteOrder* byteOrder = nullptr;
	$String* name = nullptr;
	::java::nio::ByteBuffer* memoryMap = nullptr;
	::java::nio::channels::FileChannel* channel = nullptr;
	::jdk::internal::jimage::ImageHeader* header = nullptr;
	int64_t indexSize = 0;
	::java::nio::IntBuffer* redirect = nullptr;
	::java::nio::IntBuffer* offsets = nullptr;
	::java::nio::ByteBuffer* locations = nullptr;
	::java::nio::ByteBuffer* strings = nullptr;
	::jdk::internal::jimage::ImageStringsReader* stringsReader = nullptr;
	::jdk::internal::jimage::decompressor::Decompressor* decompressor = nullptr;
};

		} // jimage
	} // internal
} // jdk

#pragma pop_macro("MAP_ALL")
#pragma pop_macro("USE_JVM_MAP")
#pragma pop_macro("IS_64_BIT")

#endif // _jdk_internal_jimage_BasicImageReader_h_