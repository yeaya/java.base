#include <java/io/Writer.h>

#include <java/io/Writer$1.h>
#include <java/lang/Appendable.h>
#include <java/lang/CharSequence.h>
#include <jcpp.h>

#undef WRITE_BUFFER_SIZE

using $Writer$1 = ::java::io::Writer$1;
using $Appendable = ::java::lang::Appendable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

namespace java {
	namespace io {

$FieldInfo _Writer_FieldInfo_[] = {
	{"writeBuffer", "[C", nullptr, $PRIVATE, $field(Writer, writeBuffer)},
	{"WRITE_BUFFER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Writer, WRITE_BUFFER_SIZE)},
	{"lock", "Ljava/lang/Object;", nullptr, $PROTECTED, $field(Writer, lock)},
	{}
};

$MethodInfo _Writer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"flush", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Writer::*)()>(&Writer::init$))},
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PROTECTED, $method(static_cast<void(Writer::*)(Object$*)>(&Writer::init$))},
	{"append", "(Ljava/lang/CharSequence;)Ljava/io/Writer;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"append", "(Ljava/lang/CharSequence;II)Ljava/io/Writer;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"append", "(C)Ljava/io/Writer;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"nullWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Writer*(*)()>(&Writer::nullWriter))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([C)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([CII)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"write", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(Ljava/lang/String;II)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Writer_InnerClassesInfo_[] = {
	{"java.io.Writer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Writer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.io.Writer",
	"java.lang.Object",
	"java.lang.Appendable,java.io.Closeable,java.io.Flushable",
	_Writer_FieldInfo_,
	_Writer_MethodInfo_,
	nullptr,
	nullptr,
	_Writer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.io.Writer$1"
};

$Object* allocate$Writer($Class* clazz) {
	return $of($alloc(Writer));
}

int32_t Writer::hashCode() {
	 return this->$Appendable::hashCode();
}

bool Writer::equals(Object$* obj) {
	 return this->$Appendable::equals(obj);
}

$Object* Writer::clone() {
	 return this->$Appendable::clone();
}

$String* Writer::toString() {
	 return this->$Appendable::toString();
}

void Writer::finalize() {
	this->$Appendable::finalize();
}

Writer* Writer::nullWriter() {
	$init(Writer);
	return $new($Writer$1);
}

void Writer::init$() {
	$set(this, lock, this);
}

void Writer::init$(Object$* lock) {
	if (lock == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, lock, lock);
}

void Writer::write(int32_t c) {
	$synchronized(this->lock) {
		if (this->writeBuffer == nullptr) {
			$set(this, writeBuffer, $new($chars, Writer::WRITE_BUFFER_SIZE));
		}
		$nc(this->writeBuffer)->set(0, (char16_t)c);
		write(this->writeBuffer, 0, 1);
	}
}

void Writer::write($chars* cbuf) {
	write(cbuf, 0, $nc(cbuf)->length);
}

void Writer::write($String* str) {
	write(str, 0, $nc(str)->length());
}

void Writer::write($String* str, int32_t off, int32_t len) {
	$synchronized(this->lock) {
		$var($chars, cbuf, nullptr);
		if (len <= Writer::WRITE_BUFFER_SIZE) {
			if (this->writeBuffer == nullptr) {
				$set(this, writeBuffer, $new($chars, Writer::WRITE_BUFFER_SIZE));
			}
			$assign(cbuf, this->writeBuffer);
		} else {
			$assign(cbuf, $new($chars, len));
		}
		$nc(str)->getChars(off, (off + len), cbuf, 0);
		write(cbuf, 0, len);
	}
}

Writer* Writer::append($CharSequence* csq) {
	write($($String::valueOf($of(csq))));
	return this;
}

Writer* Writer::append($CharSequence* csq$renamed, int32_t start, int32_t end) {
	$useLocalCurrentObjectStackCache();
	$var($CharSequence, csq, csq$renamed);
	if (csq == nullptr) {
		$assign(csq, "null"_s);
	}
	return append($($nc(csq)->subSequence(start, end)));
}

Writer* Writer::append(char16_t c) {
	write((int32_t)c);
	return this;
}

Writer::Writer() {
}

$Class* Writer::load$($String* name, bool initialize) {
	$loadClass(Writer, name, initialize, &_Writer_ClassInfo_, allocate$Writer);
	return class$;
}

$Class* Writer::class$ = nullptr;

	} // io
} // java