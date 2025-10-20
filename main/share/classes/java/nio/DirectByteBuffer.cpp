#include <java/nio/DirectByteBuffer.h>

#include <java/io/FileDescriptor.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $NullPointerException = ::java::lang::NullPointerException;
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
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(DirectByteBuffer::*)(int32_t)>(&DirectByteBuffer::init$))},
	{"<init>", "(JILjava/lang/Object;Ljdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(DirectByteBuffer::*)(int64_t,int32_t,Object$*,$MemorySegmentProxy*)>(&DirectByteBuffer::init$))},
	{"<init>", "(JILjava/lang/Object;Ljava/io/FileDescriptor;ZLjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(DirectByteBuffer::*)(int64_t,int32_t,Object$*,$FileDescriptor*,bool,$MemorySegmentProxy*)>(&DirectByteBuffer::init$))},
	{"<init>", "(JI)V", nullptr, $PRIVATE, $method(static_cast<void(DirectByteBuffer::*)(int64_t,int32_t)>(&DirectByteBuffer::init$))},
	{"<init>", "(IJLjava/io/FileDescriptor;Ljava/lang/Runnable;ZLjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, $PROTECTED, $method(static_cast<void(DirectByteBuffer::*)(int32_t,int64_t,$FileDescriptor*,$Runnable*,bool,$MemorySegmentProxy*)>(&DirectByteBuffer::init$))},
	{"<init>", "(Lsun/nio/ch/DirectBuffer;IIIIILjava/io/FileDescriptor;ZLjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(DirectByteBuffer::*)($DirectBuffer*,int32_t,int32_t,int32_t,int32_t,int32_t,$FileDescriptor*,bool,$MemorySegmentProxy*)>(&DirectByteBuffer::init$))},
	{"address", "()J", nullptr, $PUBLIC},
	{"asCharBuffer", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"asDoubleBuffer", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"asFloatBuffer", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"asIntBuffer", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"asLongBuffer", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"asReadOnlyBuffer", "()Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"asShortBuffer", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"attachment", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"base", "()Ljava/lang/Object;", nullptr, 0},
	{"cleaner", "()Ljdk/internal/ref/Cleaner;", nullptr, $PUBLIC},
	{"compact", "()Ljava/nio/MappedByteBuffer;", nullptr, $PUBLIC},
	{"duplicate", "()Ljava/nio/MappedByteBuffer;", nullptr, $PUBLIC},
	{"get", "()B", nullptr, $PUBLIC},
	{"get", "(I)B", nullptr, $PUBLIC},
	{"getChar", "(J)C", nullptr, $PRIVATE, $method(static_cast<char16_t(DirectByteBuffer::*)(int64_t)>(&DirectByteBuffer::getChar))},
	{"getChar", "()C", nullptr, $PUBLIC},
	{"getChar", "(I)C", nullptr, $PUBLIC},
	{"getDouble", "(J)D", nullptr, $PRIVATE, $method(static_cast<double(DirectByteBuffer::*)(int64_t)>(&DirectByteBuffer::getDouble))},
	{"getDouble", "()D", nullptr, $PUBLIC},
	{"getDouble", "(I)D", nullptr, $PUBLIC},
	{"getFloat", "(J)F", nullptr, $PRIVATE, $method(static_cast<float(DirectByteBuffer::*)(int64_t)>(&DirectByteBuffer::getFloat))},
	{"getFloat", "()F", nullptr, $PUBLIC},
	{"getFloat", "(I)F", nullptr, $PUBLIC},
	{"getInt", "(J)I", nullptr, $PRIVATE, $method(static_cast<int32_t(DirectByteBuffer::*)(int64_t)>(&DirectByteBuffer::getInt))},
	{"getInt", "()I", nullptr, $PUBLIC},
	{"getInt", "(I)I", nullptr, $PUBLIC},
	{"getLong", "(J)J", nullptr, $PRIVATE, $method(static_cast<int64_t(DirectByteBuffer::*)(int64_t)>(&DirectByteBuffer::getLong))},
	{"getLong", "()J", nullptr, $PUBLIC},
	{"getLong", "(I)J", nullptr, $PUBLIC},
	{"getShort", "(J)S", nullptr, $PRIVATE, $method(static_cast<int16_t(DirectByteBuffer::*)(int64_t)>(&DirectByteBuffer::getShort))},
	{"getShort", "()S", nullptr, $PUBLIC},
	{"getShort", "(I)S", nullptr, $PUBLIC},
	{"isDirect", "()Z", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"ix", "(I)J", nullptr, $PRIVATE, $method(static_cast<int64_t(DirectByteBuffer::*)(int32_t)>(&DirectByteBuffer::ix))},
	{"put", "(B)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"put", "(IB)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putChar", "(JC)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(static_cast<$ByteBuffer*(DirectByteBuffer::*)(int64_t,char16_t)>(&DirectByteBuffer::putChar))},
	{"putChar", "(C)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putChar", "(IC)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putDouble", "(JD)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(static_cast<$ByteBuffer*(DirectByteBuffer::*)(int64_t,double)>(&DirectByteBuffer::putDouble))},
	{"putDouble", "(D)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putDouble", "(ID)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putFloat", "(JF)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(static_cast<$ByteBuffer*(DirectByteBuffer::*)(int64_t,float)>(&DirectByteBuffer::putFloat))},
	{"putFloat", "(F)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putFloat", "(IF)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putInt", "(JI)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(static_cast<$ByteBuffer*(DirectByteBuffer::*)(int64_t,int32_t)>(&DirectByteBuffer::putInt))},
	{"putInt", "(I)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putInt", "(II)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putLong", "(JJ)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(static_cast<$ByteBuffer*(DirectByteBuffer::*)(int64_t,int64_t)>(&DirectByteBuffer::putLong))},
	{"putLong", "(J)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putLong", "(IJ)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putShort", "(JS)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(static_cast<$ByteBuffer*(DirectByteBuffer::*)(int64_t,int16_t)>(&DirectByteBuffer::putShort))},
	{"putShort", "(S)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putShort", "(IS)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"slice", "()Ljava/nio/MappedByteBuffer;", nullptr, $PUBLIC},
	{"slice", "(II)Ljava/nio/MappedByteBuffer;", nullptr, $PUBLIC},
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
	$useLocalCurrentObjectStackCache();
	$MappedByteBuffer::init$(-1, 0, cap, cap, nullptr);
	bool pa = $VM::isDirectMemoryPageAligned();
	int32_t ps = $Bits::pageSize();
	int64_t size = $Math::max((int64_t)1, (int64_t)cap + (pa ? ps : 0));
	$Bits::reserveMemory(size, cap);
	int64_t base = 0;
	try {
		$init($Buffer);
		base = $nc($Buffer::UNSAFE)->allocateMemory(size);
	} catch ($OutOfMemoryError&) {
		$var($OutOfMemoryError, x, $catch());
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
	$useLocalCurrentObjectStackCache();
	$var($ScopedMemoryAccess$Scope, scope, this->scope());
	if (scope != nullptr) {
		if (scope->ownerThread() == nullptr) {
			$throwNew($UnsupportedOperationException, "ByteBuffer derived from shared segments not supported"_s);
		}
		try {
			scope->checkValidState();
		} catch ($ScopedMemoryAccess$Scope$ScopedAccessError&) {
			$var($ScopedMemoryAccess$Scope$ScopedAccessError, e, $catch());
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
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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