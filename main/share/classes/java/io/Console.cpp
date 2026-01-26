#include <java/io/Console.h>

#include <java/io/Console$1.h>
#include <java/io/Console$2.h>
#include <java/io/Console$3.h>
#include <java/io/Console$LineReader.h>
#include <java/io/FileDescriptor.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/io/IOError.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintWriter.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <java/lang/Appendable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Runnable.h>
#include <java/nio/charset/Charset.h>
#include <java/util/Arrays.h>
#include <java/util/Formatter.h>
#include <jdk/internal/access/JavaIOAccess.h>
#include <jdk/internal/access/JavaLangAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <sun/nio/cs/StreamDecoder.h>
#include <sun/nio/cs/StreamEncoder.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef CHARSET

using $Console$1 = ::java::io::Console$1;
using $Console$2 = ::java::io::Console$2;
using $Console$3 = ::java::io::Console$3;
using $Console$LineReader = ::java::io::Console$LineReader;
using $FileDescriptor = ::java::io::FileDescriptor;
using $FileInputStream = ::java::io::FileInputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $IOError = ::java::io::IOError;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintWriter = ::java::io::PrintWriter;
using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $Appendable = ::java::lang::Appendable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Charset = ::java::nio::charset::Charset;
using $Arrays = ::java::util::Arrays;
using $Formatter = ::java::util::Formatter;
using $JavaIOAccess = ::jdk::internal::access::JavaIOAccess;
using $JavaLangAccess = ::jdk::internal::access::JavaLangAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $StreamDecoder = ::sun::nio::cs::StreamDecoder;
using $StreamEncoder = ::sun::nio::cs::StreamEncoder;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace java {
	namespace io {

$FieldInfo _Console_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Console, $assertionsDisabled)},
	{"readLock", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(Console, readLock)},
	{"writeLock", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(Console, writeLock)},
	{"reader", "Ljava/io/Reader;", nullptr, $PRIVATE, $field(Console, reader$)},
	{"out", "Ljava/io/Writer;", nullptr, $PRIVATE, $field(Console, out)},
	{"pw", "Ljava/io/PrintWriter;", nullptr, $PRIVATE, $field(Console, pw)},
	{"formatter", "Ljava/util/Formatter;", nullptr, $PRIVATE, $field(Console, formatter)},
	{"rcb", "[C", nullptr, $PRIVATE, $field(Console, rcb)},
	{"restoreEcho", "Z", nullptr, $PRIVATE, $field(Console, restoreEcho)},
	{"shutdownHookInstalled", "Z", nullptr, $PRIVATE, $field(Console, shutdownHookInstalled)},
	{"CHARSET", "Ljava/nio/charset/Charset;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Console, CHARSET)},
	{"cons", "Ljava/io/Console;", nullptr, $PRIVATE | $STATIC, $staticField(Console, cons)},
	{}
};

$MethodInfo _Console_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(Console, init$, void)},
	{"charset", "()Ljava/nio/charset/Charset;", nullptr, $PUBLIC, $method(Console, charset, $Charset*)},
	{"echo", "(Z)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Console, echo, bool, bool), "java.io.IOException"},
	{"encoding", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Console, encoding, $String*)},
	{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(Console, flush, void)},
	{"format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/Console;", nullptr, $PUBLIC | $TRANSIENT, $method(Console, format, Console*, $String*, $ObjectArray*)},
	{"grow", "()[C", nullptr, $PRIVATE, $method(Console, grow, $chars*)},
	{"installShutdownHook", "()V", nullptr, $PRIVATE, $method(Console, installShutdownHook, void)},
	{"istty", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Console, istty, bool)},
	{"printf", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/Console;", nullptr, $PUBLIC | $TRANSIENT, $method(Console, printf, Console*, $String*, $ObjectArray*)},
	{"readLine", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $TRANSIENT, $method(Console, readLine, $String*, $String*, $ObjectArray*)},
	{"readLine", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(Console, readLine, $String*)},
	{"readPassword", "(Ljava/lang/String;[Ljava/lang/Object;)[C", nullptr, $PUBLIC | $TRANSIENT, $method(Console, readPassword, $chars*, $String*, $ObjectArray*)},
	{"readPassword", "()[C", nullptr, $PUBLIC, $method(Console, readPassword, $chars*)},
	{"reader", "()Ljava/io/Reader;", nullptr, $PUBLIC, $method(Console, reader, $Reader*)},
	{"readline", "(Z)[C", nullptr, $PRIVATE, $method(Console, readline, $chars*, bool), "java.io.IOException"},
	{"writer", "()Ljava/io/PrintWriter;", nullptr, $PUBLIC, $method(Console, writer, $PrintWriter*)},
	{}
};

