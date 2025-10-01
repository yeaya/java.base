#include <java/io/PrintWriter.h>

#include <java/io/BufferedWriter.h>
#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InterruptedIOException.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/PrintStream.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/io/Writer.h>
#include <java/lang/Appendable.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/IllegalCharsetNameException.h>
#include <java/nio/charset/UnsupportedCharsetException.h>
#include <java/util/Formatter.h>
#include <java/util/Locale.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $BufferedWriter = ::java::io::BufferedWriter;
using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $IOException = ::java::io::IOException;
using $InterruptedIOException = ::java::io::InterruptedIOException;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $PrintStream = ::java::io::PrintStream;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $Writer = ::java::io::Writer;
using $Appendable = ::java::lang::Appendable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $IllegalCharsetNameException = ::java::nio::charset::IllegalCharsetNameException;
using $UnsupportedCharsetException = ::java::nio::charset::UnsupportedCharsetException;
using $Formatter = ::java::util::Formatter;
using $Locale = ::java::util::Locale;
using $Objects = ::java::util::Objects;

namespace java {
	namespace io {

$FieldInfo _PrintWriter_FieldInfo_[] = {
	{"out", "Ljava/io/Writer;", nullptr, $PROTECTED, $field(PrintWriter, out)},
	{"autoFlush", "Z", nullptr, $PRIVATE | $FINAL, $field(PrintWriter, autoFlush)},
	{"trouble", "Z", nullptr, $PRIVATE, $field(PrintWriter, trouble)},
	{"formatter", "Ljava/util/Formatter;", nullptr, $PRIVATE, $field(PrintWriter, formatter)},
	{"psOut", "Ljava/io/PrintStream;", nullptr, $PRIVATE, $field(PrintWriter, psOut)},
	{}
};

$MethodInfo _PrintWriter_MethodInfo_[] = {
	{"<init>", "(Ljava/io/Writer;)V", nullptr, $PUBLIC, $method(static_cast<void(PrintWriter::*)($Writer*)>(&PrintWriter::init$))},
	{"<init>", "(Ljava/io/Writer;Z)V", nullptr, $PUBLIC, $method(static_cast<void(PrintWriter::*)($Writer*,bool)>(&PrintWriter::init$))},
	{"<init>", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(PrintWriter::*)($OutputStream*)>(&PrintWriter::init$))},
	{"<init>", "(Ljava/io/OutputStream;Z)V", nullptr, $PUBLIC, $method(static_cast<void(PrintWriter::*)($OutputStream*,bool)>(&PrintWriter::init$))},
	{"<init>", "(Ljava/io/OutputStream;ZLjava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(static_cast<void(PrintWriter::*)($OutputStream*,bool,$Charset*)>(&PrintWriter::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(PrintWriter::*)($String*)>(&PrintWriter::init$)), "java.io.FileNotFoundException"},
	{"<init>", "(Ljava/nio/charset/Charset;Ljava/io/File;)V", nullptr, $PRIVATE, $method(static_cast<void(PrintWriter::*)($Charset*,$File*)>(&PrintWriter::init$)), "java.io.FileNotFoundException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(PrintWriter::*)($String*,$String*)>(&PrintWriter::init$)), "java.io.FileNotFoundException,java.io.UnsupportedEncodingException"},
	{"<init>", "(Ljava/lang/String;Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(static_cast<void(PrintWriter::*)($String*,$Charset*)>(&PrintWriter::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(static_cast<void(PrintWriter::*)($File*)>(&PrintWriter::init$)), "java.io.FileNotFoundException"},
	{"<init>", "(Ljava/io/File;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(PrintWriter::*)($File*,$String*)>(&PrintWriter::init$)), "java.io.FileNotFoundException,java.io.UnsupportedEncodingException"},
	{"<init>", "(Ljava/io/File;Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(static_cast<void(PrintWriter::*)($File*,$Charset*)>(&PrintWriter::init$)), "java.io.IOException"},
	{"append", "(Ljava/lang/CharSequence;)Ljava/io/PrintWriter;", nullptr, $PUBLIC},
	{"append", "(Ljava/lang/CharSequence;II)Ljava/io/PrintWriter;", nullptr, $PUBLIC},
	{"append", "(C)Ljava/io/PrintWriter;", nullptr, $PUBLIC},
	{"checkError", "()Z", nullptr, $PUBLIC},
	{"clearError", "()V", nullptr, $PROTECTED},
	{"close", "()V", nullptr, $PUBLIC},
	{"ensureOpen", "()V", nullptr, $PRIVATE, $method(static_cast<void(PrintWriter::*)()>(&PrintWriter::ensureOpen)), "java.io.IOException"},
	{"flush", "()V", nullptr, $PUBLIC},
	{"format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;", nullptr, $PUBLIC | $TRANSIENT},
	{"format", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;", nullptr, $PUBLIC | $TRANSIENT},
	{"newLine", "()V", nullptr, $PRIVATE, $method(static_cast<void(PrintWriter::*)()>(&PrintWriter::newLine))},
	{"print", "(Z)V", nullptr, $PUBLIC},
	{"print", "(C)V", nullptr, $PUBLIC},
	{"print", "(I)V", nullptr, $PUBLIC},
	{"print", "(J)V", nullptr, $PUBLIC},
	{"print", "(F)V", nullptr, $PUBLIC},
	{"print", "(D)V", nullptr, $PUBLIC},
	{"print", "([C)V", nullptr, $PUBLIC},
	{"print", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"print", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"printf", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;", nullptr, $PUBLIC | $TRANSIENT},
	{"printf", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;", nullptr, $PUBLIC | $TRANSIENT},
	{"println", "()V", nullptr, $PUBLIC},
	{"println", "(Z)V", nullptr, $PUBLIC},
	{"println", "(C)V", nullptr, $PUBLIC},
	{"println", "(I)V", nullptr, $PUBLIC},
	{"println", "(J)V", nullptr, $PUBLIC},
	{"println", "(F)V", nullptr, $PUBLIC},
	{"println", "(D)V", nullptr, $PUBLIC},
	{"println", "([C)V", nullptr, $PUBLIC},
	{"println", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"println", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"setError", "()V", nullptr, $PROTECTED},
	{"toCharset", "(Ljava/lang/String;)Ljava/nio/charset/Charset;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Charset*(*)($String*)>(&PrintWriter::toCharset)), "java.io.UnsupportedEncodingException"},
	{"write", "(I)V", nullptr, $PUBLIC},
	{"write", "([CII)V", nullptr, $PUBLIC},
	{"write", "([C)V", nullptr, $PUBLIC},
	{"write", "(Ljava/lang/String;II)V", nullptr, $PUBLIC},
	{"write", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PrintWriter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.PrintWriter",
	"java.io.Writer",
	nullptr,
	_PrintWriter_FieldInfo_,
	_PrintWriter_MethodInfo_
};

$Object* allocate$PrintWriter($Class* clazz) {
	return $of($alloc(PrintWriter));
}

$Charset* PrintWriter::toCharset($String* csn) {
	$init(PrintWriter);
	$Objects::requireNonNull($of(csn), "charsetName"_s);
	try {
		return $Charset::forName(csn);
	} catch ($IllegalCharsetNameException&) {
		$var($IllegalArgumentException, unused, $catch());
		$throwNew($UnsupportedEncodingException, csn);
	} catch ($UnsupportedCharsetException&) {
		$var($IllegalArgumentException, unused, $catch());
		$throwNew($UnsupportedEncodingException, csn);
	}
	$shouldNotReachHere();
}

void PrintWriter::init$($Writer* out) {
	PrintWriter::init$(out, false);
}

void PrintWriter::init$($Writer* out, bool autoFlush) {
	$Writer::init$(out);
	this->trouble = false;
	$set(this, psOut, nullptr);
	$set(this, out, out);
	this->autoFlush = autoFlush;
}

void PrintWriter::init$($OutputStream* out) {
	PrintWriter::init$(out, false);
}

void PrintWriter::init$($OutputStream* out, bool autoFlush) {
	PrintWriter::init$(out, autoFlush, $($Charset::defaultCharset()));
}

void PrintWriter::init$($OutputStream* out, bool autoFlush, $Charset* charset) {
	PrintWriter::init$(static_cast<$Writer*>($$new($BufferedWriter, $$new($OutputStreamWriter, out, charset))), autoFlush);
	if ($instanceOf($PrintStream, out)) {
		$set(this, psOut, $cast($PrintStream, out));
	}
}

void PrintWriter::init$($String* fileName) {
	PrintWriter::init$(static_cast<$Writer*>($$new($BufferedWriter, $$new($OutputStreamWriter, $$new($FileOutputStream, fileName)))), false);
}

void PrintWriter::init$($Charset* charset, $File* file) {
	PrintWriter::init$(static_cast<$Writer*>($$new($BufferedWriter, $$new($OutputStreamWriter, static_cast<$OutputStream*>($$new($FileOutputStream, file)), charset))), false);
}

void PrintWriter::init$($String* fileName, $String* csn) {
	$var($Charset, var$0, toCharset(csn));
	PrintWriter::init$(var$0, $$new($File, fileName));
}

void PrintWriter::init$($String* fileName, $Charset* charset) {
	$var($Charset, var$0, $cast($Charset, $Objects::requireNonNull($of(charset), "charset"_s)));
	PrintWriter::init$(var$0, $$new($File, fileName));
}

void PrintWriter::init$($File* file) {
	PrintWriter::init$(static_cast<$Writer*>($$new($BufferedWriter, $$new($OutputStreamWriter, $$new($FileOutputStream, file)))), false);
}

void PrintWriter::init$($File* file, $String* csn) {
	PrintWriter::init$($(toCharset(csn)), file);
}

void PrintWriter::init$($File* file, $Charset* charset) {
	PrintWriter::init$($cast($Charset, $Objects::requireNonNull($of(charset), "charset"_s)), file);
}

void PrintWriter::ensureOpen() {
	if (this->out == nullptr) {
		$throwNew($IOException, "Stream closed"_s);
	}
}

void PrintWriter::flush() {
	try {
		$synchronized(this->lock) {
			ensureOpen();
			$nc(this->out)->flush();
		}
	} catch ($IOException&) {
		$var($IOException, x, $catch());
		this->trouble = true;
	}
}

void PrintWriter::close() {
	try {
		$synchronized(this->lock) {
			if (this->out == nullptr) {
				return;
			}
			$nc(this->out)->close();
			$set(this, out, nullptr);
		}
	} catch ($IOException&) {
		$var($IOException, x, $catch());
		this->trouble = true;
	}
}

bool PrintWriter::checkError() {
	if (this->out != nullptr) {
		flush();
	}
	{
		$var(PrintWriter, pw, nullptr);
		$var($Writer, patt16590$temp, this->out);
		bool var$0 = $instanceOf(PrintWriter, patt16590$temp);
		if (var$0) {
			$assign(pw, $cast(PrintWriter, patt16590$temp));
			var$0 = true;
		}
		if (var$0) {
			return $nc(pw)->checkError();
		} else if (this->psOut != nullptr) {
			return $nc(this->psOut)->checkError();
		}
	}
	return this->trouble;
}

void PrintWriter::setError() {
	this->trouble = true;
}

void PrintWriter::clearError() {
	this->trouble = false;
}

void PrintWriter::write(int32_t c) {
	try {
		$synchronized(this->lock) {
			ensureOpen();
			$nc(this->out)->write(c);
		}
	} catch ($InterruptedIOException&) {
		$var($InterruptedIOException, x, $catch());
		$($Thread::currentThread())->interrupt();
	} catch ($IOException&) {
		$var($IOException, x, $catch());
		this->trouble = true;
	}
}

void PrintWriter::write($chars* buf, int32_t off, int32_t len) {
	try {
		$synchronized(this->lock) {
			ensureOpen();
			$nc(this->out)->write(buf, off, len);
		}
	} catch ($InterruptedIOException&) {
		$var($InterruptedIOException, x, $catch());
		$($Thread::currentThread())->interrupt();
	} catch ($IOException&) {
		$var($IOException, x, $catch());
		this->trouble = true;
	}
}

void PrintWriter::write($chars* buf) {
	write(buf, 0, $nc(buf)->length);
}

void PrintWriter::write($String* s, int32_t off, int32_t len) {
	try {
		$synchronized(this->lock) {
			ensureOpen();
			$nc(this->out)->write(s, off, len);
		}
	} catch ($InterruptedIOException&) {
		$var($InterruptedIOException, x, $catch());
		$($Thread::currentThread())->interrupt();
	} catch ($IOException&) {
		$var($IOException, x, $catch());
		this->trouble = true;
	}
}

void PrintWriter::write($String* s) {
	write(s, 0, $nc(s)->length());
}

void PrintWriter::newLine() {
	try {
		$synchronized(this->lock) {
			ensureOpen();
			$nc(this->out)->write($($System::lineSeparator()));
			if (this->autoFlush) {
				$nc(this->out)->flush();
			}
		}
	} catch ($InterruptedIOException&) {
		$var($InterruptedIOException, x, $catch());
		$($Thread::currentThread())->interrupt();
	} catch ($IOException&) {
		$var($IOException, x, $catch());
		this->trouble = true;
	}
}

void PrintWriter::print(bool b) {
	write($($String::valueOf(b)));
}

void PrintWriter::print(char16_t c) {
	write((int32_t)c);
}

void PrintWriter::print(int32_t i) {
	write($($String::valueOf(i)));
}

void PrintWriter::print(int64_t l) {
	write($($String::valueOf(l)));
}

void PrintWriter::print(float f) {
	write($($String::valueOf(f)));
}

void PrintWriter::print(double d) {
	write($($String::valueOf(d)));
}

void PrintWriter::print($chars* s) {
	write(s);
}

void PrintWriter::print($String* s) {
	write($($String::valueOf($of(s))));
}

void PrintWriter::print(Object$* obj) {
	write($($String::valueOf(obj)));
}

void PrintWriter::println() {
	newLine();
}

void PrintWriter::println(bool x) {
	$synchronized(this->lock) {
		print(x);
		println();
	}
}

void PrintWriter::println(char16_t x) {
	$synchronized(this->lock) {
		print(x);
		println();
	}
}

void PrintWriter::println(int32_t x) {
	$synchronized(this->lock) {
		print(x);
		println();
	}
}

void PrintWriter::println(int64_t x) {
	$synchronized(this->lock) {
		print(x);
		println();
	}
}

void PrintWriter::println(float x) {
	$synchronized(this->lock) {
		print(x);
		println();
	}
}

void PrintWriter::println(double x) {
	$synchronized(this->lock) {
		print(x);
		println();
	}
}

void PrintWriter::println($chars* x) {
	$synchronized(this->lock) {
		print(x);
		println();
	}
}

void PrintWriter::println($String* x) {
	$synchronized(this->lock) {
		print(x);
		println();
	}
}

void PrintWriter::println(Object$* x) {
	$var($String, s, $String::valueOf(x));
	$synchronized(this->lock) {
		print(s);
		println();
	}
}

PrintWriter* PrintWriter::printf($String* format, $ObjectArray* args) {
	return this->format(format, args);
}

PrintWriter* PrintWriter::printf($Locale* l, $String* format, $ObjectArray* args) {
	return this->format(l, format, args);
}

PrintWriter* PrintWriter::format($String* format, $ObjectArray* args) {
	try {
		$synchronized(this->lock) {
			ensureOpen();
			bool var$0 = (this->formatter == nullptr);
			if (!var$0) {
				var$0 = ($nc(this->formatter)->locale() != $Locale::getDefault());
			}
			if (var$0) {
				$set(this, formatter, $new($Formatter, static_cast<$Appendable*>(this)));
			}
			$nc(this->formatter)->format($($Locale::getDefault()), format, args);
			if (this->autoFlush) {
				$nc(this->out)->flush();
			}
		}
	} catch ($InterruptedIOException&) {
		$var($InterruptedIOException, x, $catch());
		$($Thread::currentThread())->interrupt();
	} catch ($IOException&) {
		$var($IOException, x, $catch());
		this->trouble = true;
	}
	return this;
}

PrintWriter* PrintWriter::format($Locale* l, $String* format, $ObjectArray* args) {
	try {
		$synchronized(this->lock) {
			ensureOpen();
			if ((this->formatter == nullptr) || ($nc(this->formatter)->locale() != l)) {
				$set(this, formatter, $new($Formatter, static_cast<$Appendable*>(this), l));
			}
			$nc(this->formatter)->format(l, format, args);
			if (this->autoFlush) {
				$nc(this->out)->flush();
			}
		}
	} catch ($InterruptedIOException&) {
		$var($InterruptedIOException, x, $catch());
		$($Thread::currentThread())->interrupt();
	} catch ($IOException&) {
		$var($IOException, x, $catch());
		this->trouble = true;
	}
	return this;
}

PrintWriter* PrintWriter::append($CharSequence* csq) {
	write($($String::valueOf($of(csq))));
	return this;
}

PrintWriter* PrintWriter::append($CharSequence* csq$renamed, int32_t start, int32_t end) {
	$var($CharSequence, csq, csq$renamed);
	if (csq == nullptr) {
		$assign(csq, "null"_s);
	}
	return append($($nc(csq)->subSequence(start, end)));
}

PrintWriter* PrintWriter::append(char16_t c) {
	write((int32_t)c);
	return this;
}

PrintWriter::PrintWriter() {
}

$Class* PrintWriter::load$($String* name, bool initialize) {
	$loadClass(PrintWriter, name, initialize, &_PrintWriter_ClassInfo_, allocate$PrintWriter);
	return class$;
}

$Class* PrintWriter::class$ = nullptr;

	} // io
} // java