#ifndef _jdk_internal_org_objectweb_asm$_ByteVector_h_
#define _jdk_internal_org_objectweb_asm$_ByteVector_h_
//$ class jdk.internal.org.objectweb.asm.ByteVector
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

class $import ByteVector : public ::java::lang::Object {
	$class(ByteVector, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ByteVector();
	void init$();
	void init$(int32_t initialCapacity);
	void init$($bytes* data);
	::jdk::internal::org::objectweb::asm$::ByteVector* encodeUtf8($String* stringValue, int32_t offset, int32_t maxByteLength);
	void enlarge(int32_t size);
	::jdk::internal::org::objectweb::asm$::ByteVector* put11(int32_t byteValue1, int32_t byteValue2);
	::jdk::internal::org::objectweb::asm$::ByteVector* put112(int32_t byteValue1, int32_t byteValue2, int32_t shortValue);
	::jdk::internal::org::objectweb::asm$::ByteVector* put12(int32_t byteValue, int32_t shortValue);
	::jdk::internal::org::objectweb::asm$::ByteVector* put122(int32_t byteValue, int32_t shortValue1, int32_t shortValue2);
	virtual ::jdk::internal::org::objectweb::asm$::ByteVector* putByte(int32_t byteValue);
	virtual ::jdk::internal::org::objectweb::asm$::ByteVector* putByteArray($bytes* byteArrayValue, int32_t byteOffset, int32_t byteLength);
	virtual ::jdk::internal::org::objectweb::asm$::ByteVector* putInt(int32_t intValue);
	virtual ::jdk::internal::org::objectweb::asm$::ByteVector* putLong(int64_t longValue);
	virtual ::jdk::internal::org::objectweb::asm$::ByteVector* putShort(int32_t shortValue);
	virtual ::jdk::internal::org::objectweb::asm$::ByteVector* putUTF8($String* stringValue);
	$bytes* data = nullptr;
	int32_t length = 0;
};

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_ByteVector_h_