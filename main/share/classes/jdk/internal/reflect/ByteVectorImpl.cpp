#include <jdk/internal/reflect/ByteVectorImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace reflect {

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
	return this->data->get(index);
}

void ByteVectorImpl::put(int32_t index, int8_t value) {
	if (index >= $nc(this->data)->length) {
		resize(index);
		this->pos = index;
	}
	this->data->set(index, value);
}

void ByteVectorImpl::add(int8_t value) {
	if (++this->pos >= $nc(this->data)->length) {
		resize(this->pos);
	}
	this->data->set(this->pos, value);
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
		minSize = 2 * this->data->length;
	}
	$var($bytes, newData, $new($bytes, minSize));
	$System::arraycopy(this->data, 0, newData, 0, this->data->length);
	$set(this, data, newData);
}

ByteVectorImpl::ByteVectorImpl() {
}

$Class* ByteVectorImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"data", "[B", nullptr, $PRIVATE, $field(ByteVectorImpl, data)},
		{"pos", "I", nullptr, $PRIVATE, $field(ByteVectorImpl, pos)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ByteVectorImpl, init$, void)},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(ByteVectorImpl, init$, void, int32_t)},
		{"add", "(B)V", nullptr, $PUBLIC, $virtualMethod(ByteVectorImpl, add, void, int8_t)},
		{"get", "(I)B", nullptr, $PUBLIC, $virtualMethod(ByteVectorImpl, get, int8_t, int32_t)},
		{"getData", "()[B", nullptr, $PUBLIC, $virtualMethod(ByteVectorImpl, getData, $bytes*)},
		{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(ByteVectorImpl, getLength, int32_t)},
		{"put", "(IB)V", nullptr, $PUBLIC, $virtualMethod(ByteVectorImpl, put, void, int32_t, int8_t)},
		{"resize", "(I)V", nullptr, $PRIVATE, $method(ByteVectorImpl, resize, void, int32_t)},
		{"trim", "()V", nullptr, $PUBLIC, $virtualMethod(ByteVectorImpl, trim, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.reflect.ByteVectorImpl",
		"java.lang.Object",
		"jdk.internal.reflect.ByteVector",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ByteVectorImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ByteVectorImpl);
	});
	return class$;
}

$Class* ByteVectorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk