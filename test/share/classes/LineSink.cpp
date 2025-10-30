#include <LineSink.h>

#include <java/io/BufferedReader.h>
#include <java/io/DataInputStream.h>
#include <java/io/EOFException.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/PrintWriter.h>
#include <jcpp.h>

#undef MAX_VALUE

using $BufferedReader = ::java::io::BufferedReader;
using $DataInputStream = ::java::io::DataInputStream;
using $EOFException = ::java::io::EOFException;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _LineSink_FieldInfo_[] = {
	{"ui", "Ljava/io/DataInputStream;", nullptr, 0, $field(LineSink, ui)},
	{"ti", "Ljava/io/BufferedReader;", nullptr, 0, $field(LineSink, ti)},
	{"count", "I", nullptr, 0, $field(LineSink, count)},
	{"log", "Ljava/io/PrintWriter;", nullptr, 0, $field(LineSink, log)},
	{}
};

$MethodInfo _LineSink_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;Ljava/io/BufferedReader;ILjava/io/PrintWriter;)V", nullptr, $PUBLIC, $method(static_cast<void(LineSink::*)($InputStream*,$BufferedReader*,int32_t,$PrintWriter*)>(&LineSink::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/io/InputStream;Ljava/io/BufferedReader;Ljava/io/PrintWriter;)V", nullptr, $PUBLIC, $method(static_cast<void(LineSink::*)($InputStream*,$BufferedReader*,$PrintWriter*)>(&LineSink::init$)), "java.io.IOException"},
	{"readUTFLine", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(LineSink::*)()>(&LineSink::readUTFLine)), "java.io.IOException"},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LineSink_ClassInfo_ = {
	$ACC_SUPER,
	"LineSink",
	"java.lang.Object",
	"java.lang.Runnable",
	_LineSink_FieldInfo_,
	_LineSink_MethodInfo_
};

$Object* allocate$LineSink($Class* clazz) {
	return $of($alloc(LineSink));
}

void LineSink::init$($InputStream* us, $BufferedReader* ts, int32_t count, $PrintWriter* log) {
	LineSink::init$(us, ts, log);
	this->count = count;
}

void LineSink::init$($InputStream* us, $BufferedReader* ts, $PrintWriter* log) {
	$set(this, ui, $new($DataInputStream, us));
	$set(this, ti, ts);
	this->count = $Integer::MAX_VALUE;
	$set(this, log, log);
}

$String* LineSink::readUTFLine() {
	$var($String, s, nullptr);
	try {
		$assign(s, $nc(this->ui)->readUTF());
	} catch ($EOFException& x) {
		return nullptr;
	}
	return s;
}

void LineSink::run() {
	$useLocalCurrentObjectStackCache();
	try {
		for (int32_t ln = 0; ln < this->count; ++ln) {
			$var($String, us, readUTFLine());
			if (us == nullptr) {
				if (this->count < $Integer::MAX_VALUE) {
					$throwNew($RuntimeException, "Premature EOF on UTF stream"_s);
				}
				$nc(this->log)->println("EOF on UTF stream"_s);
				break;
			}
			$var($String, ts, $nc(this->ti)->readLine());
			if (ts == nullptr) {
				if (this->count < $Integer::MAX_VALUE) {
					$throwNew($RuntimeException, "Premature EOF on char stream"_s);
				}
				$nc(this->log)->println("EOF on char stream"_s);
				break;
			}
			int32_t var$0 = $nc(us)->length();
			if (var$0 != $nc(ts)->length()) {
				$nc(this->log)->println($$str({"Length mismatch: us = \""_s, us, "\", ts = \""_s, ts, "\""_s}));
				$var($String, var$1, $$str({"Line "_s, $$str(ln), ": Length mismatch: "_s, $$str(us->length()), " "_s}));
				$throwNew($RuntimeException, $$concat(var$1, $$str(ts->length())));
			}
			for (int32_t i = 0; i < $nc(us)->length(); ++i) {
				char16_t var$2 = us->charAt(i);
				if (var$2 != $nc(ts)->charAt(i)) {
					$var($String, var$3, $$str({"Line "_s, $$str(ln), ": Char mismatch: ["_s, $$str(i), "] "_s, $($Integer::toHexString(us->charAt(i))), " "_s}));
					$throwNew($RuntimeException, $$concat(var$3, $($Integer::toHexString(ts->charAt(i)))));
				}
			}
			$nc(this->log)->println($$str({$$str(ln), " "_s, $$str($nc(ts)->length())}));
		}
		if (readUTFLine() != nullptr) {
			$throwNew($RuntimeException, "Expected EOF on UTF stream"_s);
		}
		if ($nc(this->ti)->readLine() != nullptr) {
			$throwNew($RuntimeException, "Expected EOF on char stream"_s);
		}
	} catch ($IOException& x) {
		$throwNew($RuntimeException, $$str({"Unexpected IOException: "_s, x}));
	}
}

LineSink::LineSink() {
}

$Class* LineSink::load$($String* name, bool initialize) {
	$loadClass(LineSink, name, initialize, &_LineSink_ClassInfo_, allocate$LineSink);
	return class$;
}

$Class* LineSink::class$ = nullptr;