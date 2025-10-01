#include <SetLastModified.h>

#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <jcpp.h>

#undef G
#undef MAX_POSITION

using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;

$MethodInfo _SetLastModified_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SetLastModified::*)()>(&SetLastModified::init$))},
	{"ck", "(Ljava/io/File;JJ)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($File*,int64_t,int64_t)>(&SetLastModified::ck)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SetLastModified::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _SetLastModified_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SetLastModified",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SetLastModified_MethodInfo_
};

$Object* allocate$SetLastModified($Class* clazz) {
	return $of($alloc(SetLastModified));
}

void SetLastModified::init$() {
}

void SetLastModified::ck($File* f, int64_t nt, int64_t rt) {
	if (rt == nt) {
		return;
	}
	if ((rt / 10 == nt / 10) || (rt / 100 == nt / 100) || (rt / 1000 == nt / 1000) || (rt / 10000 == (nt / 10000))) {
		$init($System);
		$nc($System::err)->println($$str({f, ": Time set to "_s, $$str(nt), ", rounded down by filesystem to "_s, $$str(rt)}));
		return;
	}
	if ((rt / 10 == (nt + 5) / 10) || (rt / 100 == (nt + 50) / 100) || (rt / 1000 == (nt + 500) / 1000) || (rt / 10000 == ((nt + 5000) / 10000))) {
		$init($System);
		$nc($System::err)->println($$str({f, ": Time set to "_s, $$str(nt), ", rounded up by filesystem to "_s, $$str(rt)}));
		return;
	}
	$throwNew($Exception, $$str({f, ": Time set to "_s, $$str(nt), ", then read as "_s, $$str(rt)}));
}

void SetLastModified::main($StringArray* args) {
	$var($File, d, $new($File, $($System::getProperty("test.dir"_s, "."_s))));
	$var($File, d2, $new($File, d, "x.SetLastModified.dir"_s));
	$var($File, f, $new($File, d2, "x.SetLastModified"_s));
	int64_t ot = 0;
	int64_t t = 0;
	int64_t nt = $System::currentTimeMillis() - 1000 * 60 * 60 * 24 * 7;
	if (f->exists()) {
		f->delete$();
	}
	if (d2->exists()) {
		d2->delete$();
	}
	if (!d2->mkdir()) {
		$throwNew($Exception, $$str({"Can\'t create test directory "_s, d2}));
	}
	bool threw = false;
	try {
		d2->setLastModified(-nt);
	} catch ($IllegalArgumentException&) {
		$var($IllegalArgumentException, x, $catch());
		threw = true;
	}
	if (!threw) {
		$throwNew($Exception, "setLastModified succeeded with a negative time"_s);
	}
	ot = d2->lastModified();
	if (ot != 0) {
		if (d2->setLastModified(nt)) {
			ck(d2, nt, d2->lastModified());
			d2->setLastModified(ot);
		} else {
			$nc($System::err)->println("Warning: setLastModified on directories not supported"_s);
		}
	}
	if (f->exists()) {
		if (!f->delete$()) {
			$throwNew($Exception, $$str({"Can\'t delete test file "_s, f}));
		}
	}
	if (f->setLastModified(nt)) {
		$throwNew($Exception, $$str({"Succeeded on non-existent file: "_s, f}));
	}
	int64_t G = (int64_t)1024 * (int64_t)1024 * (int64_t)1024;
	int64_t MAX_POSITION = $nc($($System::getProperty("os.name"_s)))->startsWith("Windows"_s) ? (int64_t)0 : (int64_t)3 * G;
	int64_t pos = 0;
	while (pos <= MAX_POSITION) {
		{
			$var($FileChannel, fc, $$new($FileOutputStream, f)->getChannel());
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$nc($($cast($FileChannel, $nc(fc)->position(pos))))->write($($ByteBuffer::wrap($("x"_s->getBytes()))));
					} catch ($Throwable&) {
						$var($Throwable, t$, $catch());
						if (fc != nullptr) {
							try {
								fc->close();
							} catch ($Throwable&) {
								$var($Throwable, x2, $catch());
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} /*finally*/ {
					if (fc != nullptr) {
						fc->close();
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
		ot = f->lastModified();
		$nc($System::out)->format("check with file size: %d\n"_s, $$new($ObjectArray, {$($of($Long::valueOf(f->length())))}));
		if (!f->setLastModified(nt)) {
			$throwNew($Exception, $$str({"setLastModified failed on file: "_s, f}));
		}
		ck(f, nt, f->lastModified());
		pos += G;
	}
	if (!f->delete$()) {
		$throwNew($Exception, $$str({"Can\'t delete test file "_s, f}));
	}
	if (!d2->delete$()) {
		$throwNew($Exception, $$str({"Can\'t delete test directory "_s, d2}));
	}
}

SetLastModified::SetLastModified() {
}

$Class* SetLastModified::load$($String* name, bool initialize) {
	$loadClass(SetLastModified, name, initialize, &_SetLastModified_ClassInfo_, allocate$SetLastModified);
	return class$;
}

$Class* SetLastModified::class$ = nullptr;