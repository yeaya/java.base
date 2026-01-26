#include <sun/nio/ch/NativeObject.h>

#include <java/lang/AssertionError.h>
#include <java/lang/InternalError.h>
#include <java/nio/ByteOrder.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef BIG_ENDIAN
#undef LITTLE_ENDIAN

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteOrder = ::java::nio::ByteOrder;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _NativeObject_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(NativeObject, $assertionsDisabled)},
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(NativeObject, unsafe)},
	{"allocationAddress", "J", nullptr, $PROTECTED, $field(NativeObject, allocationAddress$)},
	{"address", "J", nullptr, $PRIVATE | $FINAL, $field(NativeObject, address$)},
	{"byteOrder", "Ljava/nio/ByteOrder;", nullptr, $PRIVATE | $STATIC, $staticField(NativeObject, byteOrder$)},
	{"pageSize", "I", nullptr, $PRIVATE | $STATIC, $staticField(NativeObject, pageSize$)},
	{}
};

$MethodInfo _NativeObject_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, 0, $method(NativeObject, init$, void, int64_t)},
	{"<init>", "(JJ)V", nullptr, 0, $method(NativeObject, init$, void, int64_t, int64_t)},
	{"<init>", "(IZ)V", nullptr, $PROTECTED, $method(NativeObject, init$, void, int32_t, bool)},
	{"address", "()J", nullptr, 0, $virtualMethod(NativeObject, address, int64_t)},
	{"addressSize", "()I", nullptr, $STATIC, $staticMethod(NativeObject, addressSize, int32_t)},
	{"allocationAddress", "()J", nullptr, 0, $virtualMethod(NativeObject, allocationAddress, int64_t)},
	{"byteOrder", "()Ljava/nio/ByteOrder;", nullptr, $STATIC, $staticMethod(NativeObject, byteOrder, $ByteOrder*)},
	{"getByte", "(I)B", nullptr, $FINAL, $method(NativeObject, getByte, int8_t, int32_t)},
	{"getChar", "(I)C", nullptr, $FINAL, $method(NativeObject, getChar, char16_t, int32_t)},
	{"getDouble", "(I)D", nullptr, $FINAL, $method(NativeObject, getDouble, double, int32_t)},
	{"getFloat", "(I)F", nullptr, $FINAL, $method(NativeObject, getFloat, float, int32_t)},
	{"getInt", "(I)I", nullptr, $FINAL, $method(NativeObject, getInt, int32_t, int32_t)},
	{"getLong", "(I)J", nullptr, $FINAL, $method(NativeObject, getLong, int64_t, int32_t)},
	{"getObject", "(I)Lsun/nio/ch/NativeObject;", nullptr, 0, $virtualMethod(NativeObject, getObject, NativeObject*, int32_t)},
	{"getShort", "(I)S", nullptr, $FINAL, $method(NativeObject, getShort, int16_t, int32_t)},
	{"pageSize", "()I", nullptr, $STATIC, $staticMethod(NativeObject, pageSize, int32_t)},
	{"putByte", "(IB)V", nullptr, $FINAL, $method(NativeObject, putByte, void, int32_t, int8_t)},
	{"putChar", "(IC)V", nullptr, $FINAL, $method(NativeObject, putChar, void, int32_t, char16_t)},
	{"putDouble", "(ID)V", nullptr, $FINAL, $method(NativeObject, putDouble, void, int32_t, double)},
	{"putFloat", "(IF)V", nullptr, $FINAL, $method(NativeObject, putFloat, void, int32_t, float)},
	{"putInt", "(II)V", nullptr, $FINAL, $method(NativeObject, putInt, void, int32_t, int32_t)},
	{"putLong", "(IJ)V", nullptr, $FINAL, $method(NativeObject, putLong, void, int32_t, int64_t)},
	{"putObject", "(ILsun/nio/ch/NativeObject;)V", nullptr, 0, $virtualMethod(NativeObject, putObject, void, int32_t, NativeObject*)},
	{"putShort", "(IS)V", nullptr, $FINAL, $method(NativeObject, putShort, void, int32_t, int16_t)},
	{"subObject", "(I)Lsun/nio/ch/NativeObject;", nullptr, 0, $virtualMethod(NativeObject, subObject, NativeObject*, int32_t)},
	{}
};

$ClassInfo _NativeObject_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.NativeObject",
	"java.lang.Object",
	nullptr,
	_NativeObject_FieldInfo_,
	_NativeObject_MethodInfo_
};

$Object* allocate$NativeObject($Class* clazz) {
	return $of($alloc(NativeObject));
}

bool NativeObject::$assertionsDisabled = false;
$Unsafe* NativeObject::unsafe = nullptr;
$ByteOrder* NativeObject::byteOrder$ = nullptr;
int32_t NativeObject::pageSize$ = 0;

void NativeObject::init$(int64_t address) {
	this->allocationAddress$ = address;
	this->address$ = address;
}

void NativeObject::init$(int64_t address, int64_t offset) {
	this->allocationAddress$ = address;
	this->address$ = address + offset;
}

void NativeObject::init$(int32_t size, bool pageAligned) {
	if (!pageAligned) {
		this->allocationAddress$ = $nc(NativeObject::unsafe)->allocateMemory(size);
		this->address$ = this->allocationAddress$;
	} else {
		int32_t ps = pageSize();
		int64_t a = $nc(NativeObject::unsafe)->allocateMemory(size + ps);
		this->allocationAddress$ = a;
		this->address$ = a + ps - ((int64_t)(a & (uint64_t)(int64_t)(ps - 1)));
	}
}

