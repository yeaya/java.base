#ifndef _jdk_internal_jimage_ImageStream_h_
#define _jdk_internal_jimage_ImageStream_h_
//$ class jdk.internal.jimage.ImageStream
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		class ByteBuffer;
		class ByteOrder;
	}
}

namespace jdk {
	namespace internal {
		namespace jimage {

class $export ImageStream : public ::java::lang::Object {
	$class(ImageStream, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ImageStream();
	void init$();
	void init$(int32_t size);
	void init$($bytes* bytes);
	void init$(::java::nio::ByteOrder* byteOrder);
	void init$(int32_t size, ::java::nio::ByteOrder* byteOrder);
	void init$($bytes* bytes, ::java::nio::ByteOrder* byteOrder);
	void init$(::java::nio::ByteBuffer* buffer);
	virtual ::jdk::internal::jimage::ImageStream* align(int32_t alignment);
	virtual void ensure(int32_t needs);
	virtual int32_t get();
	virtual void get($bytes* bytes, int32_t offset, int32_t size);
	virtual ::java::nio::ByteBuffer* getBuffer();
	virtual $bytes* getBytes();
	virtual int32_t getInt();
	virtual int64_t getLong();
	virtual int32_t getPosition();
	virtual int32_t getShort();
	virtual int32_t getSize();
	virtual bool hasByte();
	virtual bool hasBytes(int32_t needs);
	virtual ::jdk::internal::jimage::ImageStream* put(int8_t byt);
	virtual ::jdk::internal::jimage::ImageStream* put(int32_t byt);
	virtual ::jdk::internal::jimage::ImageStream* put($bytes* bytes, int32_t offset, int32_t size);
	virtual ::jdk::internal::jimage::ImageStream* put(::jdk::internal::jimage::ImageStream* stream);
	virtual ::jdk::internal::jimage::ImageStream* putInt(int32_t value);
	virtual ::jdk::internal::jimage::ImageStream* putLong(int64_t value);
	virtual ::jdk::internal::jimage::ImageStream* putShort(int16_t value);
	virtual ::jdk::internal::jimage::ImageStream* putShort(int32_t value);
	virtual void setPosition(int32_t offset);
	virtual void skip(int32_t n);
	virtual $bytes* toArray();
	::java::nio::ByteBuffer* buffer = nullptr;
};

		} // jimage
	} // internal
} // jdk

#endif // _jdk_internal_jimage_ImageStream_h_