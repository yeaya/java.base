#include <java/nio/DirectByteBuffer.h>

#include <java/io/FileDescriptor.h>
#include <java/lang/AssertionError.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Math.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/Runnable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/ref/Reference.h>
#include <java/nio/Bits.h>
#include <java/nio/Buffer.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteBufferAsCharBufferB.h>
#include <java/nio/ByteBufferAsCharBufferL.h>
#include <java/nio/ByteBufferAsDoubleBufferB.h>
#include <java/nio/ByteBufferAsDoubleBufferL.h>
#include <java/nio/ByteBufferAsFloatBufferB.h>
#include <java/nio/ByteBufferAsFloatBufferL.h>
#include <java/nio/ByteBufferAsIntBufferB.h>
#include <java/nio/ByteBufferAsIntBufferL.h>
#include <java/nio/ByteBufferAsLongBufferB.h>
#include <java/nio/ByteBufferAsLongBufferL.h>
#include <java/nio/ByteBufferAsShortBufferB.h>
#include <java/nio/ByteBufferAsShortBufferL.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/DirectByteBuffer$Deallocator.h>
#include <java/nio/DirectByteBufferR.h>
#include <java/nio/DirectCharBufferS.h>
#include <java/nio/DirectCharBufferU.h>
#include <java/nio/DirectDoubleBufferS.h>
#include <java/nio/DirectDoubleBufferU.h>
#include <java/nio/DirectFloatBufferS.h>
#include <java/nio/DirectFloatBufferU.h>
#include <java/nio/DirectIntBufferS.h>
#include <java/nio/DirectIntBufferU.h>
#include <java/nio/DirectLongBufferS.h>
#include <java/nio/DirectLongBufferU.h>
#include <java/nio/DirectShortBufferS.h>
#include <java/nio/DirectShortBufferU.h>
#include <java/nio/DoubleBuffer.h>
#include <java/nio/FloatBuffer.h>
#include <java/nio/IntBuffer.h>
#include <java/nio/LongBuffer.h>
#include <java/nio/MappedByteBuffer.h>
#include <java/nio/ShortBuffer.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope$ScopedAccessError.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope.h>
#include <jdk/internal/misc/ScopedMemoryAccess.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/misc/VM.h>
#include <jdk/internal/ref/Cleaner.h>
#include <sun/nio/ch/DirectBuffer.h>
#include <jcpp.h>

#undef ARRAY_BASE_OFFSET
#undef SCOPED_MEMORY_ACCESS
#undef UNALIGNED
#undef UNSAFE

using $FileDescriptor = ::java::io::FileDescriptor;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $Runnable = ::java::lang::Runnable;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Reference = ::java::lang::ref::Reference;
using $Bits = ::java::nio::Bits;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteBufferAsCharBufferB = ::java::nio::ByteBufferAsCharBufferB;
using $ByteBufferAsCharBufferL = ::java::nio::ByteBufferAsCharBufferL;
using $ByteBufferAsDoubleBufferB = ::java::nio::ByteBufferAsDoubleBufferB;
using $ByteBufferAsDoubleBufferL = ::java::nio::ByteBufferAsDoubleBufferL;
using $ByteBufferAsFloatBufferB = ::java::nio::ByteBufferAsFloatBufferB;
using $ByteBufferAsFloatBufferL = ::java::nio::ByteBufferAsFloatBufferL;
using $ByteBufferAsIntBufferB = ::java::nio::ByteBufferAsIntBufferB;
using $ByteBufferAsIntBufferL = ::java::nio::ByteBufferAsIntBufferL;
using $ByteBufferAsLongBufferB = ::java::nio::ByteBufferAsLongBufferB;
using $ByteBufferAsLongBufferL = ::java::nio::ByteBufferAsLongBufferL;
using $ByteBufferAsShortBufferB = ::java::nio::ByteBufferAsShortBufferB;
using $ByteBufferAsShortBufferL = ::java::nio::ByteBufferAsShortBufferL;
using $CharBuffer = ::java::nio::CharBuffer;
using $DirectByteBuffer$Deallocator = ::java::nio::DirectByteBuffer$Deallocator;
using $DirectByteBufferR = ::java::nio::DirectByteBufferR;
using $DirectCharBufferS = ::java::nio::DirectCharBufferS;
using $DirectCharBufferU = ::java::nio::DirectCharBufferU;
using $DirectDoubleBufferS = ::java::nio::DirectDoubleBufferS;
using $DirectDoubleBufferU = ::java::nio::DirectDoubleBufferU;
using $DirectFloatBufferS = ::java::nio::DirectFloatBufferS;
using $DirectFloatBufferU = ::java::nio::DirectFloatBufferU;
using $DirectIntBufferS = ::java::nio::DirectIntBufferS;
using $DirectIntBufferU = ::java::nio::DirectIntBufferU;
using $DirectLongBufferS = ::java::nio::DirectLongBufferS;
using $DirectLongBufferU = ::java::nio::DirectLongBufferU;
using $DirectShortBufferS = ::java::nio::DirectShortBufferS;
using $DirectShortBufferU = ::java::nio::DirectShortBufferU;
using $DoubleBuffer = ::java::nio::DoubleBuffer;
using $FloatBuffer = ::java::nio::FloatBuffer;
using $IntBuffer = ::java::nio::IntBuffer;
using $LongBuffer = ::java::nio::LongBuffer;
using $MappedByteBuffer = ::java::nio::MappedByteBuffer;
using $ShortBuffer = ::java::nio::ShortBuffer;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $ScopedMemoryAccess = ::jdk::internal::misc::ScopedMemoryAccess;
using $ScopedMemoryAccess$Scope = ::jdk::internal::misc::ScopedMemoryAccess$Scope;
using $ScopedMemoryAccess$Scope$ScopedAccessError = ::jdk::internal::misc::ScopedMemoryAccess$Scope$ScopedAccessError;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $VM = ::jdk::internal::misc::VM;
using $Cleaner = ::jdk::internal::ref::Cleaner;
using $DirectBuffer = ::sun::nio::ch::DirectBuffer;