#define _METHOD_INDEX_echo 2
#define _METHOD_INDEX_encoding 3
#define _METHOD_INDEX_istty 8

$InnerClassInfo _Console_InnerClassesInfo_[] = {
	{"java.io.Console$LineReader", "java.io.Console", "LineReader", 0},
	{"java.io.Console$3", nullptr, nullptr, 0},
	{"java.io.Console$2", nullptr, nullptr, 0},
	{"java.io.Console$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Console_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.io.Console",
	"java.lang.Object",
	"java.io.Flushable",
	_Console_FieldInfo_,
	_Console_MethodInfo_,
	nullptr,
	nullptr,
	_Console_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.io.Console$LineReader,java.io.Console$3,java.io.Console$2,java.io.Console$1"
};

$Object* allocate$Console($Class* clazz) {
	return $of($alloc(Console));
}

bool Console::$assertionsDisabled = false;
$Charset* Console::CHARSET = nullptr;
Console* Console::cons = nullptr;

$PrintWriter* Console::writer() {
	return this->pw;
}

$Reader* Console::reader() {
	return this->reader$;
}

Console* Console::format($String* fmt, $ObjectArray* args) {
	$nc($($nc(this->formatter)->format(fmt, args)))->flush();
	return this;
}

Console* Console::printf($String* format, $ObjectArray* args) {
	return this->format(format, args);
}

$String* Console::readLine($String* fmt, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($String, line, nullptr);
	$synchronized(this->writeLock) {
		$synchronized(this->readLock) {
			if (!$nc(fmt)->isEmpty()) {
				$nc(this->pw)->format(fmt, args);
			}
			try {
				$var($chars, ca, readline(false));
				if (ca != nullptr) {
					$assign(line, $new($String, ca));
				}
			} catch ($IOException& x) {
				$throwNew($IOError, x);
			}
		}
	}
	return line;
}

$String* Console::readLine() {
	return readLine(""_s, $$new($ObjectArray, 0));
}

$chars* Console::readPassword($String* fmt, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($chars, passwd, nullptr);
	$synchronized(this->writeLock) {
		$synchronized(this->readLock) {
			installShutdownHook();
			try {
				this->restoreEcho = echo(false);
			} catch ($IOException& x) {
				$throwNew($IOError, x);
			}
			$var($IOError, ioe, nullptr);
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						if (!$nc(fmt)->isEmpty()) {
							$nc(this->pw)->format(fmt, args);
						}
						$assign(passwd, readline(true));
					} catch ($IOException& x) {
						$assign(ioe, $new($IOError, x));
					}
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					try {
						if (this->restoreEcho) {
							this->restoreEcho = echo(true);
						}
					} catch ($IOException& x) {
						if (ioe == nullptr) {
							$assign(ioe, $new($IOError, x));
						} else {
							$nc(ioe)->addSuppressed(x);
						}
					}
					if (ioe != nullptr) {
						$throw(ioe);
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
			$nc(this->pw)->println();
		}
	}
	return passwd;
}

void Console::installShutdownHook() {
	$useLocalCurrentObjectStackCache();
	if (this->shutdownHookInstalled) {
		return;
	}
	try {
		$nc($($SharedSecrets::getJavaLangAccess()))->registerShutdownHook(0, false, $$new($Console$1, this));
	} catch ($IllegalStateException& e) {
	}
	this->shutdownHookInstalled = true;
}

$chars* Console::readPassword() {
	return readPassword(""_s, $$new($ObjectArray, 0));
}

void Console::flush() {
	$nc(this->pw)->flush();
}

$Charset* Console::charset() {
	if (!Console::$assertionsDisabled && !(Console::CHARSET != nullptr)) {
		$throwNew($AssertionError, $of("charset() should not return null"_s));
	}
	return Console::CHARSET;
}

$String* Console::encoding() {
	$init(Console);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(Console, encoding, $String*);
	$assign($ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

bool Console::echo(bool on) {
	$init(Console);
	bool $ret = false;
	$prepareNativeStatic(Console, echo, bool, bool on);
	$ret = $invokeNativeStatic(on);
	$finishNativeStatic();
	return $ret;
}

$chars* Console::readline(bool zeroOut) {
	int32_t len = $nc(this->reader$)->read(this->rcb, 0, $nc(this->rcb)->length);
	if (len < 0) {
		return nullptr;
	}
	if ($nc(this->rcb)->get(len - 1) == u'\r') {
		--len;
	} else if ($nc(this->rcb)->get(len - 1) == u'\n') {
		--len;
		if (len > 0 && $nc(this->rcb)->get(len - 1) == u'\r') {
			--len;
		}
	}
	$var($chars, b, $new($chars, len));
	if (len > 0) {
		$System::arraycopy(this->rcb, 0, b, 0, len);
		if (zeroOut) {
			$Arrays::fill(this->rcb, 0, len, u' ');
		}
	}
	return b;
}

$chars* Console::grow() {
	if (!Console::$assertionsDisabled && !$Thread::holdsLock(this->readLock)) {
		$throwNew($AssertionError);
	}
	$var($chars, t, $new($chars, $nc(this->rcb)->length * 2));
	$System::arraycopy(this->rcb, 0, t, 0, $nc(this->rcb)->length);
	$set(this, rcb, t);
	return this->rcb;
}

bool Console::istty() {
	$init(Console);
	bool $ret = false;
	$prepareNativeStatic(Console, istty, bool);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

void Console::init$() {
	$useLocalCurrentObjectStackCache();
	$set(this, readLock, $new($Object));
	$set(this, writeLock, $new($Object));
	$init($FileDescriptor);
	$set(this, out, $StreamEncoder::forOutputStreamWriter(static_cast<$OutputStream*>($$new($FileOutputStream, $FileDescriptor::out)), this->writeLock, Console::CHARSET));
	$set(this, pw, $new($Console$3, this, this->out, true));
	$set(this, formatter, $new($Formatter, static_cast<$Appendable*>(this->out)));
	$set(this, reader$, $new($Console$LineReader, this, $($StreamDecoder::forInputStreamReader(static_cast<$InputStream*>($$new($FileInputStream, $FileDescriptor::in)), this->readLock, Console::CHARSET))));
	$set(this, rcb, $new($chars, 1024));
}

void clinit$Console($Class* class$) {
	$useLocalCurrentObjectStackCache();
	Console::$assertionsDisabled = !Console::class$->desiredAssertionStatus();
	{
		$var($String, csname, Console::encoding());
		$var($Charset, cs, nullptr);
		if (csname == nullptr) {
			$assign(csname, $GetPropertyAction::privilegedGetProperty("sun.stdout.encoding"_s));
		}
		if (csname != nullptr) {
			try {
				$assign(cs, $Charset::forName(csname));
			} catch ($Exception& ignored) {
			}
		}
		$assignStatic(Console::CHARSET, cs == nullptr ? $Charset::defaultCharset() : cs);
		$SharedSecrets::setJavaIOAccess($$new($Console$2));
	}
}

Console::Console() {
}

$Class* Console::load$($String* name, bool initialize) {
	$loadClass(Console, name, initialize, &_Console_ClassInfo_, clinit$Console, allocate$Console);
	return class$;
}

$Class* Console::class$ = nullptr;

	} // io
} // java