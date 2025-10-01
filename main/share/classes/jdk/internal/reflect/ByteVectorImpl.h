#ifndef _jdk_internal_reflect_ByteVectorImpl_h_
#define _jdk_internal_reflect_ByteVectorImpl_h_
//$ class jdk.internal.reflect.ByteVectorImpl
//$ extends jdk.internal.reflect.ByteVector

#include <java/lang/Array.h>
#include <jdk/internal/reflect/ByteVector.h>

namespace jdk {
	namespace internal {
		namespace reflect {

class ByteVectorImpl : public ::jdk::internal::reflect::ByteVector {
	$class(ByteVectorImpl, $NO_CLASS_INIT, ::jdk::internal::reflect::ByteVector)
public:
	ByteVectorImpl();
	void init$();
	void init$(int32_t sz);
	virtual void add(int8_t value) override;
	virtual int8_t get(int32_t index) override;
	virtual $bytes* getData() override;
	virtual int32_t getLength() override;
	virtual void put(int32_t index, int8_t value) override;
	void resize(int32_t minSize);
	virtual void trim() override;
	$bytes* data = nullptr;
	int32_t pos = 0;
};

		} // reflect
	} // internal
} // jdk

#endif // _jdk_internal_reflect_ByteVectorImpl_h_