int64_t NativeObject::address() {
	return this->address$;
}

int64_t NativeObject::allocationAddress() {
	return this->allocationAddress$;
}

NativeObject* NativeObject::subObject(int32_t offset) {
	return $new(NativeObject, offset + this->address$);
}

NativeObject* NativeObject::getObject(int32_t offset) {
	int64_t newAddress = 0;
	switch (addressSize()) {
	case 8:
		{
			newAddress = $nc(NativeObject::unsafe)->getLong(offset + this->address$);
			break;
		}
	case 4:
		{
			newAddress = (int32_t)($nc(NativeObject::unsafe)->getInt(offset + this->address$) & (uint32_t)-1);
			break;
		}
	default:
		{
			$throwNew($InternalError, "Address size not supported"_s);
		}
	}
	return $new(NativeObject, newAddress);
}

void NativeObject::putObject(int32_t offset, NativeObject* ob) {
	switch (addressSize()) {
	case 8:
		{
			putLong(offset, $nc(ob)->address$);
			break;
		}
	case 4:
		{
			putInt(offset, (int32_t)((int64_t)($nc(ob)->address$ & (uint64_t)(int64_t)-1)));
			break;
		}
	default:
		{
			$throwNew($InternalError, "Address size not supported"_s);
		}
	}
}

int8_t NativeObject::getByte(int32_t offset) {
	return $nc(NativeObject::unsafe)->getByte(offset + this->address$);
}

void NativeObject::putByte(int32_t offset, int8_t value) {
	$nc(NativeObject::unsafe)->putByte(offset + this->address$, value);
}

int16_t NativeObject::getShort(int32_t offset) {
	return $nc(NativeObject::unsafe)->getShort(offset + this->address$);
}

void NativeObject::putShort(int32_t offset, int16_t value) {
	$nc(NativeObject::unsafe)->putShort(offset + this->address$, value);
}

char16_t NativeObject::getChar(int32_t offset) {
	return $nc(NativeObject::unsafe)->getChar(offset + this->address$);
}

void NativeObject::putChar(int32_t offset, char16_t value) {
	$nc(NativeObject::unsafe)->putChar(offset + this->address$, value);
}

int32_t NativeObject::getInt(int32_t offset) {
	return $nc(NativeObject::unsafe)->getInt(offset + this->address$);
}

void NativeObject::putInt(int32_t offset, int32_t value) {
	$nc(NativeObject::unsafe)->putInt(offset + this->address$, value);
}

int64_t NativeObject::getLong(int32_t offset) {
	return $nc(NativeObject::unsafe)->getLong(offset + this->address$);
}

void NativeObject::putLong(int32_t offset, int64_t value) {
	$nc(NativeObject::unsafe)->putLong(offset + this->address$, value);
}

float NativeObject::getFloat(int32_t offset) {
	return $nc(NativeObject::unsafe)->getFloat(offset + this->address$);
}

void NativeObject::putFloat(int32_t offset, float value) {
	$nc(NativeObject::unsafe)->putFloat(offset + this->address$, value);
}

double NativeObject::getDouble(int32_t offset) {
	return $nc(NativeObject::unsafe)->getDouble(offset + this->address$);
}

void NativeObject::putDouble(int32_t offset, double value) {
	$nc(NativeObject::unsafe)->putDouble(offset + this->address$, value);
}

int32_t NativeObject::addressSize() {
	$init(NativeObject);
	return $nc(NativeObject::unsafe)->addressSize();
}

$ByteOrder* NativeObject::byteOrder() {
	$init(NativeObject);
	if (NativeObject::byteOrder$ != nullptr) {
		return NativeObject::byteOrder$;
	}
	int64_t a = $nc(NativeObject::unsafe)->allocateMemory(8);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(NativeObject::unsafe)->putLong(a, 0x0102030405060708);
			int8_t b = $nc(NativeObject::unsafe)->getByte(a);
			switch (b) {
			case 1:
				{
					$init($ByteOrder);
					$assignStatic(NativeObject::byteOrder$, $ByteOrder::BIG_ENDIAN);
					break;
				}
			case 8:
				{
					$init($ByteOrder);
					$assignStatic(NativeObject::byteOrder$, $ByteOrder::LITTLE_ENDIAN);
					break;
				}
			default:
				{
					if (!NativeObject::$assertionsDisabled) {
						$throwNew($AssertionError);
					}
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(NativeObject::unsafe)->freeMemory(a);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return NativeObject::byteOrder$;
}

int32_t NativeObject::pageSize() {
	$init(NativeObject);
	int32_t value = NativeObject::pageSize$;
	if (value == -1) {
		NativeObject::pageSize$ = (value = $nc(NativeObject::unsafe)->pageSize());
	}
	return value;
}

void clinit$NativeObject($Class* class$) {
	NativeObject::$assertionsDisabled = !NativeObject::class$->desiredAssertionStatus();
	$assignStatic(NativeObject::unsafe, $Unsafe::getUnsafe());
	$assignStatic(NativeObject::byteOrder$, nullptr);
	NativeObject::pageSize$ = -1;
}

NativeObject::NativeObject() {
}

$Class* NativeObject::load$($String* name, bool initialize) {
	$loadClass(NativeObject, name, initialize, &_NativeObject_ClassInfo_, clinit$NativeObject, allocate$NativeObject);
	return class$;
}

$Class* NativeObject::class$ = nullptr;

		} // ch
	} // nio
} // sun