#include <LineLengthsSource.h>

#include <java/io/BufferedWriter.h>
#include <java/io/DataOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintWriter.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $BufferedWriter = ::java::io::BufferedWriter;
using $DataOutputStream = ::java::io::DataOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

$FieldInfo _LineLengthsSource_FieldInfo_[] = {
	{"uo", "Ljava/io/DataOutputStream;", nullptr, 0, $field(LineLengthsSource, uo)},
	{"to", "Ljava/io/BufferedWriter;", nullptr, 0, $field(LineLengthsSource, to)},
	{"log", "Ljava/io/PrintWriter;", nullptr, 0, $field(LineLengthsSource, log)},
	{}
};

$MethodInfo _LineLengthsSource_MethodInfo_[] = {
	{"<init>", "(Ljava/io/OutputStream;Ljava/io/BufferedWriter;Ljava/io/PrintWriter;)V", nullptr, $PUBLIC, $method(LineLengthsSource, init$, void, $OutputStream*, $BufferedWriter*, $PrintWriter*), "java.io.IOException"},
	{"flush", "()V", nullptr, $PRIVATE, $method(LineLengthsSource, flush, void), "java.io.IOException"},
	{"go", "(I)V", nullptr, $PRIVATE, $method(LineLengthsSource, go, void, int32_t), "java.io.IOException"},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LineLengthsSource, run, void)},
	{"termName", "(I)Ljava/lang/String;", nullptr, $PRIVATE, $method(LineLengthsSource, termName, $String*, int32_t)},
	{"termString", "(I)Ljava/lang/String;", nullptr, $PRIVATE, $method(LineLengthsSource, termString, $String*, int32_t)},
	{}
};

$ClassInfo _LineLengthsSource_ClassInfo_ = {
	$ACC_SUPER,
	"LineLengthsSource",
	"java.lang.Object",
	"java.lang.Runnable",
	_LineLengthsSource_FieldInfo_,
	_LineLengthsSource_MethodInfo_
};

$Object* allocate$LineLengthsSource($Class* clazz) {
	return $of($alloc(LineLengthsSource));
}

void LineLengthsSource::init$($OutputStream* us, $BufferedWriter* ts, $PrintWriter* log) {
	$set(this, uo, $new($DataOutputStream, us));
	$set(this, to, ts);
	$set(this, log, log);
}

void LineLengthsSource::flush() {
	$useLocalCurrentObjectStackCache();
	$nc(this->uo)->flush();
	$($Thread::currentThread())->yield();
	$nc(this->to)->flush();
	$($Thread::currentThread())->yield();
}

$String* LineLengthsSource::termString(int32_t t) {
	switch (t) {
	case 0:
		{
			return "\n"_s;
		}
	case 1:
		{
			return "\r"_s;
		}
	case 2:
		{
			return "\r\n"_s;
		}
	default:
		{
			return ""_s;
		}
	}
}

$String* LineLengthsSource::termName(int32_t t) {
	switch (t) {
	case 0:
		{
			return "\\n"_s;
		}
	case 1:
		{
			return "\\r"_s;
		}
	case 2:
		{
			return "\\r\\n"_s;
		}
	default:
		{
			return ""_s;
		}
	}
}

void LineLengthsSource::go(int32_t t) {
	$useLocalCurrentObjectStackCache();
	for (int32_t ln = 0; ln < 128; ++ln) {
		$var($String, ts, termString(t));
		$var($StringBuffer, s, $new($StringBuffer, ln + $nc(ts)->length()));
		for (int32_t i = 0; i < ln; ++i) {
			s->append(u'x');
		}
		$nc(this->log)->println($$str({"["_s, $$str(ln), "]"_s, $(termName(t))}));
		$nc(this->uo)->writeUTF($(s->toString()));
		s->append(ts);
		$nc(this->to)->write($(s->toString()));
		flush();
	}
}

void LineLengthsSource::run() {
	$useLocalCurrentObjectStackCache();
	try {
		go(0);
		go(1);
		go(2);
		$nc(this->uo)->close();
		$($Thread::currentThread())->yield();
		$nc(this->to)->close();
		$($Thread::currentThread())->yield();
	} catch ($IOException& x) {
		return;
	}
}

LineLengthsSource::LineLengthsSource() {
}

$Class* LineLengthsSource::load$($String* name, bool initialize) {
	$loadClass(LineLengthsSource, name, initialize, &_LineLengthsSource_ClassInfo_, allocate$LineLengthsSource);
	return class$;
}

$Class* LineLengthsSource::class$ = nullptr;