namespace java {
	namespace nio {

$FieldInfo _DirectByteBuffer_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectByteBuffer, $assertionsDisabled)},
	{"ARRAY_BASE_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DirectByteBuffer, ARRAY_BASE_OFFSET)},
	{"UNALIGNED", "Z", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DirectByteBuffer, UNALIGNED)},
	{"att", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(DirectByteBuffer, att)},
	{"cleaner", "Ljdk/internal/ref/Cleaner;", nullptr, $PRIVATE | $FINAL, $field(DirectByteBuffer, cleaner$)},
	{}
};

$MethodInfo _DirectByteBuffer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, 0, $method(DirectByteBuffer, init$, void, int32_t)},
	{"<init>", "(JILjava/lang/Object;Ljdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(DirectByteBuffer, init$, void, int64_t, int32_t, Object$*, $MemorySegmentProxy*)},
	{"<init>", "(JILjava/lang/Object;Ljava/io/FileDescriptor;ZLjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(DirectByteBuffer, init$, void, int64_t, int32_t, Object$*, $FileDescriptor*, bool, $MemorySegmentProxy*)},
	{"<init>", "(JI)V", nullptr, $PRIVATE, $method(DirectByteBuffer, init$, void, int64_t, int32_t)},
	{"<init>", "(IJLjava/io/FileDescriptor;Ljava/lang/Runnable;ZLjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, $PROTECTED, $method(DirectByteBuffer, init$, void, int32_t, int64_t, $FileDescriptor*, $Runnable*, bool, $MemorySegmentProxy*)},
	{"<init>", "(Lsun/nio/ch/DirectBuffer;IIIIILjava/io/FileDescriptor;ZLjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(DirectByteBuffer, init$, void, $DirectBuffer*, int32_t, int32_t, int32_t, int32_t, int32_t, $FileDescriptor*, bool, $MemorySegmentProxy*)},
	{"address", "()J", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, address, int64_t)},
	{"asCharBuffer", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, asCharBuffer, $CharBuffer*)},
	{"asDoubleBuffer", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, asDoubleBuffer, $DoubleBuffer*)},
	{"asFloatBuffer", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, asFloatBuffer, $FloatBuffer*)},
	{"asIntBuffer", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, asIntBuffer, $IntBuffer*)},
	{"asLongBuffer", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, asLongBuffer, $LongBuffer*)},
	{"asReadOnlyBuffer", "()Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, asReadOnlyBuffer, $ByteBuffer*)},
	{"asShortBuffer", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, asShortBuffer, $ShortBuffer*)},
	{"attachment", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, attachment, $Object*)},
	{"base", "()Ljava/lang/Object;", nullptr, 0, $virtualMethod(DirectByteBuffer, base, $Object*)},
	{"cleaner", "()Ljdk/internal/ref/Cleaner;", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, cleaner, $Cleaner*)},
	{"compact", "()Ljava/nio/MappedByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, compact, $MappedByteBuffer*)},
	{"duplicate", "()Ljava/nio/MappedByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, duplicate, $MappedByteBuffer*)},
	{"get", "()B", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, get, int8_t)},
	{"get", "(I)B", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, get, int8_t, int32_t)},
	{"getChar", "(J)C", nullptr, $PRIVATE, $method(DirectByteBuffer, getChar, char16_t, int64_t)},
	{"getChar", "()C", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, getChar, char16_t)},
	{"getChar", "(I)C", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, getChar, char16_t, int32_t)},
	{"getDouble", "(J)D", nullptr, $PRIVATE, $method(DirectByteBuffer, getDouble, double, int64_t)},
	{"getDouble", "()D", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, getDouble, double)},
	{"getDouble", "(I)D", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, getDouble, double, int32_t)},
	{"getFloat", "(J)F", nullptr, $PRIVATE, $method(DirectByteBuffer, getFloat, float, int64_t)},
	{"getFloat", "()F", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, getFloat, float)},
	{"getFloat", "(I)F", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, getFloat, float, int32_t)},
	{"getInt", "(J)I", nullptr, $PRIVATE, $method(DirectByteBuffer, getInt, int32_t, int64_t)},
	{"getInt", "()I", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, getInt, int32_t)},
	{"getInt", "(I)I", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, getInt, int32_t, int32_t)},
	{"getLong", "(J)J", nullptr, $PRIVATE, $method(DirectByteBuffer, getLong, int64_t, int64_t)},
	{"getLong", "()J", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, getLong, int64_t)},
	{"getLong", "(I)J", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, getLong, int64_t, int32_t)},
	{"getShort", "(J)S", nullptr, $PRIVATE, $method(DirectByteBuffer, getShort, int16_t, int64_t)},
	{"getShort", "()S", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, getShort, int16_t)},
	{"getShort", "(I)S", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, getShort, int16_t, int32_t)},
	{"isDirect", "()Z", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, isDirect, bool)},
	{"isReadOnly", "()Z", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, isReadOnly, bool)},
	{"ix", "(I)J", nullptr, $PRIVATE, $method(DirectByteBuffer, ix, int64_t, int32_t)},
	{"put", "(B)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, put, $ByteBuffer*, int8_t)},
	{"put", "(IB)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, put, $ByteBuffer*, int32_t, int8_t)},
	{"putChar", "(JC)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(DirectByteBuffer, putChar, $ByteBuffer*, int64_t, char16_t)},
	{"putChar", "(C)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, putChar, $ByteBuffer*, char16_t)},
	{"putChar", "(IC)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, putChar, $ByteBuffer*, int32_t, char16_t)},
	{"putDouble", "(JD)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(DirectByteBuffer, putDouble, $ByteBuffer*, int64_t, double)},
	{"putDouble", "(D)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, putDouble, $ByteBuffer*, double)},
	{"putDouble", "(ID)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, putDouble, $ByteBuffer*, int32_t, double)},
	{"putFloat", "(JF)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(DirectByteBuffer, putFloat, $ByteBuffer*, int64_t, float)},
	{"putFloat", "(F)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, putFloat, $ByteBuffer*, float)},
	{"putFloat", "(IF)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, putFloat, $ByteBuffer*, int32_t, float)},
	{"putInt", "(JI)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(DirectByteBuffer, putInt, $ByteBuffer*, int64_t, int32_t)},
	{"putInt", "(I)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, putInt, $ByteBuffer*, int32_t)},
	{"putInt", "(II)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, putInt, $ByteBuffer*, int32_t, int32_t)},
	{"putLong", "(JJ)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(DirectByteBuffer, putLong, $ByteBuffer*, int64_t, int64_t)},
	{"putLong", "(J)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, putLong, $ByteBuffer*, int64_t)},
	{"putLong", "(IJ)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, putLong, $ByteBuffer*, int32_t, int64_t)},
	{"putShort", "(JS)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(DirectByteBuffer, putShort, $ByteBuffer*, int64_t, int16_t)},
	{"putShort", "(S)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, putShort, $ByteBuffer*, int16_t)},
	{"putShort", "(IS)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, putShort, $ByteBuffer*, int32_t, int16_t)},
	{"slice", "()Ljava/nio/MappedByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, slice, $MappedByteBuffer*)},
	{"slice", "(II)Ljava/nio/MappedByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer, slice, $MappedByteBuffer*, int32_t, int32_t)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DirectByteBuffer_InnerClassesInfo_[] = {
	{"java.nio.DirectByteBuffer$Deallocator", "java.nio.DirectByteBuffer", "Deallocator", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DirectByteBuffer_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.DirectByteBuffer",
	"java.nio.MappedByteBuffer",
	"sun.nio.ch.DirectBuffer",
	_DirectByteBuffer_FieldInfo_,
	_DirectByteBuffer_MethodInfo_,
	nullptr,
	nullptr,
	_DirectByteBuffer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.nio.DirectByteBuffer$Deallocator"
};

$Object* allocate$DirectByteBuffer($Class* clazz) {
	return $of($alloc(DirectByteBuffer));
}

$String* DirectByteBuffer::toString() {
	 return this->$MappedByteBuffer::toString();
}

int32_t DirectByteBuffer::hashCode() {
	 return this->$MappedByteBuffer::hashCode();
}

bool DirectByteBuffer::equals(Object$* ob) {
	 return this->$MappedByteBuffer::equals(ob);
}

$Object* DirectByteBuffer::clone() {
	 return this->$MappedByteBuffer::clone();
}

void DirectByteBuffer::finalize() {
	this->$MappedByteBuffer::finalize();
}

bool DirectByteBuffer::$assertionsDisabled = false;
int64_t DirectByteBuffer::ARRAY_BASE_OFFSET = 0;
bool DirectByteBuffer::UNALIGNED = false;

$Object* DirectByteBuffer::attachment() {
	return $of(this->att);
}

$Cleaner* DirectByteBuffer::cleaner() {
	return this->cleaner$;
}

void DirectByteBuffer::init$(int32_t cap) {
	$MappedByteBuffer::init$(-1, 0, cap, cap, nullptr);
	bool pa = $VM::isDirectMemoryPageAligned();
	int32_t ps = $Bits::pageSize();
	int64_t size = $Math::max((int64_t)1, (int64_t)cap + (pa ? ps : 0));
	$Bits::reserveMemory(size, cap);
	int64_t base = 0;
	try {
		$init($Buffer);
		base = $nc($Buffer::UNSAFE)->allocateMemory(size);
	} catch ($OutOfMemoryError& x) {
		$Bits::unreserveMemory(size, cap);
		$throw(x);
	}
	$init($Buffer);
	$nc($Buffer::UNSAFE)->setMemory(base, size, (int8_t)0);
	if (pa && ($mod(base, ps) != 0)) {
		this->$Buffer::address = base + ps - ((int64_t)(base & (uint64_t)(int64_t)(ps - 1)));
	} else {
		this->$Buffer::address = base;
	}
	$set(this, cleaner$, $Cleaner::create(this, $$new($DirectByteBuffer$Deallocator, base, size, cap)));
	$set(this, att, nullptr);
}

void DirectByteBuffer::init$(int64_t addr, int32_t cap, Object$* ob, $MemorySegmentProxy* segment) {
	$MappedByteBuffer::init$(-1, 0, cap, cap, segment);
	this->$Buffer::address = addr;
	$set(this, cleaner$, nullptr);
	$set(this, att, ob);
}

void DirectByteBuffer::init$(int64_t addr, int32_t cap, Object$* ob, $FileDescriptor* fd, bool isSync, $MemorySegmentProxy* segment) {
	$MappedByteBuffer::init$(-1, 0, cap, cap, fd, isSync, segment);
	this->$Buffer::address = addr;
	$set(this, cleaner$, nullptr);
	$set(this, att, ob);
}

void DirectByteBuffer::init$(int64_t addr, int32_t cap) {
	$MappedByteBuffer::init$(-1, 0, cap, cap, nullptr);
	this->$Buffer::address = addr;
	$set(this, cleaner$, nullptr);
	$set(this, att, nullptr);
}

void DirectByteBuffer::init$(int32_t cap, int64_t addr, $FileDescriptor* fd, $Runnable* unmapper, bool isSync, $MemorySegmentProxy* segment) {
	$MappedByteBuffer::init$(-1, 0, cap, cap, fd, isSync, segment);
	this->$Buffer::address = addr;
	$set(this, cleaner$, $Cleaner::create(this, unmapper));
	$set(this, att, nullptr);
}

void DirectByteBuffer::init$($DirectBuffer* db, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, $FileDescriptor* fd, bool isSync, $MemorySegmentProxy* segment) {
	$MappedByteBuffer::init$(mark, pos, lim, cap, fd, isSync, segment);
	this->$Buffer::address = $nc(($cast($Buffer, db)))->address + off;
	$set(this, cleaner$, nullptr);
	$var($Object, attachment, $nc(db)->attachment());
	$set(this, att, attachment == nullptr ? $of(db) : attachment);
}

$Object* DirectByteBuffer::base() {
	return $of(nullptr);
}

$MappedByteBuffer* DirectByteBuffer::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int32_t off = (pos << 0);
	if (!DirectByteBuffer::$assertionsDisabled && !(off >= 0)) {
		$throwNew($AssertionError);
	}
	int32_t var$0 = rem;
	int32_t var$1 = rem;
	int32_t var$2 = off;
	$var($FileDescriptor, var$3, fileDescriptor());
	return $new(DirectByteBuffer, this, -1, 0, var$0, var$1, var$2, var$3, isSync(), this->segment);
}

$MappedByteBuffer* DirectByteBuffer::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	int32_t var$0 = length;
	int32_t var$1 = length;
	int32_t var$2 = index << 0;
	$var($FileDescriptor, var$3, fileDescriptor());
	return $new(DirectByteBuffer, this, -1, 0, var$0, var$1, var$2, var$3, isSync(), this->segment);
}

$MappedByteBuffer* DirectByteBuffer::duplicate() {
	int32_t var$0 = this->markValue();
	int32_t var$1 = this->position();
	int32_t var$2 = this->limit();
	int32_t var$3 = this->capacity();
	$var($FileDescriptor, var$4, fileDescriptor());
	return $new(DirectByteBuffer, this, var$0, var$1, var$2, var$3, 0, var$4, isSync(), this->segment);
}

$ByteBuffer* DirectByteBuffer::asReadOnlyBuffer() {
	int32_t var$0 = this->markValue();
	int32_t var$1 = this->position();
	int32_t var$2 = this->limit();
	int32_t var$3 = this->capacity();
	$var($FileDescriptor, var$4, fileDescriptor());
	return $new($DirectByteBufferR, this, var$0, var$1, var$2, var$3, 0, var$4, isSync(), this->segment);
}

int64_t DirectByteBuffer::address() {
	$var($ScopedMemoryAccess$Scope, scope, this->scope());
	if (scope != nullptr) {
		if (scope->ownerThread() == nullptr) {
			$throwNew($UnsupportedOperationException, "ByteBuffer derived from shared segments not supported"_s);
		}
		try {
			scope->checkValidState();
		} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& e) {
			$throwNew($IllegalStateException, "This segment is already closed"_s);
		}
	}
	return this->$Buffer::address;
}

int64_t DirectByteBuffer::ix(int32_t i) {
	return this->$Buffer::address + ((int64_t)i << 0);
}

int8_t DirectByteBuffer::get() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		int8_t var$2 = 0;
		bool return$1 = false;
		try {
			$init($MappedByteBuffer);
			$var($ScopedMemoryAccess$Scope, var$3, scope());
			var$2 = ($nc($MappedByteBuffer::SCOPED_MEMORY_ACCESS)->getByte(var$3, nullptr, ix(nextGetIndex())));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} $finally: {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int8_t DirectByteBuffer::get(int32_t i) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		int8_t var$2 = 0;
		bool return$1 = false;
		try {
			$init($MappedByteBuffer);
			$var($ScopedMemoryAccess$Scope, var$3, scope());
			var$2 = ($nc($MappedByteBuffer::SCOPED_MEMORY_ACCESS)->getByte(var$3, nullptr, ix(checkIndex(i))));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} $finally: {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$ByteBuffer* DirectByteBuffer::put(int8_t x) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($MappedByteBuffer);
			$var($ScopedMemoryAccess$Scope, var$1, scope());
			$nc($MappedByteBuffer::SCOPED_MEMORY_ACCESS)->putByte(var$1, nullptr, ix(nextPutIndex()), (x));
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return this;
}

$ByteBuffer* DirectByteBuffer::put(int32_t i, int8_t x) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($MappedByteBuffer);
			$var($ScopedMemoryAccess$Scope, var$1, scope());
			$nc($MappedByteBuffer::SCOPED_MEMORY_ACCESS)->putByte(var$1, nullptr, ix(checkIndex(i)), (x));
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return this;
}

$MappedByteBuffer* DirectByteBuffer::compact() {
	$useLocalCurrentObjectStackCache();
	int32_t pos = position();
	int32_t lim = limit();
	if (!DirectByteBuffer::$assertionsDisabled && !(pos <= lim)) {
		$throwNew($AssertionError);
	}
	int32_t rem = (pos <= lim ? lim - pos : 0);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($MappedByteBuffer);
			$var($ScopedMemoryAccess$Scope, var$1, scope());
			int64_t var$2 = ix(pos);
			$nc($MappedByteBuffer::SCOPED_MEMORY_ACCESS)->copyMemory(var$1, nullptr, nullptr, var$2, nullptr, ix(0), (int64_t)rem << 0);
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	position(rem);
	limit(capacity());
	discardMark();
	return this;
}

bool DirectByteBuffer::isDirect() {
	return true;
}

bool DirectByteBuffer::isReadOnly() {
	return false;
}

char16_t DirectByteBuffer::getChar(int64_t a) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		char16_t var$2 = 0;
		bool return$1 = false;
		try {
			$init($MappedByteBuffer);
			char16_t x = $nc($MappedByteBuffer::SCOPED_MEMORY_ACCESS)->getCharUnaligned($(scope()), nullptr, a, this->bigEndian);
			var$2 = (x);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

char16_t DirectByteBuffer::getChar() {
	{
		$var($Throwable, var$0, nullptr);
		char16_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = getChar(ix(nextGetIndex((1 << 1))));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

char16_t DirectByteBuffer::getChar(int32_t i) {
	{
		$var($Throwable, var$0, nullptr);
		char16_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = getChar(ix(checkIndex(i, (1 << 1))));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$ByteBuffer* DirectByteBuffer::putChar(int64_t a, char16_t x) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			char16_t y = (x);
			$init($MappedByteBuffer);
			$nc($MappedByteBuffer::SCOPED_MEMORY_ACCESS)->putCharUnaligned($(scope()), nullptr, a, y, this->bigEndian);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return this;
}

$ByteBuffer* DirectByteBuffer::putChar(char16_t x) {
	putChar(ix(nextPutIndex((1 << 1))), x);
	return this;
}

$ByteBuffer* DirectByteBuffer::putChar(int32_t i, char16_t x) {
	putChar(ix(checkIndex(i, (1 << 1))), x);
	return this;
}

$CharBuffer* DirectByteBuffer::asCharBuffer() {
	int32_t off = this->position();
	int32_t lim = this->limit();
	if (!DirectByteBuffer::$assertionsDisabled && !(off <= lim)) {
		$throwNew($AssertionError);
	}
	int32_t rem = (off <= lim ? lim - off : 0);
	int32_t size = rem >> 1;
	if (!DirectByteBuffer::UNALIGNED && ($mod((this->$Buffer::address + off), (1 << 1)) != 0)) {
		return (this->bigEndian ? static_cast<$CharBuffer*>(($new($ByteBufferAsCharBufferB, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))) : static_cast<$CharBuffer*>(($new($ByteBufferAsCharBufferL, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))));
	} else {
		return (this->nativeByteOrder ? static_cast<$CharBuffer*>(($new($DirectCharBufferU, this, -1, 0, size, size, off, this->segment))) : static_cast<$CharBuffer*>(($new($DirectCharBufferS, this, -1, 0, size, size, off, this->segment))));
	}
}

int16_t DirectByteBuffer::getShort(int64_t a) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		int16_t var$2 = 0;
		bool return$1 = false;
		try {
			$init($MappedByteBuffer);
			int16_t x = $nc($MappedByteBuffer::SCOPED_MEMORY_ACCESS)->getShortUnaligned($(scope()), nullptr, a, this->bigEndian);
			var$2 = (x);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int16_t DirectByteBuffer::getShort() {
	{
		$var($Throwable, var$0, nullptr);
		int16_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = getShort(ix(nextGetIndex((1 << 1))));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int16_t DirectByteBuffer::getShort(int32_t i) {
	{
		$var($Throwable, var$0, nullptr);
		int16_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = getShort(ix(checkIndex(i, (1 << 1))));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$ByteBuffer* DirectByteBuffer::putShort(int64_t a, int16_t x) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int16_t y = (x);
			$init($MappedByteBuffer);
			$nc($MappedByteBuffer::SCOPED_MEMORY_ACCESS)->putShortUnaligned($(scope()), nullptr, a, y, this->bigEndian);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return this;
}

$ByteBuffer* DirectByteBuffer::putShort(int16_t x) {
	putShort(ix(nextPutIndex((1 << 1))), x);
	return this;
}

$ByteBuffer* DirectByteBuffer::putShort(int32_t i, int16_t x) {
	putShort(ix(checkIndex(i, (1 << 1))), x);
	return this;
}

$ShortBuffer* DirectByteBuffer::asShortBuffer() {
	int32_t off = this->position();
	int32_t lim = this->limit();
	if (!DirectByteBuffer::$assertionsDisabled && !(off <= lim)) {
		$throwNew($AssertionError);
	}
	int32_t rem = (off <= lim ? lim - off : 0);
	int32_t size = rem >> 1;
	if (!DirectByteBuffer::UNALIGNED && ($mod((this->$Buffer::address + off), (1 << 1)) != 0)) {
		return (this->bigEndian ? static_cast<$ShortBuffer*>(($new($ByteBufferAsShortBufferB, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))) : static_cast<$ShortBuffer*>(($new($ByteBufferAsShortBufferL, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))));
	} else {
		return (this->nativeByteOrder ? static_cast<$ShortBuffer*>(($new($DirectShortBufferU, this, -1, 0, size, size, off, this->segment))) : static_cast<$ShortBuffer*>(($new($DirectShortBufferS, this, -1, 0, size, size, off, this->segment))));
	}
}

int32_t DirectByteBuffer::getInt(int64_t a) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			$init($MappedByteBuffer);
			int32_t x = $nc($MappedByteBuffer::SCOPED_MEMORY_ACCESS)->getIntUnaligned($(scope()), nullptr, a, this->bigEndian);
			var$2 = (x);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t DirectByteBuffer::getInt() {
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = getInt(ix(nextGetIndex((1 << 2))));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t DirectByteBuffer::getInt(int32_t i) {
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = getInt(ix(checkIndex(i, (1 << 2))));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$ByteBuffer* DirectByteBuffer::putInt(int64_t a, int32_t x) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int32_t y = (x);
			$init($MappedByteBuffer);
			$nc($MappedByteBuffer::SCOPED_MEMORY_ACCESS)->putIntUnaligned($(scope()), nullptr, a, y, this->bigEndian);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return this;
}

$ByteBuffer* DirectByteBuffer::putInt(int32_t x) {
	putInt(ix(nextPutIndex((1 << 2))), x);
	return this;
}

$ByteBuffer* DirectByteBuffer::putInt(int32_t i, int32_t x) {
	putInt(ix(checkIndex(i, (1 << 2))), x);
	return this;
}

$IntBuffer* DirectByteBuffer::asIntBuffer() {
	int32_t off = this->position();
	int32_t lim = this->limit();
	if (!DirectByteBuffer::$assertionsDisabled && !(off <= lim)) {
		$throwNew($AssertionError);
	}
	int32_t rem = (off <= lim ? lim - off : 0);
	int32_t size = rem >> 2;
	if (!DirectByteBuffer::UNALIGNED && ($mod((this->$Buffer::address + off), (1 << 2)) != 0)) {
		return (this->bigEndian ? static_cast<$IntBuffer*>(($new($ByteBufferAsIntBufferB, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))) : static_cast<$IntBuffer*>(($new($ByteBufferAsIntBufferL, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))));
	} else {
		return (this->nativeByteOrder ? static_cast<$IntBuffer*>(($new($DirectIntBufferU, this, -1, 0, size, size, off, this->segment))) : static_cast<$IntBuffer*>(($new($DirectIntBufferS, this, -1, 0, size, size, off, this->segment))));
	}
}

int64_t DirectByteBuffer::getLong(int64_t a) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			$init($MappedByteBuffer);
			int64_t x = $nc($MappedByteBuffer::SCOPED_MEMORY_ACCESS)->getLongUnaligned($(scope()), nullptr, a, this->bigEndian);
			var$2 = (x);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t DirectByteBuffer::getLong() {
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = getLong(ix(nextGetIndex((1 << 3))));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t DirectByteBuffer::getLong(int32_t i) {
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = getLong(ix(checkIndex(i, (1 << 3))));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$ByteBuffer* DirectByteBuffer::putLong(int64_t a, int64_t x) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t y = (x);
			$init($MappedByteBuffer);
			$nc($MappedByteBuffer::SCOPED_MEMORY_ACCESS)->putLongUnaligned($(scope()), nullptr, a, y, this->bigEndian);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return this;
}

$ByteBuffer* DirectByteBuffer::putLong(int64_t x) {
	putLong(ix(nextPutIndex((1 << 3))), x);
	return this;
}

$ByteBuffer* DirectByteBuffer::putLong(int32_t i, int64_t x) {
	putLong(ix(checkIndex(i, (1 << 3))), x);
	return this;
}

$LongBuffer* DirectByteBuffer::asLongBuffer() {
	int32_t off = this->position();
	int32_t lim = this->limit();
	if (!DirectByteBuffer::$assertionsDisabled && !(off <= lim)) {
		$throwNew($AssertionError);
	}
	int32_t rem = (off <= lim ? lim - off : 0);
	int32_t size = rem >> 3;
	if (!DirectByteBuffer::UNALIGNED && ($mod((this->$Buffer::address + off), (1 << 3)) != 0)) {
		return (this->bigEndian ? static_cast<$LongBuffer*>(($new($ByteBufferAsLongBufferB, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))) : static_cast<$LongBuffer*>(($new($ByteBufferAsLongBufferL, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))));
	} else {
		return (this->nativeByteOrder ? static_cast<$LongBuffer*>(($new($DirectLongBufferU, this, -1, 0, size, size, off, this->segment))) : static_cast<$LongBuffer*>(($new($DirectLongBufferS, this, -1, 0, size, size, off, this->segment))));
	}
}

float DirectByteBuffer::getFloat(int64_t a) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		float var$2 = 0.0;
		bool return$1 = false;
		try {
			$init($MappedByteBuffer);
			int32_t x = $nc($MappedByteBuffer::SCOPED_MEMORY_ACCESS)->getIntUnaligned($(scope()), nullptr, a, this->bigEndian);
			var$2 = $Float::intBitsToFloat(x);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

float DirectByteBuffer::getFloat() {
	{
		$var($Throwable, var$0, nullptr);
		float var$2 = 0.0;
		bool return$1 = false;
		try {
			var$2 = getFloat(ix(nextGetIndex((1 << 2))));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

float DirectByteBuffer::getFloat(int32_t i) {
	{
		$var($Throwable, var$0, nullptr);
		float var$2 = 0.0;
		bool return$1 = false;
		try {
			var$2 = getFloat(ix(checkIndex(i, (1 << 2))));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$ByteBuffer* DirectByteBuffer::putFloat(int64_t a, float x) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int32_t y = $Float::floatToRawIntBits(x);
			$init($MappedByteBuffer);
			$nc($MappedByteBuffer::SCOPED_MEMORY_ACCESS)->putIntUnaligned($(scope()), nullptr, a, y, this->bigEndian);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return this;
}

$ByteBuffer* DirectByteBuffer::putFloat(float x) {
	putFloat(ix(nextPutIndex((1 << 2))), x);
	return this;
}

$ByteBuffer* DirectByteBuffer::putFloat(int32_t i, float x) {
	putFloat(ix(checkIndex(i, (1 << 2))), x);
	return this;
}

$FloatBuffer* DirectByteBuffer::asFloatBuffer() {
	int32_t off = this->position();
	int32_t lim = this->limit();
	if (!DirectByteBuffer::$assertionsDisabled && !(off <= lim)) {
		$throwNew($AssertionError);
	}
	int32_t rem = (off <= lim ? lim - off : 0);
	int32_t size = rem >> 2;
	if (!DirectByteBuffer::UNALIGNED && ($mod((this->$Buffer::address + off), (1 << 2)) != 0)) {
		return (this->bigEndian ? static_cast<$FloatBuffer*>(($new($ByteBufferAsFloatBufferB, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))) : static_cast<$FloatBuffer*>(($new($ByteBufferAsFloatBufferL, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))));
	} else {
		return (this->nativeByteOrder ? static_cast<$FloatBuffer*>(($new($DirectFloatBufferU, this, -1, 0, size, size, off, this->segment))) : static_cast<$FloatBuffer*>(($new($DirectFloatBufferS, this, -1, 0, size, size, off, this->segment))));
	}
}

double DirectByteBuffer::getDouble(int64_t a) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		double var$2 = 0.0;
		bool return$1 = false;
		try {
			$init($MappedByteBuffer);
			int64_t x = $nc($MappedByteBuffer::SCOPED_MEMORY_ACCESS)->getLongUnaligned($(scope()), nullptr, a, this->bigEndian);
			var$2 = $Double::longBitsToDouble(x);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

double DirectByteBuffer::getDouble() {
	{
		$var($Throwable, var$0, nullptr);
		double var$2 = 0.0;
		bool return$1 = false;
		try {
			var$2 = getDouble(ix(nextGetIndex((1 << 3))));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

double DirectByteBuffer::getDouble(int32_t i) {
	{
		$var($Throwable, var$0, nullptr);
		double var$2 = 0.0;
		bool return$1 = false;
		try {
			var$2 = getDouble(ix(checkIndex(i, (1 << 3))));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$ByteBuffer* DirectByteBuffer::putDouble(int64_t a, double x) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t y = $Double::doubleToRawLongBits(x);
			$init($MappedByteBuffer);
			$nc($MappedByteBuffer::SCOPED_MEMORY_ACCESS)->putLongUnaligned($(scope()), nullptr, a, y, this->bigEndian);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return this;
}

$ByteBuffer* DirectByteBuffer::putDouble(double x) {
	putDouble(ix(nextPutIndex((1 << 3))), x);
	return this;
}

$ByteBuffer* DirectByteBuffer::putDouble(int32_t i, double x) {
	putDouble(ix(checkIndex(i, (1 << 3))), x);
	return this;
}

$DoubleBuffer* DirectByteBuffer::asDoubleBuffer() {
	int32_t off = this->position();
	int32_t lim = this->limit();
	if (!DirectByteBuffer::$assertionsDisabled && !(off <= lim)) {
		$throwNew($AssertionError);
	}
	int32_t rem = (off <= lim ? lim - off : 0);
	int32_t size = rem >> 3;
	if (!DirectByteBuffer::UNALIGNED && ($mod((this->$Buffer::address + off), (1 << 3)) != 0)) {
		return (this->bigEndian ? static_cast<$DoubleBuffer*>(($new($ByteBufferAsDoubleBufferB, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))) : static_cast<$DoubleBuffer*>(($new($ByteBufferAsDoubleBufferL, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))));
	} else {
		return (this->nativeByteOrder ? static_cast<$DoubleBuffer*>(($new($DirectDoubleBufferU, this, -1, 0, size, size, off, this->segment))) : static_cast<$DoubleBuffer*>(($new($DirectDoubleBufferS, this, -1, 0, size, size, off, this->segment))));
	}
}

void clinit$DirectByteBuffer($Class* class$) {
	DirectByteBuffer::$assertionsDisabled = !DirectByteBuffer::class$->desiredAssertionStatus();
	$init($Buffer);
	$load($bytes);
	DirectByteBuffer::ARRAY_BASE_OFFSET = $nc($Buffer::UNSAFE)->arrayBaseOffset($getClass($bytes));
	DirectByteBuffer::UNALIGNED = $Bits::unaligned();
}

DirectByteBuffer::DirectByteBuffer() {
}

$Class* DirectByteBuffer::load$($String* name, bool initialize) {
	$loadClass(DirectByteBuffer, name, initialize, &_DirectByteBuffer_ClassInfo_, clinit$DirectByteBuffer, allocate$DirectByteBuffer);
	return class$;
}

$Class* DirectByteBuffer::class$ = nullptr;

	} // nio
} // java