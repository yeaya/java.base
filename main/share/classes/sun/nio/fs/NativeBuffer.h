#ifndef _sun_nio_fs_NativeBuffer_h_
#define _sun_nio_fs_NativeBuffer_h_
//$ class sun.nio.fs.NativeBuffer
//$ extends java.lang.AutoCloseable

#include <java/lang/AutoCloseable.h>

namespace java {
	namespace lang {
		namespace ref {
			class Cleaner$Cleanable;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class NativeBuffer : public ::java::lang::AutoCloseable {
	$class(NativeBuffer, 0, ::java::lang::AutoCloseable)
public:
	NativeBuffer();
	void init$(int32_t size);
	virtual int64_t address();
	virtual void close() override;
	virtual void free();
	virtual $Object* owner();
	virtual void release();
	virtual void setOwner(Object$* owner);
	virtual int32_t size();
	static ::jdk::internal::misc::Unsafe* unsafe;
	int64_t address$ = 0;
	int32_t size$ = 0;
	::java::lang::ref::Cleaner$Cleanable* cleanable = nullptr;
	$Object* owner$ = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_NativeBuffer_h_