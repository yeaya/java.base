#include <jdk/internal/reflect/ByteVectorImpl.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteVector = ::jdk::internal::reflect::ByteVector;

namespace jdk {
	namespace internal {
		namespace reflect {

$FieldInfo _ByteVectorImpl_FieldInfo_[] = {
	{"data", "[B", nullptr, $PRIVATE, $field(ByteVectorImpl, data)},
	{"pos", "I", nullptr, $PRIVATE, $field(ByteVectorImpl, pos)},
	{}
};

$MethodInfo _ByteVectorImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ByteVectorImpl::*)()>(&ByteVectorImpl::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ByteVectorImpl::*)(int32_t)>(&ByteVectorImpl::init$))},
	{"add", "(B)V", nullptr, $PUBLIC},
	{"get", "(I)B", nullptr, $PUBLIC},
	{"getData", "()[B", nullptr, $PUBLIC},
	{"getLength", "()I", nullptr, $PUBLIC},
	{"put", "(IB)V", nullptr, $PUBLIC},
	{"resize", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(ByteVectorImpl::*)(int32_t)>(&ByteVectorImpl::resize))},
	{"trim", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ByteVectorImpl_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.reflect.ByteVectorImpl",
	"java.lang.Object",
	"jdk.internal.reflect.ByteVector",
	_ByteVectorImpl_FieldInfo_,
	_ByteVectorImpl_MethodInfo_
};

$Object* allocate$ByteVectorImpl($Class* clazz) {
	return $of($alloc(ByteVectorImpl));
}

void ByteVectorImpl::init$() {
	ByteVectorImpl::init$(100);
}

void ByteVectorImpl::init$(int32_t sz) {
	$set(this, data, $new($bytes, sz));
	this->pos = -1;
}

int32_t ByteVectorImpl::getLength() {
	return this->pos + 1;
}

int8_t ByteVectorImpl::get(int32_t index) {
	if (index >= $nc(this->data)->length) {
		resize(index);
		this->pos = index;
	}
	return $nc(this->data)->get(index);
}

void ByteVectorImpl::put(int32_t index, int8_t value) {
	if (index >= $nc(this->data)->length) {
		resize(index);
		this->pos = index;
	}
	$nc(this->data)->set(index, value);
}

void ByteVectorImpl::add(int8_t value) {
	if (++this->pos >= $nc(this->data)->length) {
		resize(this->pos);
	}
	$nc(this->data)->set(this->pos, value);
}

void ByteVectorImpl::trim() {
	if (this->pos != $nc(this->data)->length - 1) {
		$var($bytes, newData, $new($bytes, this->pos + 1));
		$System::arraycopy(this->data, 0, newData, 0, this->pos + 1);
		$set(this, data, newData);
	}
}

$bytes* ByteVectorImpl::getData() {
	return this->data;
}

void ByteVectorImpl::resize(int32_t minSize) {
	if (minSize <= 2 * $nc(this->data)->length) {
		minSize = 2 * $nc(this->data)->length;
	}
	$var($bytes, newData, $new($bytes, minSize));
	$System::arraycopy(this->data, 0, newData, 0, $nc(this->data)->length);
	$set(this, data, newData);
}

ByteVectorImpl::ByteVectorImpl() {
}

$Class* ByteVectorImpl::load$($String* name, bool initialize) {
	$loadClass(ByteVectorImpl, name, initialize, &_ByteVectorImpl_ClassInfo_, allocate$ByteVectorImpl);
	return class$;
}

$Class* ByteVectorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk