#include <Append.h>

#include <java/io/BufferedWriter.h>
#include <java/io/CharArrayWriter.h>
#include <java/io/FileWriter.h>
#include <java/io/FilterWriter.h>
#include <java/io/IOException.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/PrintWriter.h>
#include <java/io/StringWriter.h>
#include <java/io/Writer.h>
#include <java/lang/CharSequence.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef TYPE

using $BufferedWriter = ::java::io::BufferedWriter;
using $CharArrayWriter = ::java::io::CharArrayWriter;
using $FileWriter = ::java::io::FileWriter;
using $FilterWriter = ::java::io::FilterWriter;
using $IOException = ::java::io::IOException;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $StringWriter = ::java::io::StringWriter;
using $Writer = ::java::io::Writer;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Method = ::java::lang::reflect::Method;

$FieldInfo _Append_FieldInfo_[] = {
	{"io", "[Ljava/lang/Class;", nullptr, $PRIVATE | $STATIC, $staticField(Append, io)},
	{"nio", "[Ljava/lang/Class;", nullptr, $PRIVATE | $STATIC, $staticField(Append, nio)},
	{}
};

$MethodInfo _Append_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Append::*)()>(&Append::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Append::main))},
	{"test", "(Ljava/lang/Class;Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Class*,bool)>(&Append::test))},
	{"test", "(Ljava/lang/reflect/Method;Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Method*,bool)>(&Append::test))},
	{}
};

$ClassInfo _Append_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Append",
	"java.lang.Object",
	nullptr,
	_Append_FieldInfo_,
	_Append_MethodInfo_
};

$Object* allocate$Append($Class* clazz) {
	return $of($alloc(Append));
}

$ClassArray* Append::io = nullptr;
$ClassArray* Append::nio = nullptr;

void Append::init$() {
}

void Append::main($StringArray* args) {
	$init(Append);
	for (int32_t i = 0; i < $nc(Append::io)->length; ++i) {
		test($nc(Append::io)->get(i), true);
	}
	for (int32_t i = 0; i < $nc(Append::nio)->length; ++i) {
		test($nc(Append::nio)->get(i), false);
	}
}

void Append::test($Class* c, bool io) {
	$init(Append);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$init($Character);
		$var($ClassArray, cparams, $new($ClassArray, {$Character::TYPE}));
		test($($nc(c)->getMethod("append"_s, cparams)), io);
		$load($CharSequence);
		$var($ClassArray, csparams, $new($ClassArray, {$CharSequence::class$}));
		test($($nc(c)->getMethod("append"_s, csparams)), io);
	} catch ($NoSuchMethodException& x) {
		$throwNew($RuntimeException, "No append method found"_s);
	}
}

void Append::test($Method* m, bool io) {
	$init(Append);
	$var($ClassArray, ca, $nc(m)->getExceptionTypes());
	bool found = false;
	for (int32_t i = 0; i < $nc(ca)->length; ++i) {
		$load($IOException);
		if ($nc($of(ca->get(i)))->equals($IOException::class$)) {
			found = true;
			break;
		}
	}
	if (found && !io) {
		$throwNew($RuntimeException, "Unexpected IOException"_s);
	}
	if (!found && io) {
		$throwNew($RuntimeException, "Missing IOException"_s);
	}
}

void clinit$Append($Class* class$) {
	$load($Writer);
	$load($BufferedWriter);
	$load($FilterWriter);
	$load($OutputStreamWriter);
	$load($FileWriter);
	$assignStatic(Append::io, $new($ClassArray, {
		$Writer::class$,
		$BufferedWriter::class$,
		$FilterWriter::class$,
		$OutputStreamWriter::class$,
		$FileWriter::class$
	}));
	$load($CharArrayWriter);
	$load($StringWriter);
	$load($PrintWriter);
	$load($PrintStream);
	$assignStatic(Append::nio, $new($ClassArray, {
		$CharArrayWriter::class$,
		$StringWriter::class$,
		$PrintWriter::class$,
		$PrintStream::class$
	}));
}

Append::Append() {
}

$Class* Append::load$($String* name, bool initialize) {
	$loadClass(Append, name, initialize, &_Append_ClassInfo_, clinit$Append, allocate$Append);
	return class$;
}

$Class* Append::class$ = nullptr;