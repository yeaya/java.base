#include <EncodingConstructor.h>

#include <java/io/ByteArrayOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

$MethodInfo _EncodingConstructor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(EncodingConstructor::*)()>(&EncodingConstructor::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&EncodingConstructor::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _EncodingConstructor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"EncodingConstructor",
	"java.lang.Object",
	nullptr,
	nullptr,
	_EncodingConstructor_MethodInfo_
};

$Object* allocate$EncodingConstructor($Class* clazz) {
	return $of($alloc(EncodingConstructor));
}

void EncodingConstructor::init$() {
}

void EncodingConstructor::main($StringArray* args) {
	$var($ByteArrayOutputStream, bo, $new($ByteArrayOutputStream));
	$var($String, s, "xyzzy"_s);
	int32_t n = s->length();
	{
		$var($PrintStream, ps, $new($PrintStream, static_cast<$OutputStream*>(bo), false, "UTF-8"_s));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					ps->print(s);
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						ps->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				ps->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	$var($bytes, ba, bo->toByteArray());
	if ($nc(ba)->length != n) {
		$throwNew($Exception, $$str({"Length mismatch: "_s, $$str(n), " "_s, $$str(ba->length)}));
	}
	for (int32_t i = 0; i < n; ++i) {
		if ($nc(ba)->get(i) != (int8_t)s->charAt(i)) {
			$var($String, var$1, $$str({"Content mismatch: "_s, $$str(i), " "_s, $($Integer::toString(ba->get(i))), " "_s}));
			$throwNew($Exception, $$concat(var$1, $($Integer::toString(s->charAt(i)))));
		}
	}
}

EncodingConstructor::EncodingConstructor() {
}

$Class* EncodingConstructor::load$($String* name, bool initialize) {
	$loadClass(EncodingConstructor, name, initialize, &_EncodingConstructor_ClassInfo_, allocate$EncodingConstructor);
	return class$;
}

$Class* EncodingConstructor::class$ = nullptr;