#include <EncodingConstructor.h>
#include <java/io/ByteArrayOutputStream.h>
#include <jcpp.h>

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

void EncodingConstructor::init$() {
}

void EncodingConstructor::main($StringArray* args) {
	$useLocalObjectStack();
	$var($ByteArrayOutputStream, bo, $new($ByteArrayOutputStream));
	$var($String, s, "xyzzy"_s);
	int32_t n = s->length();
	{
		$var($PrintStream, ps, $new($PrintStream, bo, false, "UTF-8"_s));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				ps->print(s);
			} catch ($Throwable& t$) {
				try {
					ps->close();
				} catch ($Throwable& x2) {
					t$->addSuppressed(x2);
				}
				$throw(t$);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			ps->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$var($bytes, ba, bo->toByteArray());
	if ($nc(ba)->length != n) {
		$throwNew($Exception, $$str({"Length mismatch: "_s, $$str(n), " "_s, $$str(ba->length)}));
	}
	for (int32_t i = 0; i < n; ++i) {
		if (ba->get(i) != (int8_t)s->charAt(i)) {
			$var($StringBuilder, var$2, $new($StringBuilder));
			var$2->append("Content mismatch: "_s);
			var$2->append(i);
			var$2->append(" "_s);
			var$2->append($($Integer::toString(ba->get(i))));
			var$2->append(" "_s);
			var$2->append($($Integer::toString(s->charAt(i))));
			$throwNew($Exception, $$str(var$2));
		}
	}
}

EncodingConstructor::EncodingConstructor() {
}

$Class* EncodingConstructor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(EncodingConstructor, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(EncodingConstructor, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"EncodingConstructor",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(EncodingConstructor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EncodingConstructor);
	});
	return class$;
}

$Class* EncodingConstructor::class$ = nullptr;